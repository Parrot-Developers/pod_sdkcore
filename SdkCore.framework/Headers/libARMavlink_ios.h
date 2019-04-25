//    Copyright (C) 2018 Parrot Drones SAS
//
//    Redistribution and use in source and binary forms, with or without
//    modification, are permitted provided that the following conditions
//    are met:
//    * Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in
//      the documentation and/or other materials provided with the
//      distribution.
//    * Neither the name of the Parrot Company nor the names
//      of its contributors may be used to endorse or promote products
//      derived from this software without specific prior written
//      permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
//    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
//    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
//    FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
//    PARROT COMPANY BE LIABLE FOR ANY DIRECT, INDIRECT,
//    INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
//    OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
//    AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
//    OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
//    OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
//    SUCH DAMAGE.

/**
 * @file libARMavlink_ios.h
 * @brief ARMavlink headers for ios
 */
#ifndef _ARMAVLINK_IOS_H
#define _ARMAVLINK_IOS_H

//=====================================================================================================================
//    libARMavlink/ARMAVLINK_Error.h
//=====================================================================================================================


#include "mavlink/parrot/mavlink.h"

/**
 * @brief libARMavlink errors known.
 */
typedef enum
{
    ARMAVLINK_OK = 0,                                            /**< No error */

    ARMAVLINK_ERROR = -1000,                                     /**< Unknown generic error */
    ARMAVLINK_ERROR_ALLOC,                                       /**< Memory allocation error */
    ARMAVLINK_ERROR_BAD_PARAMETER,                               /**< Bad parameters */

    ARMAVLINK_ERROR_MANAGER = -2000,                             /**< Unknown ARMAVLINK_Manager error */

    ARMAVLINK_ERROR_FILE_GENERATOR = -3000,                      /**< Unknown ARMAVLINK_FileGenerator error */

    ARMAVLINK_ERROR_LIST_UTILS = -4000,                          /**< Unknown ARMAVLINK_ListUtils error */

    ARMAVLINK_ERROR_MISSION_ITEM_UTILS = -5000,                  /**< Unknown ARMAVLINK_MissionItemUtils error */
    ARMAVLINK_ERROR_MISSION_ITEM_UTILS_NOT_LINKED_COMMAND,       /**< Command not linked with Mavlink commands */

    ARMAVLINK_ERROR_FILE_PARSER = -6000,                         /**< Unknown ARMAVLINK_FileParser error */
    ARMAVLINK_ERROR_FILE_PARSER_FILE_NOT_FOUND,                  /**< File to parse not found */
    ARMAVLINK_ERROR_FILE_PARSER_WORD_NOT_EXPTECTED,              /**< A word was not expected during parsing */

} eARMAVLINK_ERROR;

/**
 * @brief Gets the error string associated with an eARMAVLINK_ERROR
 * @param error The error to describe
 * @return A static string describing the error
 *
 * @note User should NEVER try to modify a returned string
 */
const char* ARMAVLINK_Error_ToString (eARMAVLINK_ERROR error);


//=====================================================================================================================
//    libARMavlink/ARMAVLINK_ListUtils.h
//=====================================================================================================================


/**
 * @brief a list of mission item.
 * @warning the list allocates first a small amount of memory. Then, when you add too much points, it will reallocate memory.
 * @see mavlink_mission_item_t
 */
typedef struct mission_item_list_t mission_item_list_t;

/**
 * @brief Create a new mission item list
 * @warning This function allocate memory
 * @post ARMAVLINK_ListUtils_MissionItemListDelete() must be called to delete the list and free the memory allocated.
 * @return Pointer on the new list
 * @see ARMAVLINK_ListUtils_MissionItemListDelete()
 */
mission_item_list_t* ARMAVLINK_ListUtils_MissionItemListNew(void);

/**
 * @brief Get a mission item in the list according to its index
 * @param list : a pointer on the list
 * @param[in] the index of the mission item to return
 * @retval a pointer on the mission item if it exists, otherwise null
 * @see mavlink_mission_item_t in mavlink_msg_mission_item.h
 */
mavlink_mission_item_t* ARMAVLINK_ListUtils_MissionItemListGet(const mission_item_list_t *const list, const uint16_t index);

/**
 * @brief Get the current size of the list (the number of mission item which are actually in the list)
 * @param list : a pointer on the list
 * @retval the size of the list
 */
int ARMAVLINK_ListUtils_MissionItemListGetSize(const mission_item_list_t *const list);

/**
 * @brief delete the list
 * @warning This function free memory
 * @param[inout] list : address of the pointer on the list
 */
void ARMAVLINK_ListUtils_MissionItemListDelete(mission_item_list_t **list);

//=====================================================================================================================
//    libARMavlink/ARMAVLINK_Manager.h
//=====================================================================================================================


/**
 * @brief MapMyHouse manager structure allows to manage the MapMyHouse process
 */
typedef struct ARMAVLINK_Manager_t ARMAVLINK_Manager_t;

/**
 * @brief Create a new Manager
 * @warning This function allocate memory
 * @post ARMAVLINK_Manager_Delete() must be called to delete the MapMyHouse manager and free the memory allocated.
 * @param[out] error : pointer on the error output.
 * @return Pointer on the new Manager
 * @see ARMAVLINK_Manager_Delete()
 */
ARMAVLINK_Manager_t* ARMAVLINK_Manager_New(eARMAVLINK_ERROR *error);

/**
 * @brief Delete the Manager
 * @warning This function free memory
 * @param manager : address of the pointer on the Manager
 * @see ARMAVLINK_Manager_New()
 */
void ARMAVLINK_Manager_Delete(ARMAVLINK_Manager_t **manager);


//=====================================================================================================================
//    libARMavlink/ARMAVLINK_FileGenerator.h
//=====================================================================================================================


/**
 * @brief ARMavlink file generator structure allows to manage the process of creating Mavlink files
 */
typedef struct ARMAVLINK_FileGenerator_t ARMAVLINK_FileGenerator_t;

/**
 * @brief Create a new file generator
 * @warning This function allocate memory
 * @post ARMAVLINK_FileGenerator_Delete() must be called to delete the file generator and free the memory allocated.
 * @param[out] error : pointer on the error output.
 * @return Pointer on the new file generator
 * @see ARMAVLINK_FileGenerator_Delete()
 */
ARMAVLINK_FileGenerator_t* ARMAVLINK_FileGenerator_New(eARMAVLINK_ERROR *error);

/**
 * @brief Delete the File generator
 * @warning This function free memory
 * @param fileGenerator : address of the pointer on the file generator
 * @see ARMAVLINK_FileGenerator_New()
 */
void ARMAVLINK_FileGenerator_Delete(ARMAVLINK_FileGenerator_t **fileGenerator);

/**
 * @brief Add a mission item to the File Generator list
 * @param fileGenerator : pointer on the file generator
 * @param[in] missionItem : the mission item to add
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_FileGenerator_AddMissionItem(ARMAVLINK_FileGenerator_t *fileGenerator, mavlink_mission_item_t *missionItem);

/**
 * @brief Replace a mission item in the File Generator list
 * @param fileGenerator : pointer on the file generator
 * @param[in] missionItem : the mission item to replace with
 * @param[in] index : the index of the mission item to replace
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_FileGenerator_ReplaceMissionItem(ARMAVLINK_FileGenerator_t *fileGenerator, mavlink_mission_item_t *missionItem, int index);

/**
 * @brief Insert a mission item in the File Generator list
 * @param fileGenerator : pointer on the file generator
 * @param[in] missionItem : the mission item to insert.
 * @param[in] index : the index of the mission item to replace
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_FileGenerator_InsertMissionItem(ARMAVLINK_FileGenerator_t *fileGenerator, mavlink_mission_item_t *missionItem, int index);

/**
 * @brief Delete a mission item in the File Generator list
 * @param fileGenerator : pointer on the file generator
 * @param[in] index : the index of the mission item to delete
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_FileGenerator_DeleteMissionItem(ARMAVLINK_FileGenerator_t *fileGenerator, int index);

/**
 * @brief Write a mavlink file with all the mission items in the list
 * @param fileGenerator : pointer on the file generator
 * @param[in] filePath : path to write the file
 */
void ARMAVLINK_FileGenerator_CreateMavlinkFile(ARMAVLINK_FileGenerator_t *fileGenerator, const char *const filePath);

/**
 * @brief Get the current mission item list
 * @param fileGenerator : pointer on the file generator
 * @param[out] err : pointer on the error output. Can be null
 * @return the mission item list
 */
mission_item_list_t *ARMAVLINK_FileGenerator_GetCurrentMissionItemList(ARMAVLINK_FileGenerator_t *fileGenerator, eARMAVLINK_ERROR *err);


//=====================================================================================================================
//    libARMavlink/ARMAVLINK_FileParser.h
//=====================================================================================================================


/**
 * @brief ARMavlink file parser structure allows to manage the process of parsing Mavlink files
 */
typedef struct ARMAVLINK_FileParser_t ARMAVLINK_FileParser_t;


/**
 * @brief Create a new file parser
 * @warning This function allocate memory
 * @post ARMAVLINK_FileParser_Delete() must be called to delete the file parser and free the memory allocated.
 * @param[out] error : pointer on the error output.
 * @return Pointer on the new file parser
 * @see ARMAVLINK_FileParser_Delete()
 */
ARMAVLINK_FileParser_t* ARMAVLINK_FileParser_New(eARMAVLINK_ERROR *error);

/**
 * @brief Delete the File parser
 * @warning This function free memory
 * @param fileParser : address of the pointer on the file parser
 * @see ARMAVLINK_FileParser_New()
 */
void ARMAVLINK_FileParser_Delete(ARMAVLINK_FileParser_t **fileParser);

/**
 * @brief Parse a Mavlink file and store it in a list
 * @param fileParser : pointer on the file parser
 * @param[in] filePath : the path of the file to parse
 * @param[out] missionItemList : a list of all mission items
 * @return ARMAVLINK_OK if parsing went well, the enum description of the error otherwise
 * @see mission_item_list_t
 */
eARMAVLINK_ERROR ARMAVLINK_FileParser_Parse(ARMAVLINK_FileParser_t *fileParser, const char *const filePath, mission_item_list_t *missionItemList);


//=====================================================================================================================
//    libARMavlink/ARMAVLINK_MissionItemUtils.h
//=====================================================================================================================


/**
 * @brief Fill a mission item with the given params and the default params
 * @param[out] missionItem : pointer on the mission item to fill
 * @param[in] param1 : Radius in which the MISSION is accepted as reached, in meters
 * @param[in] param2 : Time that the MAV should stay inside the PARAM1 radius before advancing, in milliseconds
 * @param[in] param3 : For LOITER command MISSIONs: Orbit to circle around the MISSION, in meters.
 *                     If positive the orbit direction should be clockwise.
 *                     if negative the orbit direction should be counter-clockwise.
 * @param4[in] : For NAV and LOITER command MISSIONs: Yaw orientation in degrees, [0..360] 0 = NORTH
 * @param[in] latitude : the latitude of the mission item
 * @param[in] latitude : the latitude of the mission item
 * @param[in] longitude : the longitude of the mission item
 * @param[in] altitude : the altitude of the mission item
 * @param[in] command : the command of the mission item
 * @param[in] seq : the seq of the mission item
 * @param[in] frame : The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
 * @param[in] current : false:0, true:1
 * @param[in] autocontinue : autocontinue to next wp
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkMissionItemWithAllParams(mavlink_mission_item_t* missionItem,
                                                                                  float param1, float param2, float param3, float param4, float latitude, float longitude, float altitude,
                                                                                  int command, int seq,  int frame, int current, int autocontinue);

/**
 * @brief Fill a nav mission item with the given params and the default params
 * @param[out] missionItem : pointer on the mission item to fill
 * @param[in] latitude : the latitude of the mission item
 * @param[in] longitude : the longitude of the mission item
 * @param[in] altitude : the altitude of the mission item
 * @param[in] yaw : the yaw of the mission item
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkNavWaypointMissionItem(mavlink_mission_item_t* missionItem,
                                                                                float latitude, float longitude, float altitude, float yaw);

/**
 * @brief Fill a nav mission item with the given params, the default params
 * @param[out] missionItem : pointer on the mission item to fill
 * @param[in] latitude : the latitude of the mission item
 * @param[in] longitude : the longitude of the mission item
 * @param[in] altitude : the altitude of the mission item
 * @param[in] radius : the radius to pass by WP (in meters). 0 to pass through the WP.
 *                     Positive value for clockwise orbit, negative value for counter-clockwise orbit.
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkNavWaypointMissionItemWithRadius(mavlink_mission_item_t* missionItem,
                                                                                          float latitude, float longitude, float altitude, float radius);

/**
 * @brief Fill a land mission item with the given params and the default params
 * @param[out] missionItem : pointer on the mission item to fill
 * @param[in] latitude : the latitude of the mission item
 * @param[in] longitude : the longitude of the mission item
 * @param[in] altitude : the altitude of the mission item
 * @param[in] yaw : the yaw of the mission item
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkLandMissionItem(mavlink_mission_item_t* missionItem,
                                                                         float latitude, float longitude, float altitude, float yaw);

/**
 * @brief Fill a takeoff mission item with the given params and the default params
 * @param[out] missionItem : pointer on the mission item to fill
 * @param[in] latitude : the latitude of the mission item
 * @param[in] longitude : the longitude of the mission item
 * @param[in] altitude : the altitude of the mission item
 * @param[in] yaw : the yaw of the mission item
 * @param[in] pitch : desired pitch
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkTakeoffMissionItem(mavlink_mission_item_t* missionItem,
                                                                            float latitude, float longitude, float altitude, float yaw, float pitch);

/**
 * @brief Fill a change speed mission item with the given params and the default params
 * @param[out] missionItem : pointer on the mission item to fill
 * @param[in] groundSpeed : 1 if ground speed, 0 if airspeed
 * @param[in] speed : the speed of the mission item
 * @param[in] throttle : throttle in percent, -1 indicates no changes
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkChangeSpeedMissionItem(mavlink_mission_item_t* missionItem,
                                                                                int groundSpeed, float speed, float throttle);

/**
 * @brief Fill a start video capture mission item with the given params and the default params
 *        This item will start the video capture when it will be read by the drone
 * @param[out] missionItem : pointer on the mission item to fill
 * @param[in] cameraId : id of the camera to start the capture (not used)
 * @param[in] framesPerSeconds : Frame per seconds of the video capture (not used)
 * @param[in] resolution : resolution in megapixels (0.3 for 640x480, 1.3 for 1280x720...)
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkVideoStartCapture(mavlink_mission_item_t* missionItem,
                                                                           int cameraId, float framesPerSeconds, float resolution);

/**
 * @brief Fill a stop video capture mission item with the given params and the default params
 *        This item will stop a started video capture when it will be read by the drone
 * @param[out] missionItem : pointer on the mission item to fill
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkVideoStopCapture(mavlink_mission_item_t* missionItem);

/**
 * @brief Fill a start image capture mission item with the given params and the default params
 *        This item will start a timelapse when it will be read by the drone
 * @param[out] missionItem : pointer on the mission item to fill
 * @param[in] period : the length of the capture in seconds
 *                     (a minimum period which depends on the resolution is filtered by the drone)
 * @param[in] imagesCount : Number of image to take. 0 for unlimited capture (not used)
 * @param[in] resolution : resolution in megapixels (0.3 for 640x480, 1.3 for 1280x720...)
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkImageStartCapture(mavlink_mission_item_t* missionItem,
                                                                           float period,float imagesCount,float resolution);

/**
 * @brief Stop a started image capture
 * @param[out] missionItem : pointer on the mission item to fill
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkImageStopCapture(mavlink_mission_item_t* missionItem);

/**
 * @brief Fill a panorama mission item with the given params and the default params
 *        This item will start a move by the drone or its camera on the yaw/pan axis and on the tilt when it will be
 *        read by the drone
 * Note that, the first vertical angle will be applied relatively to the physical center of the camera.
 * @param[out] missionItem : pointer on the mission item to fill
 * @param[in] horizontalAngle : the horizontal relative angle (deg)
 * @param[in] verticalAngle : the vertical relative angle (deg) (negative angle moves the camera down).
 * @param[in] horizontalRotationSpeed : the desired horizontal rotation speed (m/s)
 * @param[in] verticalRotationSpeed : the desired vertical rotation speed (m/s)
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkCreatePanorama(mavlink_mission_item_t* missionItem,
                                                                        float horizontalAngle,float verticalAngle,float horizontalRotationSpeed,float verticalRotationSpeed);

/**
 * @brief Fill a delay mission item with the given params and the default params
 *        This item will pause the flight plan when it will be read by the drone
 * @param[out] missionItem : pointer on the mission item to fill
 * @param[in] duration : duration of the delay (s)
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkDelay(mavlink_mission_item_t* missionItem, float duration);

/**
 * @brief Fill a set view mode mission item with the given params and the default params
 *        This item will set the way the drone should behave regarding its orientation between two waypoints
 * @param[out] missionItem : pointer on the mission item to fill
 * @param[in] mode : The mode of the ROI (see MAV_ROI)
 * @param[in] missionIndex : The index of the mission or the target id
 *                           (used if mode is MAV_ROI_TARGET or MAV_ROI_WPINDEX)
 * @param[in] roiIndex : The index of roi. This is used to make a reference to this ROI in others mission items
 * @param[in] latitude : the latitude of the ROI (used if mode is MAV_ROI_LOCATION)
 * @param[in] longitude : the longitude of the ROI (used if mode is MAV_ROI_LOCATION)
 * @param[in] altitude : the altitude of the ROI (used if mode is MAV_ROI_LOCATION)
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkSetROI(mavlink_mission_item_t* missionItem, MAV_ROI mode,
                                                                int missionIndex, int roiIndex, float latitude, float longitude, float altitude);

/**
 * @brief Fill a set view mode mission item with the given params and the default params
 *        This item will set the way the drone should behave regarding its orientation between two waypoints
 * @param[out] missionItem : pointer on the mission item to fill
 * @param[in] type : The type of the view mode (see MAV_VIEW_MODE_TYPE)
 * @param[in] roiIndex : The index of the ROI to follow if type is VIEW_MODE_TYPE_ROI. Ignored otherwise.
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkSetViewMode(mavlink_mission_item_t* missionItem,
                                                                     MAV_VIEW_MODE_TYPE type, int roiIndex);

/**
 * @brief Fill a set picture mode mission item with the given params and the default params
 *        This item will set the still capture mode. Only use if the target is equiped by a Sequoia. This item will be
 *        ignored otherwise.
 * @param[out] missionItem : pointer on the mission item to fill
 * @param[in] mode : The mode chosen (see MAV_STILL_CAPTURE_MODE_TYPE)
 * @param[in] interval : If mode is STILL_CAPTURE_MODE_TYPE_TIMELAPSE, interval is in milliseconds.
 *                       If mode is STILL_CAPTURE_MODE_TYPE_GPS_POSITION, interval is in centimeters.
 *                       If mode is STILL_CAPTURE_MODE_TYPE_AUTOMATIC_OVERLAP, interval is in overlapping percentage.
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkSetPictureMode(mavlink_mission_item_t* missionItem,
                                                                        MAV_STILL_CAPTURE_MODE_TYPE mode, float interval);

/**
 * @brief Fill a set photo sensors mission item with the given params and the default params
 *        This item will set the photo sensors that should be used to take a picture.
 *        Only use if the target is equiped by a Sequoia. This item will be ignored otherwise.
 * @param[out] missionItem : pointer on the mission item to fill
 * @param[in] sensorsBitfield : a bitfield of all sensors that should be used (see MAV_PHOTO_SENSORS_FLAG)
 * @return ARMAVLINK_OK if operation went well, the enum description of the error otherwise
 */
eARMAVLINK_ERROR ARMAVLINK_MissionItemUtils_CreateMavlinkSetPhotoSensors(mavlink_mission_item_t* missionItem,
                                                                         uint32_t sensorsBitfield);


#endif

