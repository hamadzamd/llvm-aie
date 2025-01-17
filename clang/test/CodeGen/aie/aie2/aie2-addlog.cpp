// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
//===- aie2-addlog.cpp ------------------------------------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
// (c) Copyright 2023-2024 Advanced Micro Devices, Inc. or its affiliates
//
//===----------------------------------------------------------------------===//
// RUN: %clang -O2 --target=aie2 -S -emit-llvm %s -o - | FileCheck %s

//
// CHECK-LABEL: @_Z11test_selectbcc(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[COND_I:%.*]] = select i1 [[SEL:%.*]], i8 [[A:%.*]], i8 [[B:%.*]]
// CHECK-NEXT:    ret i8 [[COND_I]]
//
char test_select(bool sel, char a, char b) {
    return select(sel, a, b);
}

//
// CHECK-LABEL: @_Z11test_selectbhh(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[COND_I:%.*]] = select i1 [[SEL:%.*]], i8 [[A:%.*]], i8 [[B:%.*]]
// CHECK-NEXT:    ret i8 [[COND_I]]
//
unsigned char test_select(bool sel, unsigned char a, unsigned char b) {
    return select(sel, a, b);
}

// CHECK-LABEL: @_Z11test_selectbss(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[COND_I:%.*]] = select i1 [[SEL:%.*]], i16 [[A:%.*]], i16 [[B:%.*]]
// CHECK-NEXT:    ret i16 [[COND_I]]
//
short test_select(bool sel, signed short a, signed short b) {
    return select(sel, a, b);
}

// CHECK-LABEL: @_Z11test_selectbtt(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[COND_I:%.*]] = select i1 [[SEL:%.*]], i16 [[A:%.*]], i16 [[B:%.*]]
// CHECK-NEXT:    ret i16 [[COND_I]]
//
unsigned short test_select(bool sel, unsigned short a, unsigned short b) {
    return select(sel, a, b);
}

// CHECK-LABEL: @_Z11test_selectbii(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[COND_I:%.*]] = select i1 [[SEL:%.*]], i32 [[A:%.*]], i32 [[B:%.*]]
// CHECK-NEXT:    ret i32 [[COND_I]]
//
int test_select(bool sel, int a, int b) {
    return select(sel, a, b);
}

// CHECK-LABEL: @_Z11test_selectbjj(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[COND_I:%.*]] = select i1 [[SEL:%.*]], i32 [[A:%.*]], i32 [[B:%.*]]
// CHECK-NEXT:    ret i32 [[COND_I]]
//
unsigned int test_select(bool sel, unsigned int a, unsigned int b) {
    return select(sel, a, b);
}

// CHECK-LABEL: @_Z11test_selectbll(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[COND_I:%.*]] = select i1 [[SEL:%.*]], i32 [[A:%.*]], i32 [[B:%.*]]
// CHECK-NEXT:    ret i32 [[COND_I]]
//
long test_select(bool sel, long a, long b) {
    return select(sel, a, b);
}

// CHECK-LABEL: @_Z11test_selectbmm(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[COND_I:%.*]] = select i1 [[SEL:%.*]], i32 [[A:%.*]], i32 [[B:%.*]]
// CHECK-NEXT:    ret i32 [[COND_I]]
//
unsigned long test_select(bool sel, unsigned long a, unsigned long b) {
    return select(sel, a, b);
}

// CHECK-LABEL: @_Z11test_selectbPvS_(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[COND_I:%.*]] = select i1 [[SEL:%.*]], ptr [[A:%.*]], ptr [[B:%.*]]
// CHECK-NEXT:    ret ptr [[COND_I]]
//
void* test_select(bool sel, void *a, void *b) {
    return select(sel, a, b);
}
