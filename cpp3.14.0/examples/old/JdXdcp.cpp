//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: JdXdcp.cpp
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 25-Sep-2018 16:02:46
//

// Include Files
#include "rt_nonfinite.h"
#include "func_FC.h"
#include "JdXdcp.h"
#include "rdivide.h"

// Function Definitions

//
// JDXDCP
//     JDXDCP = JDXDCP(FX_P,FY_P,CX_P,CY_P,R11,R21,R31,R12,R22,R32,R13,R23,R33,T1,T2,T3,S1,S2,S3,R,X1_P,X2_P)
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
//                double b_JdXdcp[6]
// Return Type  : void
//
void JdXdcp(double fx_p, double fy_p, double cx_p, double cy_p, double r11,
            double r21, double r31, double r12, double r22, double r32, double
            r13, double r23, double r33, double t1, double t2, double t3, double
            s1, double s2, double s3, double r, double x1_p, double x2_p, double
            b_JdXdcp[6])
{
  double t5;
  double t9;
  double t10;
  double t11;
  double t15;
  double t26;
  double t37;
  double t48;
  double t57;
  double t49;
  double t58;
  double t59;
  double t76;
  double t86;
  double t87;
  double t88;
  double t85;
  double t90;
  double t92;
  double t94;
  double t99;
  double t101;
  double t104;
  double t108;
  double t109;
  double t115;
  double t118;
  double t119;
  double t121;
  double t123;
  double t125;
  double t127;
  double t130;
  double t131;
  double t140;
  double t139;
  double t144;
  double t153;
  double t152;
  double t157;
  double t159;
  double t161;
  double x[6];
  int k;

  //     This function was generated by the Symbolic Math Toolbox version 6.2.
  //     11-Aug-2016 17:45:11
  t5 = ((((((((cy_p * fx_p * r11 * r32 - cy_p * fx_p * r12 * r31) - cx_p * fy_p *
              r21 * r32) + cx_p * fy_p * r22 * r31) + fx_p * fy_p * r11 * r22) -
           fx_p * fy_p * r12 * r21) - fx_p * r11 * r32 * x2_p) + fx_p * r12 *
         r31 * x2_p) + fy_p * r21 * r32 * x1_p) - fy_p * r22 * r31 * x1_p;
  t9 = ((((fx_p * fy_p * r11 * r22 * r33 + fx_p * fy_p * r12 * r23 * r31) + fx_p
          * fy_p * r13 * r21 * r32) - fx_p * fy_p * r11 * r23 * r32) - fx_p *
        fy_p * r12 * r21 * r33) - fx_p * fy_p * r13 * r22 * r31;
  t10 = rdivide(1.0, t9 * t9);
  t11 = ((((((((cy_p * fx_p * r11 * r33 - cy_p * fx_p * r13 * r31) - cx_p * fy_p
               * r21 * r33) + cx_p * fy_p * r23 * r31) + fx_p * fy_p * r11 * r23)
            - fx_p * fy_p * r13 * r21) - fx_p * r11 * r33 * x2_p) + fx_p * r13 *
          r31 * x2_p) + fy_p * r21 * r33 * x1_p) - fy_p * r23 * r31 * x1_p;
  t15 = ((((((((cy_p * fx_p * r12 * r33 - cy_p * fx_p * r13 * r32) - cx_p * fy_p
               * r22 * r33) + cx_p * fy_p * r23 * r32) + fx_p * fy_p * r12 * r23)
            - fx_p * fy_p * r13 * r22) - fx_p * r12 * r33 * x2_p) + fx_p * r13 *
          r32 * x2_p) + fy_p * r22 * r33 * x1_p) - fy_p * r23 * r32 * x1_p;
  t26 = t5 * t5;
  t37 = t11 * t11;
  t48 = t15 * t15;
  t57 = rdivide(1.0, ((((r11 * r22 * r33 - r11 * r23 * r32) - r12 * r21 * r33) +
                       r12 * r23 * r31) + r13 * r21 * r32) - r13 * r22 * r31);
  t49 = s3 + t57 * (((((r11 * r22 * t3 - r12 * r21 * t3) - r11 * r32 * t2) + r12
                      * r31 * t2) + r21 * r32 * t1) - r22 * r31 * t1);
  t58 = s2 - t57 * (((((r11 * r23 * t3 - r13 * r21 * t3) - r11 * r33 * t2) + r13
                      * r31 * t2) + r21 * r33 * t1) - r23 * r31 * t1);
  t59 = s1 + t57 * (((((r12 * r23 * t3 - r13 * r22 * t3) - r12 * r33 * t2) + r13
                      * r32 * t2) + r22 * r33 * t1) - r23 * r32 * t1);
  t76 = rdivide(1.0, t9);
  t86 = t5 * t49 * t76 * 2.0;
  t87 = t11 * t58 * t76 * 2.0;
  t88 = t15 * t59 * t76 * 2.0;
  t85 = (t86 - t87) + t88;
  t90 = fy_p * r21 * r32 - fy_p * r22 * r31;
  t92 = fy_p * r21 * r33 - fy_p * r23 * r31;
  t94 = fy_p * r22 * r33 - fy_p * r23 * r32;
  t99 = ((t49 * t49 + t58 * t58) + t59 * t59) - r * r;
  t101 = t49 * t76 * t90 * 2.0;
  t104 = t59 * t76 * t94 * 2.0;
  t108 = (t10 * t26 + t10 * t37) + t10 * t48;
  t109 = rdivide(1.0, t108);
  t115 = t85 * t85 - t99 * ((t10 * t26 * 4.0 + t10 * t37 * 4.0) + t10 * t48 *
    4.0);
  t118 = ((t86 - t87) + t88) + sqrt(t115);
  t119 = rdivide(1.0, sqrt(t115));
  t121 = fx_p * r11 * r32 - fx_p * r12 * r31;
  t123 = fx_p * r11 * r33 - fx_p * r13 * r31;
  t125 = fx_p * r12 * r33 - fx_p * r13 * r32;
  t127 = t49 * t76 * t121 * 2.0;
  t130 = t59 * t76 * t125 * 2.0;
  t131 = rdivide(1.0, t108 * t108);
  t140 = t58 * t76 * t92 * 2.0;
  t139 = t119 * (t85 * ((t101 + t104) - t140) * 2.0 - t99 * ((t5 * t10 * t90 *
    8.0 + t10 * t11 * t92 * 8.0) + t10 * t15 * t94 * 8.0)) * rdivide(1.0, 2.0);
  t144 = (t5 * t10 * t90 * 2.0 + t10 * t11 * t92 * 2.0) + t10 * t15 * t94 * 2.0;
  t153 = t58 * t76 * t123 * 2.0;
  t152 = t119 * (t85 * ((t127 + t130) - t153) * 2.0 - t99 * ((t5 * t10 * t121 *
    8.0 + t10 * t11 * t123 * 8.0) + t10 * t15 * t125 * 8.0)) * 0.5;
  t157 = (t5 * t10 * t121 * 2.0 + t10 * t11 * t123 * 2.0) + t10 * t15 * t125 *
    2.0;
  t159 = ((t101 + t104) + t139) - t140;
  t161 = ((t127 + t130) + t152) - t153;
  x[0] = (t76 * t94 * t109 * t118 * -0.5 - t15 * t76 * t109 * (((t101 + t104) +
            t139) - t58 * t76 * t92 * 2.0) * 0.5) + t15 * t76 * t118 * t131 *
    t144 * 0.5;
  x[1] = (t11 * t76 * t109 * t159 * 0.5 + t76 * t92 * t109 * t118 * 0.5) - t11 *
    t76 * t118 * t131 * t144 * 0.5;
  x[2] = (t5 * t76 * t109 * t159 * -0.5 - t76 * t90 * t109 * t118 * 0.5) + t5 *
    t76 * t118 * t131 * t144 * 0.5;
  x[3] = (t76 * t109 * t118 * t125 * 0.5 + t15 * t76 * t109 * (((t127 + t130) +
            t152) - t58 * t76 * t123 * 2.0) * 0.5) - t15 * t76 * t118 * t131 *
    t157 * 0.5;
  x[4] = (t11 * t76 * t109 * t161 * -0.5 - t76 * t109 * t118 * t123 * 0.5) + t11
    * t76 * t118 * t131 * t157 * 0.5;
  x[5] = (t5 * t76 * t109 * t161 * 0.5 + t76 * t109 * t118 * t121 * 0.5) - t5 *
    t76 * t118 * t131 * t157 * 0.5;
  for (k = 0; k < 6; k++) {
    b_JdXdcp[k] = x[k];
  }
}

//
// File trailer for JdXdcp.cpp
//
// [EOF]
//