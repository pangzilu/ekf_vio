/*
 * vioParams.h
 *
 *  Created on: Jul 31, 2017
 *      Author: kevin
 */

#ifndef PAUVSI_VIO_INCLUDE_PAUVSI_VIO_VIOPARAMS_H_
#define PAUVSI_VIO_INCLUDE_PAUVSI_VIO_VIOPARAMS_H_


//VISUAL ODOM
//fast corner detector for planar odometry
#define FAST_THRESHOLD 100
// the amount to blur the image before feature extraction
#define FAST_BLUR_SIGMA 0.5

// the minimum feature eigen val where it is determined as lost
#define KLT_MIN_EIGEN 1e-4

// the minimum pixel distance a feature must have between a previous feature
#define MIN_NEW_FEATURE_DIST 4

// the desired number of features more = robust...er (and slower)
#define NUM_FEATURES 100

//minimum detected features before vo has failed
#define MINIMUM_TRACKABLE_FEATURES 4

// the amount of frames to store for feature optimization
#define FRAME_BUFFER_SIZE 200

// the number of times a feature must be observed before allowed to be optimized
#define MINIMUM_OBSERVATION_COUNT_FOR_OPTIMIZATION 20

// the maximum sigma a feature can have after an optim
#define MAXIMUM_FEATURE_DEPTH_ERROR 2.0

// default point depth used for initialization in meters
#define DEFAULT_POINT_DEPTH 1.0

//OUTLIER DETECTION

//if the ppe of our planar odometry exceeds this value we have lost odometry
#define MAXIMUM_VO_PPE 7.0

//END VISUAL ODOM

#define ODOM_TOPIC "aerotronic_monovo/odom"

// this topic will serve as a last resort for realignment
#define POINTCLOUD_TOPIC "guidance/points2"
#define POINTCLOUD_FRAME "guidance"

#define CAMERA_TOPIC "/guidance/left/image_rect"
#define CAMERA_FRAME "guidance"

#define BASE_FRAME "base_link"

#define WORLD_FRAME "world"


#endif /* PAUVSI_VIO_INCLUDE_PAUVSI_VIO_VIOPARAMS_H_ */
