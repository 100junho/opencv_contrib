/*M///////////////////////////////////////////////////////////////////////////////////////
//
//  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.
//
//  By downloading, copying, installing or using the software you agree to this license.
//  If you do not agree to this license, do not download, install,
//  copy or use the software.
//
//
//                           License Agreement
//                For Open Source Computer Vision Library
//
// Copyright (C) 2014, Itseez Inc, all rights reserved.
// Third party copyrights are property of their respective owners.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//   * Redistribution's of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//   * Redistribution's in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//   * The name of the copyright holders may not be used to endorse or promote products
//     derived from this software without specific prior written permission.
//
// This software is provided by the copyright holders and contributors "as is" and
// any express or implied warranties, including, but not limited to, the implied
// warranties of merchantability and fitness for a particular purpose are disclaimed.
// In no event shall the Itseez Inc or contributors be liable for any direct,
// indirect, incidental, special, exemplary, or consequential damages
// (including, but not limited to, procurement of substitute goods or services;
// loss of use, data, or profits; or business interruption) however caused
// and on any theory of liability, whether in contract, strict liability,
// or tort (including negligence or otherwise) arising in any way out of
// the use of this software, even if advised of the possibility of such damage.
//
//M*/

#ifndef OPENCV_DATASETSTOOLS_IR_ROBOT_HPP
#define OPENCV_DATASETSTOOLS_IR_ROBOT_HPP

#include <string>
#include <vector>

#include "opencv2/datasetstools/dataset.hpp"

#include <opencv2/core.hpp>

namespace cv
{
namespace datasetstools
{

// calibration matrix from calibrationFile.mat
// 2.8290e+03   0.0000e+00   8.0279e+02
// 0.0000e+00   2.8285e+03   6.1618e+02
// 0.0000e+00   0.0000e+00   1.0000e+00

struct IR_robotObj : public Object
{
    std::string name;
    std::vector<std::string> images; // TODO: implement more complex structure
};

class CV_EXPORTS IR_robot : public Dataset
{
public:
    IR_robot() {}
    IR_robot(const std::string &path);
    virtual ~IR_robot() {}

    virtual void load(const std::string &path, int number = 0);

private:
    void loadDataset(const std::string &path);
};

}
}

#endif