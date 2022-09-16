
#include <stdio.h>
#ifndef NULL
    #define NULL 0
#endif

#ifndef XOBJ_TYPEDEF_LineMetaData
#define XOBJ_TYPEDEF_LineMetaData
typedef   struct LineMetaData_s * LineMetaData;
 static inline LineMetaData LineMetaData_getp(LineMetaData restrict  obj){
  int64_t offset=0;
  return (LineMetaData)(( char*) obj+offset);
}
 static inline ArrNInt64 LineMetaData_getp_ele_offsets(LineMetaData restrict  obj){
  int64_t offset=0;
  offset+=16;
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t LineMetaData_len_ele_offsets(LineMetaData restrict  obj){
  int64_t offset=0;
  offset+=16;
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t LineMetaData_get_ele_offsets(const LineMetaData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=16;
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void LineMetaData_set_ele_offsets(LineMetaData restrict  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=16;
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* LineMetaData_getp1_ele_offsets(LineMetaData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=16;
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 LineMetaData_getp_ele_typeids(LineMetaData restrict  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+8);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t LineMetaData_len_ele_typeids(LineMetaData restrict  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+8);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t LineMetaData_get_ele_typeids(const LineMetaData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+8);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void LineMetaData_set_ele_typeids(LineMetaData restrict  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+8);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* LineMetaData_getp1_ele_typeids(LineMetaData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+8);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_SimStateData
#define XOBJ_TYPEDEF_SimStateData
typedef   struct SimStateData_s * SimStateData;
 static inline SimStateData SimStateData_getp(SimStateData restrict  obj){
  int64_t offset=0;
  return (SimStateData)(( char*) obj+offset);
}
 static inline ParticlesData SimStateData_getp_particles(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  return (ParticlesData)(( char*) obj+offset);
}
 static inline int64_t SimStateData_get_particles__capacity(const SimStateData restrict  obj){
  int64_t offset=0;
  offset+=32;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles__capacity(SimStateData restrict  obj, int64_t value){
  int64_t offset=0;
  offset+=32;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimStateData_getp_particles__capacity(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=32;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t SimStateData_get_particles__num_active_particles(const SimStateData restrict  obj){
  int64_t offset=0;
  offset+=40;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles__num_active_particles(SimStateData restrict  obj, int64_t value){
  int64_t offset=0;
  offset+=40;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimStateData_getp_particles__num_active_particles(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=40;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t SimStateData_get_particles__num_lost_particles(const SimStateData restrict  obj){
  int64_t offset=0;
  offset+=48;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles__num_lost_particles(SimStateData restrict  obj, int64_t value){
  int64_t offset=0;
  offset+=48;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimStateData_getp_particles__num_lost_particles(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=48;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t SimStateData_get_particles_start_tracking_at_element(const SimStateData restrict  obj){
  int64_t offset=0;
  offset+=56;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_start_tracking_at_element(SimStateData restrict  obj, int64_t value){
  int64_t offset=0;
  offset+=56;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimStateData_getp_particles_start_tracking_at_element(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=56;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline double SimStateData_get_particles_q0(const SimStateData restrict  obj){
  int64_t offset=0;
  offset+=64;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_q0(SimStateData restrict  obj, double value){
  int64_t offset=0;
  offset+=64;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp_particles_q0(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=64;
  return ( double*)(( char*) obj+offset);
}
 static inline double SimStateData_get_particles_mass0(const SimStateData restrict  obj){
  int64_t offset=0;
  offset+=72;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_mass0(SimStateData restrict  obj, double value){
  int64_t offset=0;
  offset+=72;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp_particles_mass0(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=72;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_p0c(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=272;
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_p0c(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=272;
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_p0c(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=272;
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_p0c(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=272;
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_p0c(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=272;
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_gamma0(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_gamma0(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+56);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_gamma0(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_gamma0(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_gamma0(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_beta0(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_beta0(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+64);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_beta0(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_beta0(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_beta0(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_s(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_s(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+72);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_s(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_s(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_s(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_x(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_x(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+80);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_x(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_x(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_x(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_y(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_y(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+88);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_y(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_y(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_y(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_px(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_px(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+96);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_px(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_px(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_px(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_py(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_py(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+104);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_py(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_py(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_py(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_zeta(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_zeta(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+112);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_zeta(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_zeta(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_zeta(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_ptau(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_ptau(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+120);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_ptau(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_ptau(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_ptau(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_delta(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_delta(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+128);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_delta(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_delta(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_delta(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_rpp(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_rpp(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+136);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_rpp(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_rpp(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_rpp(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_rvv(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_rvv(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+144);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_rvv(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_rvv(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_rvv(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_chi(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_chi(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+152);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_chi(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_chi(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_chi(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_charge_ratio(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_charge_ratio(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+160);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_charge_ratio(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_charge_ratio(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_charge_ratio(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimStateData_getp_particles_weight(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_weight(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+168);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimStateData_get_particles_weight(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_weight(SimStateData restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimStateData_getp1_particles_weight(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNInt64 SimStateData_getp_particles_particle_id(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_particle_id(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+176);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t SimStateData_get_particles_particle_id(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_particle_id(SimStateData restrict  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimStateData_getp1_particles_particle_id(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 SimStateData_getp_particles_at_element(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_at_element(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+184);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t SimStateData_get_particles_at_element(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_at_element(SimStateData restrict  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimStateData_getp1_particles_at_element(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 SimStateData_getp_particles_at_turn(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_at_turn(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+192);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t SimStateData_get_particles_at_turn(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_at_turn(SimStateData restrict  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimStateData_getp1_particles_at_turn(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 SimStateData_getp_particles_state(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_state(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+200);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t SimStateData_get_particles_state(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_state(SimStateData restrict  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimStateData_getp1_particles_state(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 SimStateData_getp_particles_parent_particle_id(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles_parent_particle_id(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+208);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t SimStateData_get_particles_parent_particle_id(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles_parent_particle_id(SimStateData restrict  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimStateData_getp1_particles_parent_particle_id(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 SimStateData_getp_particles__rng_s1(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles__rng_s1(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+216);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t SimStateData_get_particles__rng_s1(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles__rng_s1(SimStateData restrict  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* SimStateData_getp1_particles__rng_s1(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 SimStateData_getp_particles__rng_s2(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles__rng_s2(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+224);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t SimStateData_get_particles__rng_s2(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles__rng_s2(SimStateData restrict  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* SimStateData_getp1_particles__rng_s2(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 SimStateData_getp_particles__rng_s3(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles__rng_s3(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+232);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t SimStateData_get_particles__rng_s3(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles__rng_s3(SimStateData restrict  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* SimStateData_getp1_particles__rng_s3(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 SimStateData_getp_particles__rng_s4(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t SimStateData_len_particles__rng_s4(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+240);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t SimStateData_get_particles__rng_s4(const SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void SimStateData_set_particles__rng_s4(SimStateData restrict  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* SimStateData_getp1_particles__rng_s4(SimStateData restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline int64_t SimStateData_get_i_turn(const SimStateData restrict  obj){
  int64_t offset=0;
  offset+=8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimStateData_set_i_turn(SimStateData restrict  obj, int64_t value){
  int64_t offset=0;
  offset+=8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimStateData_getp_i_turn(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t SimStateData_get_size(const SimStateData restrict  obj){
  int64_t offset=0;
  offset+=16;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimStateData_set_size(SimStateData restrict  obj, int64_t value){
  int64_t offset=0;
  offset+=16;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimStateData_getp_size(SimStateData restrict  obj){
  int64_t offset=0;
  offset+=16;
  return ( int64_t*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_SimConfig
#define XOBJ_TYPEDEF_SimConfig
typedef   struct SimConfig_s * SimConfig;
 static inline SimConfig SimConfig_getp(SimConfig restrict  obj){
  int64_t offset=0;
  return (SimConfig)(( char*) obj+offset);
}
 static inline LineMetaData SimConfig_getp_line_metadata(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset);
  return (LineMetaData)(( char*) obj+offset);
}
 static inline ArrNInt64 SimConfig_getp_line_metadata_ele_offsets(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=16;
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_line_metadata_ele_offsets(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=16;
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t SimConfig_get_line_metadata_ele_offsets(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=16;
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_line_metadata_ele_offsets(SimConfig restrict  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=16;
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimConfig_getp1_line_metadata_ele_offsets(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=16;
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 SimConfig_getp_line_metadata_ele_typeids(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=*( int64_t*)(( char*) obj+offset+8);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_line_metadata_ele_typeids(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=*( int64_t*)(( char*) obj+offset+8);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t SimConfig_get_line_metadata_ele_typeids(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=*( int64_t*)(( char*) obj+offset+8);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_line_metadata_ele_typeids(SimConfig restrict  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=*( int64_t*)(( char*) obj+offset+8);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimConfig_getp1_line_metadata_ele_typeids(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=*( int64_t*)(( char*) obj+offset+8);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t SimConfig_get_num_turns(const SimConfig restrict  obj){
  int64_t offset=0;
  offset+=8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_num_turns(SimConfig restrict  obj, int64_t value){
  int64_t offset=0;
  offset+=8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimConfig_getp_num_turns(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t SimConfig_get_checkpoint_every(const SimConfig restrict  obj){
  int64_t offset=0;
  offset+=16;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_checkpoint_every(SimConfig restrict  obj, int64_t value){
  int64_t offset=0;
  offset+=16;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimConfig_getp_checkpoint_every(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=16;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline SimStateData SimConfig_getp_sim_state(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  return (SimStateData)(( char*) obj+offset);
}
 static inline ParticlesData SimConfig_getp_sim_state_particles(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  return (ParticlesData)(( char*) obj+offset);
}
 static inline int64_t SimConfig_get_sim_state_particles__capacity(const SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=32;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles__capacity(SimConfig restrict  obj, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=32;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimConfig_getp_sim_state_particles__capacity(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=32;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t SimConfig_get_sim_state_particles__num_active_particles(const SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=40;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles__num_active_particles(SimConfig restrict  obj, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=40;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimConfig_getp_sim_state_particles__num_active_particles(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=40;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t SimConfig_get_sim_state_particles__num_lost_particles(const SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=48;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles__num_lost_particles(SimConfig restrict  obj, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=48;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimConfig_getp_sim_state_particles__num_lost_particles(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=48;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t SimConfig_get_sim_state_particles_start_tracking_at_element(const SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=56;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_start_tracking_at_element(SimConfig restrict  obj, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=56;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimConfig_getp_sim_state_particles_start_tracking_at_element(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=56;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline double SimConfig_get_sim_state_particles_q0(const SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=64;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_q0(SimConfig restrict  obj, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=64;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp_sim_state_particles_q0(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=64;
  return ( double*)(( char*) obj+offset);
}
 static inline double SimConfig_get_sim_state_particles_mass0(const SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=72;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_mass0(SimConfig restrict  obj, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=72;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp_sim_state_particles_mass0(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=72;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_p0c(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=272;
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_p0c(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=272;
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_p0c(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=272;
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_p0c(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=272;
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_p0c(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=272;
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_gamma0(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_gamma0(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+56);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_gamma0(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_gamma0(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_gamma0(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_beta0(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_beta0(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+64);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_beta0(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_beta0(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_beta0(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_s(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_s(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+72);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_s(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_s(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_s(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_x(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_x(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+80);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_x(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_x(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_x(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_y(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_y(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+88);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_y(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_y(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_y(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_px(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_px(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+96);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_px(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_px(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_px(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_py(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_py(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+104);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_py(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_py(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_py(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_zeta(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_zeta(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+112);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_zeta(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_zeta(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_zeta(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_ptau(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_ptau(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+120);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_ptau(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_ptau(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_ptau(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_delta(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_delta(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+128);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_delta(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_delta(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_delta(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_rpp(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_rpp(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+136);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_rpp(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_rpp(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_rpp(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_rvv(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_rvv(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+144);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_rvv(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_rvv(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_rvv(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_chi(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_chi(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+152);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_chi(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_chi(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_chi(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_charge_ratio(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_charge_ratio(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+160);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_charge_ratio(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_charge_ratio(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_charge_ratio(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SimConfig_getp_sim_state_particles_weight(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_weight(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+168);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SimConfig_get_sim_state_particles_weight(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_weight(SimConfig restrict  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SimConfig_getp1_sim_state_particles_weight(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNInt64 SimConfig_getp_sim_state_particles_particle_id(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_particle_id(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+176);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t SimConfig_get_sim_state_particles_particle_id(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_particle_id(SimConfig restrict  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimConfig_getp1_sim_state_particles_particle_id(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 SimConfig_getp_sim_state_particles_at_element(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_at_element(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+184);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t SimConfig_get_sim_state_particles_at_element(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_at_element(SimConfig restrict  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimConfig_getp1_sim_state_particles_at_element(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 SimConfig_getp_sim_state_particles_at_turn(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_at_turn(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+192);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t SimConfig_get_sim_state_particles_at_turn(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_at_turn(SimConfig restrict  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimConfig_getp1_sim_state_particles_at_turn(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 SimConfig_getp_sim_state_particles_state(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_state(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+200);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t SimConfig_get_sim_state_particles_state(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_state(SimConfig restrict  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimConfig_getp1_sim_state_particles_state(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 SimConfig_getp_sim_state_particles_parent_particle_id(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles_parent_particle_id(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+208);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t SimConfig_get_sim_state_particles_parent_particle_id(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles_parent_particle_id(SimConfig restrict  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimConfig_getp1_sim_state_particles_parent_particle_id(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 SimConfig_getp_sim_state_particles__rng_s1(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles__rng_s1(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+216);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t SimConfig_get_sim_state_particles__rng_s1(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles__rng_s1(SimConfig restrict  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* SimConfig_getp1_sim_state_particles__rng_s1(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 SimConfig_getp_sim_state_particles__rng_s2(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles__rng_s2(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+224);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t SimConfig_get_sim_state_particles__rng_s2(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles__rng_s2(SimConfig restrict  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* SimConfig_getp1_sim_state_particles__rng_s2(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 SimConfig_getp_sim_state_particles__rng_s3(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles__rng_s3(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+232);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t SimConfig_get_sim_state_particles__rng_s3(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles__rng_s3(SimConfig restrict  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* SimConfig_getp1_sim_state_particles__rng_s3(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 SimConfig_getp_sim_state_particles__rng_s4(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t SimConfig_len_sim_state_particles__rng_s4(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+240);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t SimConfig_get_sim_state_particles__rng_s4(const SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_particles__rng_s4(SimConfig restrict  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* SimConfig_getp1_sim_state_particles__rng_s4(SimConfig restrict  obj, int64_t i0){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline int64_t SimConfig_get_sim_state_i_turn(const SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_i_turn(SimConfig restrict  obj, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimConfig_getp_sim_state_i_turn(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t SimConfig_get_sim_state_size(const SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=16;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SimConfig_set_sim_state_size(SimConfig restrict  obj, int64_t value){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=16;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SimConfig_getp_sim_state_size(SimConfig restrict  obj){
  int64_t offset=0;
  offset+=24;
  offset+=*( int64_t*)(( char*) obj+offset);
  offset+=16;
  return ( int64_t*)(( char*) obj+offset);
}
#endif