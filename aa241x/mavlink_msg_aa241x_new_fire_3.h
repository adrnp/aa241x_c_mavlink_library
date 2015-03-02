// MESSAGE AA241X_NEW_FIRE_3 PACKING

#define MAVLINK_MSG_ID_AA241X_NEW_FIRE_3 154

typedef struct __mavlink_aa241x_new_fire_3_t
{
 uint64_t mission_time; ///< Mission time in microseconds at which these new fire cells were created
 uint8_t i[16]; ///< list of i coords of new fire (i = 255 means unused array element)
 uint8_t j[16]; ///< list of j coords of new fire (j = 255 means unused array element)
} mavlink_aa241x_new_fire_3_t;

#define MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN 40
#define MAVLINK_MSG_ID_154_LEN 40

#define MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_CRC 158
#define MAVLINK_MSG_ID_154_CRC 158

#define MAVLINK_MSG_AA241X_NEW_FIRE_3_FIELD_I_LEN 16
#define MAVLINK_MSG_AA241X_NEW_FIRE_3_FIELD_J_LEN 16

#define MAVLINK_MESSAGE_INFO_AA241X_NEW_FIRE_3 { \
	"AA241X_NEW_FIRE_3", \
	3, \
	{  { "mission_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aa241x_new_fire_3_t, mission_time) }, \
         { "i", NULL, MAVLINK_TYPE_UINT8_T, 16, 8, offsetof(mavlink_aa241x_new_fire_3_t, i) }, \
         { "j", NULL, MAVLINK_TYPE_UINT8_T, 16, 24, offsetof(mavlink_aa241x_new_fire_3_t, j) }, \
         } \
}


/**
 * @brief Pack a aa241x_new_fire_3 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_time Mission time in microseconds at which these new fire cells were created
 * @param i list of i coords of new fire (i = 255 means unused array element)
 * @param j list of j coords of new fire (j = 255 means unused array element)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_new_fire_3_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t mission_time, const uint8_t *i, const uint8_t *j)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN];
	_mav_put_uint64_t(buf, 0, mission_time);
	_mav_put_uint8_t_array(buf, 8, i, 16);
	_mav_put_uint8_t_array(buf, 24, j, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN);
#else
	mavlink_aa241x_new_fire_3_t packet;
	packet.mission_time = mission_time;
	mav_array_memcpy(packet.i, i, sizeof(uint8_t)*16);
	mav_array_memcpy(packet.j, j, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_AA241X_NEW_FIRE_3;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN);
#endif
}

/**
 * @brief Pack a aa241x_new_fire_3 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_time Mission time in microseconds at which these new fire cells were created
 * @param i list of i coords of new fire (i = 255 means unused array element)
 * @param j list of j coords of new fire (j = 255 means unused array element)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_new_fire_3_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t mission_time,const uint8_t *i,const uint8_t *j)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN];
	_mav_put_uint64_t(buf, 0, mission_time);
	_mav_put_uint8_t_array(buf, 8, i, 16);
	_mav_put_uint8_t_array(buf, 24, j, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN);
#else
	mavlink_aa241x_new_fire_3_t packet;
	packet.mission_time = mission_time;
	mav_array_memcpy(packet.i, i, sizeof(uint8_t)*16);
	mav_array_memcpy(packet.j, j, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_AA241X_NEW_FIRE_3;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN);
#endif
}

/**
 * @brief Encode a aa241x_new_fire_3 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_new_fire_3 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_new_fire_3_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aa241x_new_fire_3_t* aa241x_new_fire_3)
{
	return mavlink_msg_aa241x_new_fire_3_pack(system_id, component_id, msg, aa241x_new_fire_3->mission_time, aa241x_new_fire_3->i, aa241x_new_fire_3->j);
}

/**
 * @brief Encode a aa241x_new_fire_3 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_new_fire_3 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_new_fire_3_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aa241x_new_fire_3_t* aa241x_new_fire_3)
{
	return mavlink_msg_aa241x_new_fire_3_pack_chan(system_id, component_id, chan, msg, aa241x_new_fire_3->mission_time, aa241x_new_fire_3->i, aa241x_new_fire_3->j);
}

/**
 * @brief Send a aa241x_new_fire_3 message
 * @param chan MAVLink channel to send the message
 *
 * @param mission_time Mission time in microseconds at which these new fire cells were created
 * @param i list of i coords of new fire (i = 255 means unused array element)
 * @param j list of j coords of new fire (j = 255 means unused array element)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aa241x_new_fire_3_send(mavlink_channel_t chan, uint64_t mission_time, const uint8_t *i, const uint8_t *j)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN];
	_mav_put_uint64_t(buf, 0, mission_time);
	_mav_put_uint8_t_array(buf, 8, i, 16);
	_mav_put_uint8_t_array(buf, 24, j, 16);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3, buf, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3, buf, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN);
#endif
#else
	mavlink_aa241x_new_fire_3_t packet;
	packet.mission_time = mission_time;
	mav_array_memcpy(packet.i, i, sizeof(uint8_t)*16);
	mav_array_memcpy(packet.j, j, sizeof(uint8_t)*16);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3, (const char *)&packet, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3, (const char *)&packet, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aa241x_new_fire_3_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t mission_time, const uint8_t *i, const uint8_t *j)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, mission_time);
	_mav_put_uint8_t_array(buf, 8, i, 16);
	_mav_put_uint8_t_array(buf, 24, j, 16);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3, buf, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3, buf, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN);
#endif
#else
	mavlink_aa241x_new_fire_3_t *packet = (mavlink_aa241x_new_fire_3_t *)msgbuf;
	packet->mission_time = mission_time;
	mav_array_memcpy(packet->i, i, sizeof(uint8_t)*16);
	mav_array_memcpy(packet->j, j, sizeof(uint8_t)*16);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3, (const char *)packet, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3, (const char *)packet, MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE AA241X_NEW_FIRE_3 UNPACKING


/**
 * @brief Get field mission_time from aa241x_new_fire_3 message
 *
 * @return Mission time in microseconds at which these new fire cells were created
 */
static inline uint64_t mavlink_msg_aa241x_new_fire_3_get_mission_time(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field i from aa241x_new_fire_3 message
 *
 * @return list of i coords of new fire (i = 255 means unused array element)
 */
static inline uint16_t mavlink_msg_aa241x_new_fire_3_get_i(const mavlink_message_t* msg, uint8_t *i)
{
	return _MAV_RETURN_uint8_t_array(msg, i, 16,  8);
}

/**
 * @brief Get field j from aa241x_new_fire_3 message
 *
 * @return list of j coords of new fire (j = 255 means unused array element)
 */
static inline uint16_t mavlink_msg_aa241x_new_fire_3_get_j(const mavlink_message_t* msg, uint8_t *j)
{
	return _MAV_RETURN_uint8_t_array(msg, j, 16,  24);
}

/**
 * @brief Decode a aa241x_new_fire_3 message into a struct
 *
 * @param msg The message to decode
 * @param aa241x_new_fire_3 C-struct to decode the message contents into
 */
static inline void mavlink_msg_aa241x_new_fire_3_decode(const mavlink_message_t* msg, mavlink_aa241x_new_fire_3_t* aa241x_new_fire_3)
{
#if MAVLINK_NEED_BYTE_SWAP
	aa241x_new_fire_3->mission_time = mavlink_msg_aa241x_new_fire_3_get_mission_time(msg);
	mavlink_msg_aa241x_new_fire_3_get_i(msg, aa241x_new_fire_3->i);
	mavlink_msg_aa241x_new_fire_3_get_j(msg, aa241x_new_fire_3->j);
#else
	memcpy(aa241x_new_fire_3, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_AA241X_NEW_FIRE_3_LEN);
#endif
}
