// libImgSpatialOperating - Yanxiang Wu's implementation of many frequently
// used spatial image operations
// Copyright 2012 Yanxiang Wu. All right reserved
// https://github.com/cecilulysess/libImgSpatialOperations
//
// License: Apache 2.0

// Author: cosmobserver@gmail.com (Yanxiang Wu)
// First version of this project

#ifndef LIB_IMG_SPATIAL_OPERATIONS_H_
#define LIB_IMG_SPATIAL_OPERATIONS_H_

namespace lib_img_spatial_operations {
  class TestFunc {
  public:
    // return a + b
    static __declspec(dllexport) double Add(double a, double b);

    // return a / b
    // Throws DivideByZeroException if b is 0
    static __declspec(dllexport) double Divide(double a, double b);
  };
}

#endif //LIB_IMG_SPATIAL_OPERATIONS_H_