/*
 * surface_modeler.h
 *
 *  Created on: Aug 27, 2012
 *      Author: lengelhan
 */

#ifndef SURFACE_MODELER_H_
#define SURFACE_MODELER_H_

#include "rgbd_utils/calibration_utils.h"
#include <opencv/cv.h>
#include <opencv/highgui.h>


/*
class Surface_Modeler {

 float x_min_, x_max_, y_min_, y_max_;
 float cell_size_;
 int cell_cnt_x,cell_cnt_y;


 std::vector<std::vector<std::vector<float> > > dists;

 cv::Mat mean;
 cv::Mat variance;

 cv::Point grid_pos(const pcl_Point& p);

 uint training_data_cnt;
 bool model_computed;


// void publishGrid(ros::Publisher& pub, std::string frame, const Cloud& cloud);


public:

 uint getTrainingCnt(){return training_data_cnt;}

 Surface_Modeler(){
  model_computed = false;
  training_data_cnt = 0;
 }

 bool computeModel();


 void init(float cell_size, const Cloud& cloud);

 void init(float cell_size, float x_min, float x_max, float y_min, float y_max);

 void addTrainingFrame(const Cloud& cloud);

 void reset();

 void getForeground(const Cloud& cloud, float min_prop, cv::Mat& fg_points, cv::Mat* fg_cells = NULL, Cloud* fg_cloud = NULL);

 Cloud getModel();

};
*/

#endif /* SURFACE_MODELER_H_ */
