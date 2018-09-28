//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: JdXdR.cpp
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 25-Sep-2018 15:10:38
//

// Include Files
#include "rt_nonfinite.h"
#include "JdXdR.h"
#include "rdivide.h"

// Function Declarations
static double rt_powd_snf(double u0, double u1);

// Function Definitions

//
// Arguments    : double u0
//                double u1
// Return Type  : double
//
static double rt_powd_snf(double u0, double u1)
{
  double y;
  double d0;
  double d1;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    d0 = fabs(u0);
    d1 = fabs(u1);
    if (rtIsInf(u1)) {
      if (d0 == 1.0) {
        y = rtNaN;
      } else if (d0 > 1.0) {
        if (u1 > 0.0) {
          y = rtInf;
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = rtInf;
      }
    } else if (d1 == 0.0) {
      y = 1.0;
    } else if (d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = rtNaN;
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

//
// JDXDR
//     JDXDR = JDXDR(FX_P,FY_P,CX_P,CY_P,R11,R21,R31,R12,R22,R32,R13,R23,R33,T1,T2,T3,S1,S2,S3,R,X1_P,X2_P)
// Arguments    : double fx_p
//                double fy_p
//                double cx_p
//                double cy_p
//                double r11
//                double r21
//                double r31
//                double r12
//                double r22
//                double r32
//                double r13
//                double r23
//                double r33
//                double t1
//                double t2
//                double t3
//                double s1
//                double s2
//                double s3
//                double r
//                double x1_p
//                double x2_p
//                double b_JdXdR[27]
// Return Type  : void
//
void JdXdR(double fx_p, double fy_p, double cx_p, double cy_p, double r11,
           double r21, double r31, double r12, double r22, double r32, double
           r13, double r23, double r33, double t1, double t2, double t3, double
           s1, double s2, double s3, double r, double x1_p, double x2_p, double
           b_JdXdR[27])
{
  double t20;
  double t21;
  double t5;
  double t9;
  double t10;
  double t31;
  double t32;
  double t11;
  double t42;
  double t43;
  double t15;
  double t26;
  double t37;
  double t48;
  double t52;
  double t57;
  double t70;
  double t53;
  double t79;
  double t58;
  double t62;
  double t63;
  double t72;
  double t95;
  double t96;
  double t97;
  double t85;
  double t90;
  double t92;
  double t93;
  double t99;
  double t100;
  double t104;
  double t107;
  double t111;
  double t114;
  double t121;
  double t115;
  double t118;
  double t124;
  double t119;
  double t122;
  double t125;
  double t127;
  double t129;
  double t133;
  double t135;
  double t136;
  double t139;
  double t140;
  double t142;
  double t145;
  double t149;
  double t152;
  double t155;
  double t162;
  double t156;
  double t159;
  double t165;
  double t160;
  double t163;
  double t166;
  double t168;
  double t170;
  double t171;
  double t173;
  double t175;
  double t178;
  double t181;
  double t184;
  double t191;
  double t185;
  double t188;
  double t194;
  double t189;
  double t192;
  double t195;
  double t200;
  double t201;
  double t203;
  double t206;
  double t210;
  double t213;
  double t218;
  double t214;
  double t216;
  double t219;
  double t221;
  double t222;
  double t223;
  double t224;
  double t226;
  double t229;
  double t231;
  double t234;
  double t237;
  double t241;
  double t238;
  double t239;
  double t242;
  double t244;
  double t245;
  double t246;
  double t247;
  double t249;
  double t251;
  double t254;
  double t257;
  double t262;
  double t258;
  double t260;
  double t263;
  double t266;
  double t267;
  double t268;
  double t269;
  double t271;
  double t274;
  double t276;
  double t277;
  double t278;
  double t279;
  double t280;
  double t281;
  double t282;
  double t283;
  double t284;
  double t285;
  double t287;
  double t290;
  double t292;
  double t293;
  double t295;
  double t296;
  double t297;
  double t298;
  double t299;
  double t300;
  double t301;
  double t303;
  double t305;
  double t306;
  double t307;
  double t308;
  double t309;
  double t310;
  double t311;
  double t312;
  double t313;
  double t314;
  double t315;
  double t316;
  double t330;
  double t331;
  double t332;
  double t333;
  double t329;
  double t337;
  double t351;
  double t352;
  double t353;
  double t354;
  double t350;
  double t358;
  double t374;
  double t375;
  double t376;
  double t377;
  double t373;
  double t383;
  double t397;
  double t398;
  double t399;
  double t396;
  double t404;
  double t418;
  double t419;
  double t420;
  double t417;
  double t425;
  double t439;
  double t440;
  double t441;
  double t438;
  double t446;
  double t460;
  double t461;
  double t459;
  double t467;
  double t481;
  double t482;
  double t480;
  double t488;
  double t500;
  double t501;
  double t499;
  double t505;
  double t509;
  double t512;
  double t516;
  double t519;
  double t521;
  double t522;
  double t526;
  double t531;
  double t536;
  double t540;
  double t543;
  double t548;
  double x[27];

  //     This function was generated by the Symbolic Math Toolbox version 6.2.
  //     11-Aug-2016 17:52:32
  t20 = fx_p * fy_p * r11 * r22;
  t21 = fx_p * fy_p * r12 * r21;
  t5 = ((((((((cy_p * fx_p * r11 * r32 - cy_p * fx_p * r12 * r31) - cx_p * fy_p *
              r21 * r32) + cx_p * fy_p * r22 * r31) + t20) - t21) - fx_p * r11 *
          r32 * x2_p) + fx_p * r12 * r31 * x2_p) + fy_p * r21 * r32 * x1_p) -
    fy_p * r22 * r31 * x1_p;
  t9 = ((((fx_p * fy_p * r11 * r22 * r33 + fx_p * fy_p * r12 * r23 * r31) + fx_p
          * fy_p * r13 * r21 * r32) - fx_p * fy_p * r11 * r23 * r32) - fx_p *
        fy_p * r12 * r21 * r33) - fx_p * fy_p * r13 * r22 * r31;
  t10 = rdivide(1.0, t9 * t9);
  t31 = fx_p * fy_p * r11 * r23;
  t32 = fx_p * fy_p * r13 * r21;
  t11 = ((((((((cy_p * fx_p * r11 * r33 - cy_p * fx_p * r13 * r31) - cx_p * fy_p
               * r21 * r33) + cx_p * fy_p * r23 * r31) + t31) - t32) - fx_p *
           r11 * r33 * x2_p) + fx_p * r13 * r31 * x2_p) + fy_p * r21 * r33 *
         x1_p) - fy_p * r23 * r31 * x1_p;
  t42 = fx_p * fy_p * r12 * r23;
  t43 = fx_p * fy_p * r13 * r22;
  t15 = ((((((((cy_p * fx_p * r12 * r33 - cy_p * fx_p * r13 * r32) - cx_p * fy_p
               * r22 * r33) + cx_p * fy_p * r23 * r32) + t42) - t43) - fx_p *
           r12 * r33 * x2_p) + fx_p * r13 * r32 * x2_p) + fy_p * r22 * r33 *
         x1_p) - fy_p * r23 * r32 * x1_p;
  t26 = t5 * t5;
  t37 = t11 * t11;
  t48 = t15 * t15;
  t52 = ((((r11 * r22 * r33 + r12 * r23 * r31) + r13 * r21 * r32) - r11 * r23 *
          r32) - r12 * r21 * r33) - r13 * r22 * r31;
  t57 = rdivide(1.0, t52);
  t70 = ((((r11 * r22 * t3 - r12 * r21 * t3) - r11 * r32 * t2) + r12 * r31 * t2)
         + r21 * r32 * t1) - r22 * r31 * t1;
  t53 = s3 + t57 * t70;
  t79 = ((((r11 * r23 * t3 - r13 * r21 * t3) - r11 * r33 * t2) + r13 * r31 * t2)
         + r21 * r33 * t1) - r23 * r31 * t1;
  t58 = s2 - t57 * t79;
  t62 = ((((r12 * r23 * t3 + r13 * r32 * t2) + r22 * r33 * t1) - r13 * r22 * t3)
         - r12 * r33 * t2) - r23 * r32 * t1;
  t63 = s1 + t57 * t62;
  t72 = rdivide(1.0, t9);
  t95 = t5 * t53 * t72 * 2.0;
  t96 = t11 * t58 * t72 * 2.0;
  t97 = t15 * t63 * t72 * 2.0;
  t85 = (t95 - t96) + t97;
  t90 = ((t53 * t53 + t58 * t58) + t63 * t63) - r * r;
  t92 = fx_p * fy_p * r22 * r33 - fx_p * fy_p * r23 * r32;
  t93 = rdivide(1.0, rt_powd_snf(t9, 3.0));
  t99 = r22 * r33 - r23 * r32;
  t100 = rdivide(1.0, t52 * t52);
  t104 = (cy_p * fx_p * r32 + fx_p * fy_p * r22) - fx_p * r32 * x2_p;
  t107 = (cy_p * fx_p * r33 + fx_p * fy_p * r23) - fx_p * r33 * x2_p;
  t111 = (t10 * t26 * 4.0 + t10 * t37 * 4.0) + t10 * t48 * 4.0;
  t114 = t57 * (r22 * t3 - r32 * t2);
  t121 = t70 * t99 * t100;
  t115 = t114 - t121;
  t118 = t57 * (r23 * t3 - r33 * t2);
  t124 = t79 * t99 * t100;
  t119 = t118 - t124;
  t122 = t5 * t72 * t115 * 2.0;
  t125 = t11 * t72 * t119 * 2.0;
  t127 = t53 * t72 * t104 * 2.0;
  t129 = t10 * t11 * t58 * t92 * 2.0;
  t133 = (t10 * t26 + t10 * t37) + t10 * t48;
  t135 = t85 * t85 - t90 * t111;
  t136 = rdivide(1.0, t133);
  t139 = ((t95 - t96) + t97) + sqrt(t135);
  t140 = rdivide(1.0, sqrt(t135));
  t142 = fx_p * fy_p * r12 * r33 - fx_p * fy_p * r13 * r32;
  t145 = r12 * r33 - r13 * r32;
  t149 = (cx_p * fy_p * r32 + fx_p * fy_p * r12) - fy_p * r32 * x1_p;
  t152 = (cx_p * fy_p * r33 + fx_p * fy_p * r13) - fy_p * r33 * x1_p;
  t155 = t57 * (r12 * t3 - r32 * t1);
  t162 = t70 * t100 * t145;
  t156 = t155 - t162;
  t159 = t57 * (r13 * t3 - r33 * t1);
  t165 = t79 * t100 * t145;
  t160 = t159 - t165;
  t163 = t5 * t72 * t156 * 2.0;
  t166 = t11 * t72 * t160 * 2.0;
  t168 = t53 * t72 * t149 * 2.0;
  t170 = t10 * t11 * t58 * t142 * 2.0;
  t171 = rdivide(1.0, t133 * t133);
  t173 = r12 * r23 - r13 * r22;
  t175 = t42 - t43;
  t178 = ((cy_p * fx_p * r12 + fy_p * r22 * x1_p) - cx_p * fy_p * r22) - fx_p *
    r12 * x2_p;
  t181 = ((cy_p * fx_p * r13 + fy_p * r23 * x1_p) - cx_p * fy_p * r23) - fx_p *
    r13 * x2_p;
  t184 = t57 * (r12 * t2 - r22 * t1);
  t191 = t70 * t100 * t173;
  t185 = t184 - t191;
  t188 = t57 * (r13 * t2 - r23 * t1);
  t194 = t79 * t100 * t173;
  t189 = t188 - t194;
  t192 = t5 * t72 * t185 * 2.0;
  t195 = t11 * t72 * t189 * 2.0;
  t200 = t58 * t72 * t181 * 2.0;
  t201 = t10 * t11 * t58 * t175 * 2.0;
  t203 = fx_p * fy_p * r21 * r33 - fx_p * fy_p * r23 * r31;
  t206 = r21 * r33 - r23 * r31;
  t210 = (cy_p * fx_p * r31 + fx_p * fy_p * r21) - fx_p * r31 * x2_p;
  t213 = t57 * (r21 * t3 - r31 * t2);
  t218 = t70 * t100 * t206;
  t214 = t213 - t218;
  t216 = t118 + t62 * t100 * t206;
  t219 = t15 * t72 * t216 * 2.0;
  t221 = t63 * t72 * t107 * 2.0;
  t222 = t5 * t10 * t53 * t203 * 2.0;
  t223 = t10 * t15 * t63 * t203 * 2.0;
  t224 = t11 * t72 * t79 * t100 * t206 * 2.0;
  t226 = fx_p * fy_p * r11 * r33 - fx_p * fy_p * r13 * r31;
  t229 = r11 * r33 - r13 * r31;
  t231 = t62 * t100 * t229;
  t234 = (cx_p * fy_p * r31 + fx_p * fy_p * r11) - fy_p * r31 * x1_p;
  t237 = t57 * (r11 * t3 - r31 * t1);
  t241 = t70 * t100 * t229;
  t238 = t237 - t241;
  t239 = t159 + t231;
  t242 = t15 * t72 * t239 * 2.0;
  t244 = t63 * t72 * t152 * 2.0;
  t245 = t5 * t10 * t53 * t226 * 2.0;
  t246 = t10 * t15 * t63 * t226 * 2.0;
  t247 = t11 * t72 * t79 * t100 * t229 * 2.0;
  t249 = r11 * r23 - r13 * r21;
  t251 = t31 - t32;
  t254 = ((cy_p * fx_p * r11 + fy_p * r21 * x1_p) - cx_p * fy_p * r21) - fx_p *
    r11 * x2_p;
  t257 = t57 * (r11 * t2 - r21 * t1);
  t262 = t70 * t100 * t249;
  t258 = t257 - t262;
  t260 = t188 + t62 * t100 * t249;
  t263 = t15 * t72 * t260 * 2.0;
  t266 = t53 * t72 * t254 * 2.0;
  t267 = t5 * t10 * t53 * t251 * 2.0;
  t268 = t10 * t15 * t63 * t251 * 2.0;
  t269 = t11 * t72 * t79 * t100 * t249 * 2.0;
  t271 = fx_p * fy_p * r21 * r32 - fx_p * fy_p * r22 * r31;
  t274 = r21 * r32 - r22 * r31;
  t276 = t62 * t100 * t274;
  t277 = t79 * t100 * t274;
  t278 = t213 + t277;
  t279 = t114 + t276;
  t280 = t11 * t72 * t278 * 2.0;
  t281 = t15 * t72 * t279 * 2.0;
  t282 = t63 * t72 * t104 * 2.0;
  t283 = t5 * t10 * t53 * t271 * 2.0;
  t284 = t10 * t15 * t63 * t271 * 2.0;
  t285 = t5 * t70 * t72 * t100 * t274 * 2.0;
  t287 = fx_p * fy_p * r11 * r32 - fx_p * fy_p * r12 * r31;
  t290 = r11 * r32 - r12 * r31;
  t292 = t79 * t100 * t290;
  t293 = t237 + t292;
  t295 = t155 + t62 * t100 * t290;
  t296 = t11 * t72 * t293 * 2.0;
  t297 = t15 * t72 * t295 * 2.0;
  t298 = t63 * t72 * t149 * 2.0;
  t299 = t5 * t10 * t53 * t287 * 2.0;
  t300 = t10 * t15 * t63 * t287 * 2.0;
  t301 = t5 * t70 * t72 * t100 * t290 * 2.0;
  t303 = r11 * r22 - r12 * r21;
  t305 = t62 * t100 * t303;
  t306 = t20 - t21;
  t307 = t79 * t100 * t303;
  t308 = t257 + t307;
  t309 = t184 + t305;
  t310 = t11 * t72 * t308 * 2.0;
  t311 = t15 * t72 * t309 * 2.0;
  t312 = t58 * t72 * t254 * 2.0;
  t313 = t5 * t10 * t53 * t306 * 2.0;
  t314 = t10 * t15 * t63 * t306 * 2.0;
  t315 = t5 * t70 * t72 * t100 * t303 * 2.0;
  t316 = t72 * t107 * t136 * t139 * rdivide(1.0, 2.0);
  t330 = t58 * t72 * t107 * 2.0;
  t331 = t5 * t10 * t53 * t92 * 2.0;
  t332 = t10 * t15 * t63 * t92 * 2.0;
  t333 = t15 * t62 * t72 * t99 * t100 * 2.0;
  t329 = t140 * ((t90 * ((((t26 * t92 * t93 * 8.0 + t37 * t92 * t93 * 8.0) + t48
    * t92 * t93 * 8.0) - t5 * t10 * t104 * 8.0) - t10 * t11 * t107 * 8.0) + t85 *
                  (((((((t122 + t125) + t127) + t129) - t330) - t331) - t332) -
                   t333) * 2.0) + t111 * ((t58 * t119 * 2.0 + t62 * t63 * t99 *
    t100 * 2.0) - t53 * t115 * 2.0)) * rdivide(1.0, 2.0);
  t337 = (((t26 * t92 * t93 * 2.0 + t37 * t92 * t93 * 2.0) + t48 * t92 * t93 *
           2.0) - t5 * t10 * t104 * 2.0) - t10 * t11 * t107 * 2.0;
  t351 = t58 * t72 * t152 * 2.0;
  t352 = t5 * t10 * t53 * t142 * 2.0;
  t353 = t10 * t15 * t63 * t142 * 2.0;
  t354 = t15 * t62 * t72 * t100 * t145 * 2.0;
  t350 = t140 * ((t90 * ((((t26 * t93 * t142 * 8.0 + t37 * t93 * t142 * 8.0) +
    t48 * t93 * t142 * 8.0) - t5 * t10 * t149 * 8.0) - t10 * t11 * t152 * 8.0) +
                  t85 * (((((((t163 + t166) + t168) + t170) - t351) - t352) -
    t353) - t354) * 2.0) + t111 * ((t58 * t160 * 2.0 + t62 * t63 * t100 * t145 *
    2.0) - t53 * t156 * 2.0)) * rdivide(1.0, 2.0);
  t358 = (((t26 * t93 * t142 * 2.0 + t37 * t93 * t142 * 2.0) + t48 * t93 * t142 *
           2.0) - t5 * t10 * t149 * 2.0) - t10 * t11 * t152 * 2.0;
  t374 = t53 * t72 * t178 * 2.0;
  t375 = t5 * t10 * t53 * t175 * 2.0;
  t376 = t10 * t15 * t63 * t175 * 2.0;
  t377 = t15 * t62 * t72 * t100 * t173 * 2.0;
  t373 = t140 * ((t85 * (((((((t192 + t195) + t200) + t201) - t374) - t375) -
    t376) - t377) * 2.0 + t90 * ((((t26 * t93 * t175 * 8.0 + t37 * t93 * t175 *
    8.0) + t48 * t93 * t175 * 8.0) + t5 * t10 * t178 * 8.0) + t10 * t11 * t181 *
    8.0)) + t111 * ((t58 * t189 * 2.0 + t62 * t63 * t100 * t173 * 2.0) - t53 *
                    t185 * 2.0)) * rdivide(1.0, 2.0);
  t383 = (((t26 * t93 * t175 * 2.0 + t37 * t93 * t175 * 2.0) + t48 * t93 * t175 *
           2.0) + t5 * t10 * t178 * 2.0) + t10 * t11 * t181 * 2.0;
  t397 = t5 * t72 * t214 * 2.0;
  t398 = t53 * t72 * t210 * 2.0;
  t399 = t10 * t11 * t58 * t203 * 2.0;
  t396 = t140 * ((t85 * (((((((t219 + t221) + t222) + t223) + t224) - t397) -
    t398) - t399) * 2.0 + t111 * ((t53 * t214 * 2.0 + t58 * t79 * t100 * t206 *
    2.0) - t63 * t216 * 2.0)) - t90 * ((((t26 * t93 * t203 * 8.0 + t37 * t93 *
    t203 * 8.0) + t48 * t93 * t203 * 8.0) + t10 * t15 * t107 * 8.0) - t5 * t10 *
    t210 * 8.0)) * rdivide(1.0, 2.0);
  t404 = (((t26 * t93 * t203 * 2.0 + t37 * t93 * t203 * 2.0) + t48 * t93 * t203 *
           2.0) + t10 * t15 * t107 * 2.0) - t5 * t10 * t210 * 2.0;
  t418 = t5 * t72 * t238 * 2.0;
  t419 = t53 * t72 * t234 * 2.0;
  t420 = t10 * t11 * t58 * t226 * 2.0;
  t417 = t140 * ((t85 * (((((((t242 + t244) + t245) + t246) + t247) - t418) -
    t419) - t420) * 2.0 + t111 * ((t53 * t238 * 2.0 + t58 * t79 * t100 * t229 *
    2.0) - t63 * t239 * 2.0)) - t90 * ((((t26 * t93 * t226 * 8.0 + t37 * t93 *
    t226 * 8.0) + t48 * t93 * t226 * 8.0) + t10 * t15 * t152 * 8.0) - t5 * t10 *
    t234 * 8.0)) * rdivide(1.0, 2.0);
  t425 = (((t26 * t93 * t226 * 2.0 + t37 * t93 * t226 * 2.0) + t48 * t93 * t226 *
           2.0) + t10 * t15 * t152 * 2.0) - t5 * t10 * t234 * 2.0;
  t439 = t5 * t72 * t258 * 2.0;
  t440 = t63 * t72 * t181 * 2.0;
  t441 = t10 * t11 * t58 * t251 * 2.0;
  t438 = t140 * ((t85 * (((((((t263 + t266) + t267) + t268) + t269) - t439) -
    t440) - t441) * 2.0 + t111 * ((t53 * t258 * 2.0 + t58 * t79 * t100 * t249 *
    2.0) - t63 * t260 * 2.0)) - t90 * ((((t26 * t93 * t251 * 8.0 + t37 * t93 *
    t251 * 8.0) + t48 * t93 * t251 * 8.0) + t5 * t10 * t254 * 8.0) - t10 * t15 *
    t181 * 8.0)) * rdivide(1.0, 2.0);
  t446 = (((t26 * t93 * t251 * 2.0 + t37 * t93 * t251 * 2.0) + t48 * t93 * t251 *
           2.0) + t5 * t10 * t254 * 2.0) - t10 * t15 * t181 * 2.0;
  t460 = t58 * t72 * t210 * 2.0;
  t461 = t10 * t11 * t58 * t271 * 2.0;
  t459 = (t90 * ((((t26 * t93 * t271 * 8.0 + t37 * t93 * t271 * 8.0) + t48 * t93
                   * t271 * 8.0) + t10 * t11 * t210 * 8.0) + t10 * t15 * t104 *
                 8.0) + t111 * ((t63 * t279 * 2.0 + t53 * t70 * t100 * t274 *
            2.0) - t58 * t278 * 2.0)) - t85 * (((((((t280 + t281) + t282) + t283)
    + t284) + t285) - t460) - t461) * 2.0;
  t467 = (((t26 * t93 * t271 * 2.0 + t37 * t93 * t271 * 2.0) + t48 * t93 * t271 *
           2.0) + t10 * t11 * t210 * 2.0) + t10 * t15 * t104 * 2.0;
  t481 = t58 * t72 * t234 * 2.0;
  t482 = t10 * t11 * t58 * t287 * 2.0;
  t480 = (t90 * ((((t26 * t93 * t287 * 8.0 + t37 * t93 * t287 * 8.0) + t48 * t93
                   * t287 * 8.0) + t10 * t11 * t234 * 8.0) + t10 * t15 * t149 *
                 8.0) + t111 * ((t63 * t295 * 2.0 + t53 * t70 * t100 * t290 *
            2.0) - t58 * t293 * 2.0)) - t85 * (((((((t296 + t297) + t298) + t299)
    + t300) + t301) - t481) - t482) * 2.0;
  t488 = (((t26 * t93 * t287 * 2.0 + t37 * t93 * t287 * 2.0) + t48 * t93 * t287 *
           2.0) + t10 * t11 * t234 * 2.0) + t10 * t15 * t149 * 2.0;
  t500 = t63 * t72 * t178 * 2.0;
  t501 = t10 * t11 * t58 * t306 * 2.0;
  t499 = (t90 * ((((t26 * t93 * t306 * 8.0 + t37 * t93 * t306 * 8.0) + t48 * t93
                   * t306 * 8.0) - t10 * t11 * t254 * 8.0) - t10 * t15 * t178 *
                 8.0) + t111 * ((t63 * t309 * 2.0 + t53 * t70 * t100 * t303 *
            2.0) - t58 * t308 * 2.0)) - t85 * (((((((t310 + t311) + t312) + t313)
    + t314) + t315) - t500) - t501) * 2.0;
  t505 = (((t26 * t93 * t306 * 2.0 + t37 * t93 * t306 * 2.0) + t48 * t93 * t306 *
           2.0) - t10 * t11 * t254 * 2.0) - t10 * t15 * t178 * 2.0;
  t509 = (((((((t122 + t125) + t127) + t129) + t329) - t330) - t331) - t332) -
    t333;
  t512 = t72 * t136 * t139 * t149 * rdivide(1.0, 2.0);
  t516 = (((((((t163 + t166) + t168) + t170) + t350) - t351) - t352) - t353) -
    t354;
  t519 = t72 * t136 * t139 * t178 * rdivide(1.0, 2.0);
  t521 = (((((((t192 + t195) + t200) + t201) + t373) - t374) - t375) - t376) -
    t377;
  t522 = t72 * t136 * t139 * t210 * rdivide(1.0, 2.0);
  t526 = (((((((t219 + t221) + t222) + t223) + t224) + t396) - t397) - t398) -
    t399;
  t531 = (((((((t242 + t244) + t245) + t246) + t247) + t417) - t418) - t419) -
    t420;
  t536 = (((((((t263 + t266) + t267) + t268) + t269) + t438) - t439) - t440) -
    t441;
  t540 = (((((((t280 + t281) + t282) + t283) + t284) + t285) - t460) - t461) -
    t140 * t459 * rdivide(1.0, 2.0);
  t543 = (((((((t296 + t297) + t298) + t299) + t300) + t301) - t481) - t482) -
    t140 * t480 * rdivide(1.0, 2.0);
  t548 = (((((((t310 + t311) + t312) + t313) + t314) + t315) - t500) - t501) -
    t140 * t499 * rdivide(1.0, 2.0);
  x[0] = ((t62 * t99 * t100 + t15 * t72 * t136 * ((((((((t122 + t125) + t127) +
    t129) + t329) - t58 * t72 * t107 * 2.0) - t5 * t10 * t53 * t92 * 2.0) - t10 *
             t15 * t63 * t92 * 2.0) - t15 * t62 * t72 * t99 * t100 * 2.0) *
           rdivide(1.0, 2.0)) - t10 * t15 * t92 * t136 * t139 * rdivide(1.0, 2.0))
    + t15 * t72 * t139 * t171 * t337 * rdivide(1.0, 2.0);
  x[1] = ((((t118 - t124) - t316) - t11 * t72 * t136 * t509 * rdivide(1.0, 2.0))
          + t10 * t11 * t92 * t136 * t139 * rdivide(1.0, 2.0)) - t11 * t72 *
    t139 * t171 * t337 * rdivide(1.0, 2.0);
  x[2] = ((((-t114 + t121) + t72 * t104 * t136 * t139 * rdivide(1.0, 2.0)) + t5 *
           t72 * t136 * t509 * rdivide(1.0, 2.0)) - t5 * t10 * t92 * t136 * t139
          * rdivide(1.0, 2.0)) + t5 * t72 * t139 * t171 * t337 * rdivide(1.0,
    2.0);
  x[3] = ((-t62 * t100 * t145 - t15 * t72 * t136 * ((((((((t163 + t166) + t168)
    + t170) + t350) - t58 * t72 * t152 * 2.0) - t5 * t10 * t53 * t142 * 2.0) -
             t10 * t15 * t63 * t142 * 2.0) - t15 * t62 * t72 * t100 * t145 * 2.0)
           * rdivide(1.0, 2.0)) + t10 * t15 * t136 * t139 * t142 * rdivide(1.0,
           2.0)) - t15 * t72 * t139 * t171 * t358 * rdivide(1.0, 2.0);
  x[4] = ((((-t159 + t165) + t72 * t136 * t139 * t152 * rdivide(1.0, 2.0)) + t11
           * t72 * t136 * t516 * rdivide(1.0, 2.0)) - t10 * t11 * t136 * t139 *
          t142 * rdivide(1.0, 2.0)) + t11 * t72 * t139 * t171 * t358 * rdivide
    (1.0, 2.0);
  x[5] = ((((t155 - t162) - t512) - t5 * t72 * t136 * t516 * rdivide(1.0, 2.0))
          + t5 * t10 * t136 * t139 * t142 * rdivide(1.0, 2.0)) - t5 * t72 * t139
    * t171 * t358 * rdivide(1.0, 2.0);
  x[6] = ((t62 * t100 * t173 + t15 * t72 * t136 * ((((((((t192 + t195) + t200) +
    t201) + t373) - t53 * t72 * t178 * 2.0) - t5 * t10 * t53 * t175 * 2.0) - t10
             * t15 * t63 * t175 * 2.0) - t15 * t62 * t72 * t100 * t173 * 2.0) *
           rdivide(1.0, 2.0)) - t10 * t15 * t136 * t139 * t175 * rdivide(1.0,
           2.0)) + t15 * t72 * t139 * t171 * t383 * rdivide(1.0, 2.0);
  x[7] = ((((t188 - t194) + t72 * t136 * t139 * t181 * rdivide(1.0, 2.0)) - t11 *
           t72 * t136 * t521 * rdivide(1.0, 2.0)) + t10 * t11 * t136 * t139 *
          t175 * rdivide(1.0, 2.0)) - t11 * t72 * t139 * t171 * t383 * rdivide
    (1.0, 2.0);
  x[8] = ((((-t184 + t191) - t519) + t5 * t72 * t136 * t521 * rdivide(1.0, 2.0))
          - t5 * t10 * t136 * t139 * t175 * rdivide(1.0, 2.0)) + t5 * t72 * t139
    * t171 * t383 * rdivide(1.0, 2.0);
  x[9] = ((((-t118 + t316) - t62 * t100 * t206) + t15 * t72 * t136 *
           ((((((((t219 + t221) + t222) + t223) + t224) + t396) - t5 * t72 *
              t214 * 2.0) - t53 * t72 * t210 * 2.0) - t10 * t11 * t58 * t203 *
            2.0) * rdivide(1.0, 2.0)) + t10 * t15 * t136 * t139 * t203 * rdivide
          (1.0, 2.0)) - t15 * t72 * t139 * t171 * t404 * rdivide(1.0, 2.0);
  x[10] = ((t79 * t100 * t206 - t11 * t72 * t136 * t526 * rdivide(1.0, 2.0)) -
           t10 * t11 * t136 * t139 * t203 * rdivide(1.0, 2.0)) + t11 * t72 *
    t139 * t171 * t404 * rdivide(1.0, 2.0);
  x[11] = ((((t213 - t218) - t522) + t5 * t72 * t136 * t526 * rdivide(1.0, 2.0))
           + t5 * t10 * t136 * t139 * t203 * rdivide(1.0, 2.0)) - t5 * t72 *
    t139 * t171 * t404 * rdivide(1.0, 2.0);
  x[12] = ((((t159 + t231) - t72 * t136 * t139 * t152 * rdivide(1.0, 2.0)) - t15
            * t72 * t136 * ((((((((t242 + t244) + t245) + t246) + t247) + t417)
    - t5 * t72 * t238 * 2.0) - t53 * t72 * t234 * 2.0) - t10 * t11 * t58 * t226 *
             2.0) * rdivide(1.0, 2.0)) - t10 * t15 * t136 * t139 * t226 *
           rdivide(1.0, 2.0)) + t15 * t72 * t139 * t171 * t425 * rdivide(1.0,
    2.0);
  x[13] = ((-t79 * t100 * t229 + t11 * t72 * t136 * t531 * rdivide(1.0, 2.0)) +
           t10 * t11 * t136 * t139 * t226 * rdivide(1.0, 2.0)) - t11 * t72 *
    t139 * t171 * t425 * rdivide(1.0, 2.0);
  x[14] = ((((-t237 + t241) + t72 * t136 * t139 * t234 * rdivide(1.0, 2.0)) - t5
            * t72 * t136 * t531 * rdivide(1.0, 2.0)) - t5 * t10 * t136 * t139 *
           t226 * rdivide(1.0, 2.0)) + t5 * t72 * t139 * t171 * t425 * rdivide
    (1.0, 2.0);
  x[15] = ((((-t188 - t62 * t100 * t249) - t72 * t136 * t139 * t181 * rdivide
             (1.0, 2.0)) + t15 * t72 * t136 * ((((((((t263 + t266) + t267) +
    t268) + t269) + t438) - t63 * t72 * t181 * 2.0) - t5 * t72 * t258 * 2.0) -
             t10 * t11 * t58 * t251 * 2.0) * rdivide(1.0, 2.0)) + t10 * t15 *
           t136 * t139 * t251 * rdivide(1.0, 2.0)) - t15 * t72 * t139 * t171 *
    t446 * rdivide(1.0, 2.0);
  x[16] = ((t79 * t100 * t249 - t11 * t72 * t136 * t536 * rdivide(1.0, 2.0)) -
           t10 * t11 * t136 * t139 * t251 * rdivide(1.0, 2.0)) + t11 * t72 *
    t139 * t171 * t446 * rdivide(1.0, 2.0);
  x[17] = ((((t257 - t262) + t72 * t136 * t139 * t254 * rdivide(1.0, 2.0)) + t5 *
            t72 * t136 * t536 * rdivide(1.0, 2.0)) + t5 * t10 * t136 * t139 *
           t251 * rdivide(1.0, 2.0)) - t5 * t72 * t139 * t171 * t446 * rdivide
    (1.0, 2.0);
  x[18] = ((((t114 + t276) - t15 * t72 * t136 * ((((((((t280 + t281) + t282) +
    t283) + t284) + t285) - t140 * t459 * rdivide(1.0, 2.0)) - t58 * t72 * t210 *
    2.0) - t10 * t11 * t58 * t271 * 2.0) * rdivide(1.0, 2.0)) - t72 * t104 *
            t136 * t139 * rdivide(1.0, 2.0)) - t10 * t15 * t136 * t139 * t271 *
           rdivide(1.0, 2.0)) + t15 * t72 * t139 * t171 * t467 * rdivide(1.0,
    2.0);
  x[19] = ((((-t213 - t277) + t522) + t11 * t72 * t136 * t540 * rdivide(1.0, 2.0))
           + t10 * t11 * t136 * t139 * t271 * rdivide(1.0, 2.0)) - t11 * t72 *
    t139 * t171 * t467 * rdivide(1.0, 2.0);
  x[20] = ((t70 * t100 * t274 - t5 * t72 * t136 * t540 * rdivide(1.0, 2.0)) - t5
           * t10 * t136 * t139 * t271 * rdivide(1.0, 2.0)) + t5 * t72 * t139 *
    t171 * t467 * rdivide(1.0, 2.0);
  x[21] = ((((-t155 + t512) - t62 * t100 * t290) + t15 * t72 * t136 *
            ((((((((t296 + t297) + t298) + t299) + t300) + t301) - t140 * t480 *
               rdivide(1.0, 2.0)) - t58 * t72 * t234 * 2.0) - t10 * t11 * t58 *
             t287 * 2.0) * rdivide(1.0, 2.0)) + t10 * t15 * t136 * t139 * t287 *
           rdivide(1.0, 2.0)) - t15 * t72 * t139 * t171 * t488 * rdivide(1.0,
    2.0);
  x[22] = ((((t237 + t292) - t72 * t136 * t139 * t234 * rdivide(1.0, 2.0)) - t11
            * t72 * t136 * t543 * rdivide(1.0, 2.0)) - t10 * t11 * t136 * t139 *
           t287 * rdivide(1.0, 2.0)) + t11 * t72 * t139 * t171 * t488 * rdivide
    (1.0, 2.0);
  x[23] = ((-t70 * t100 * t290 + t5 * t72 * t136 * t543 * rdivide(1.0, 2.0)) +
           t5 * t10 * t136 * t139 * t287 * rdivide(1.0, 2.0)) - t5 * t72 * t139 *
    t171 * t488 * rdivide(1.0, 2.0);
  x[24] = ((((t184 + t305) + t519) - t15 * t72 * t136 * ((((((((t310 + t311) +
    t312) + t313) + t314) + t315) - t140 * t499 * rdivide(1.0, 2.0)) - t63 * t72
              * t178 * 2.0) - t10 * t11 * t58 * t306 * 2.0) * rdivide(1.0, 2.0))
           - t10 * t15 * t136 * t139 * t306 * rdivide(1.0, 2.0)) + t15 * t72 *
    t139 * t171 * t505 * rdivide(1.0, 2.0);
  x[25] = ((((-t257 - t307) - t72 * t136 * t139 * t254 * rdivide(1.0, 2.0)) +
            t11 * t72 * t136 * t548 * rdivide(1.0, 2.0)) + t10 * t11 * t136 *
           t139 * t306 * rdivide(1.0, 2.0)) - t11 * t72 * t139 * t171 * t505 *
    rdivide(1.0, 2.0);
  x[26] = ((t70 * t100 * t303 - t5 * t72 * t136 * t548 * rdivide(1.0, 2.0)) - t5
           * t10 * t136 * t139 * t306 * rdivide(1.0, 2.0)) + t5 * t72 * t139 *
    t171 * t505 * rdivide(1.0, 2.0);
  memcpy(&b_JdXdR[0], &x[0], 27U * sizeof(double));
}

//
// File trailer for JdXdR.cpp
//
// [EOF]
//
