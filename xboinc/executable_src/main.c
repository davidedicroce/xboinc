#include <math.h>

#include "xtrack_tracker.h"
#include "sim_config.h"

#include <stdio.h>
#include <stdlib.h>

int8_t* file_to_buffer(char *filename){

    FILE *sim_fid;

    // Get buffer
    sim_fid = fopen(filename, "rb");
    if (!sim_fid){
        return NULL;
    }
    fseek(sim_fid, 0L, SEEK_END);
    unsigned long filesize = ftell(sim_fid);
    fseek(sim_fid, 0L, SEEK_SET);
    int8_t* buf = malloc(filesize*sizeof(int8_t));
    fread(buf, sizeof(int8_t), filesize, sim_fid);
    fclose(sim_fid);

    return (buf);
}

int main(){


    int8_t* sim_buffer = file_to_buffer("./xboinc_input.bin");
    if (!sim_buffer){
        printf("Error: could not read simulation input file\n");
        return -1;
    }

    // Get sim config
    SimConfig sim_config = (SimConfig) sim_buffer;

    const int64_t num_turns = SimConfig_get_num_turns(sim_config);
    const int64_t num_elements = SimConfig_len_line_metadata_ele_offsets(sim_config);

    printf("num_turns: %d\n", (int) num_turns);
    printf("num_elements: %d\n", (int) num_elements);

    int64_t* line_ele_offsets = SimConfig_getp1_line_metadata_ele_offsets(sim_config, 0);
    int64_t* line_ele_typeids = SimConfig_getp1_line_metadata_ele_typeids(sim_config, 0);
    ParticlesData particles = SimConfig_getp_sim_state_particles(sim_config);
    SimStateData sim_state = SimConfig_getp_sim_state(sim_config);

    // This is what we want to call
    while (SimStateData_get_i_turn(sim_state) < num_turns){
        track_line(
            sim_buffer, //    int8_t* buffer,
            line_ele_offsets, //    int64_t* ele_offsets,
            line_ele_typeids, //    int64_t* ele_typeids,
            particles, //    ParticlesData particles,
            1, //    int num_turns,
            0, //    int ele_start,
            (int) num_elements, //    int num_ele_track,
            1, //int flag_end_turn_actions,
            0, //int flag_reset_s_at_end_turn,
            0, //    int flag_monitor,
            NULL,//    int8_t* buffer_tbt_monitor,
            0//    int64_t offset_tbt_monitor
        );
        SimStateData_set_i_turn(sim_state, SimStateData_get_i_turn(sim_state) + 1);
    }

    // Quick check
    for (int ii=0; ii<ParticlesData_get__capacity(particles); ii++){
        printf("s[%d] = %e\n", ii, ParticlesData_get_s(particles, (int64_t) ii));
    }

    FILE *out_fid;
    out_fid = fopen("./sim_state_out.bin", "wb");
    fwrite(SimConfig_getp_sim_state(sim_config), sizeof(int8_t),
           SimConfig_get_sim_state_size(sim_config), out_fid);
    return 0;

}
