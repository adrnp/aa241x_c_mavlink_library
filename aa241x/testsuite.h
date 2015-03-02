/** @file
 *	@brief MAVLink comm protocol testsuite generated from aa241x.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef AA241X_TESTSUITE_H
#define AA241X_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_aa241x(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_aa241x(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_aa241x_mission_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_aa241x_mission_status_t packet_in = {
		17.0,45.0,29,96
    };
	mavlink_aa241x_mission_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.score = packet_in.score;
        	packet1.mission_time = packet_in.mission_time;
        	packet1.can_start = packet_in.can_start;
        	packet1.in_mission = packet_in.in_mission;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_mission_status_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_aa241x_mission_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_mission_status_pack(system_id, component_id, &msg , packet1.can_start , packet1.in_mission , packet1.score , packet1.mission_time );
	mavlink_msg_aa241x_mission_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_mission_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.can_start , packet1.in_mission , packet1.score , packet1.mission_time );
	mavlink_msg_aa241x_mission_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_aa241x_mission_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_mission_status_send(MAVLINK_COMM_1 , packet1.can_start , packet1.in_mission , packet1.score , packet1.mission_time );
	mavlink_msg_aa241x_mission_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_aa241x_new_fire_1(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_aa241x_new_fire_1_t packet_in = {
		93372036854775807ULL,{ 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44 },{ 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92 }
    };
	mavlink_aa241x_new_fire_1_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.mission_time = packet_in.mission_time;
        
        	mav_array_memcpy(packet1.i, packet_in.i, sizeof(uint8_t)*16);
        	mav_array_memcpy(packet1.j, packet_in.j, sizeof(uint8_t)*16);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_new_fire_1_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_aa241x_new_fire_1_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_new_fire_1_pack(system_id, component_id, &msg , packet1.mission_time , packet1.i , packet1.j );
	mavlink_msg_aa241x_new_fire_1_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_new_fire_1_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mission_time , packet1.i , packet1.j );
	mavlink_msg_aa241x_new_fire_1_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_aa241x_new_fire_1_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_new_fire_1_send(MAVLINK_COMM_1 , packet1.mission_time , packet1.i , packet1.j );
	mavlink_msg_aa241x_new_fire_1_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_aa241x_new_fire_2(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_aa241x_new_fire_2_t packet_in = {
		93372036854775807ULL,{ 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44 },{ 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92 }
    };
	mavlink_aa241x_new_fire_2_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.mission_time = packet_in.mission_time;
        
        	mav_array_memcpy(packet1.i, packet_in.i, sizeof(uint8_t)*16);
        	mav_array_memcpy(packet1.j, packet_in.j, sizeof(uint8_t)*16);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_new_fire_2_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_aa241x_new_fire_2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_new_fire_2_pack(system_id, component_id, &msg , packet1.mission_time , packet1.i , packet1.j );
	mavlink_msg_aa241x_new_fire_2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_new_fire_2_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mission_time , packet1.i , packet1.j );
	mavlink_msg_aa241x_new_fire_2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_aa241x_new_fire_2_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_new_fire_2_send(MAVLINK_COMM_1 , packet1.mission_time , packet1.i , packet1.j );
	mavlink_msg_aa241x_new_fire_2_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_aa241x_new_fire_3(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_aa241x_new_fire_3_t packet_in = {
		93372036854775807ULL,{ 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44 },{ 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92 }
    };
	mavlink_aa241x_new_fire_3_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.mission_time = packet_in.mission_time;
        
        	mav_array_memcpy(packet1.i, packet_in.i, sizeof(uint8_t)*16);
        	mav_array_memcpy(packet1.j, packet_in.j, sizeof(uint8_t)*16);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_new_fire_3_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_aa241x_new_fire_3_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_new_fire_3_pack(system_id, component_id, &msg , packet1.mission_time , packet1.i , packet1.j );
	mavlink_msg_aa241x_new_fire_3_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_new_fire_3_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mission_time , packet1.i , packet1.j );
	mavlink_msg_aa241x_new_fire_3_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_aa241x_new_fire_3_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_new_fire_3_send(MAVLINK_COMM_1 , packet1.mission_time , packet1.i , packet1.j );
	mavlink_msg_aa241x_new_fire_3_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_aa241x_water_drop_result(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_aa241x_water_drop_result_t packet_in = {
		93372036854775807ULL,29,96,163
    };
	mavlink_aa241x_water_drop_result_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.mission_time = packet_in.mission_time;
        	packet1.success = packet_in.success;
        	packet1.i = packet_in.i;
        	packet1.j = packet_in.j;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_water_drop_result_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_aa241x_water_drop_result_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_water_drop_result_pack(system_id, component_id, &msg , packet1.mission_time , packet1.success , packet1.i , packet1.j );
	mavlink_msg_aa241x_water_drop_result_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_water_drop_result_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mission_time , packet1.success , packet1.i , packet1.j );
	mavlink_msg_aa241x_water_drop_result_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_aa241x_water_drop_result_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_water_drop_result_send(MAVLINK_COMM_1 , packet1.mission_time , packet1.success , packet1.i , packet1.j );
	mavlink_msg_aa241x_water_drop_result_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_aa241x_picture_result(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_aa241x_picture_result_t packet_in = {
		93372036854775807ULL,73.0,101.0,129.0,157.0,77,144,{ 211, 212, 213, 214, 215, 216, 217, 218, 219 },{ 46, 47, 48, 49, 50, 51, 52, 53, 54 },{ 137, 138, 139, 140, 141, 142, 143, 144, 145 }
    };
	mavlink_aa241x_picture_result_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.mission_time = packet_in.mission_time;
        	packet1.center_n = packet_in.center_n;
        	packet1.center_e = packet_in.center_e;
        	packet1.center_d = packet_in.center_d;
        	packet1.pic_d = packet_in.pic_d;
        	packet1.success = packet_in.success;
        	packet1.num_cells = packet_in.num_cells;
        
        	mav_array_memcpy(packet1.i, packet_in.i, sizeof(uint8_t)*9);
        	mav_array_memcpy(packet1.j, packet_in.j, sizeof(uint8_t)*9);
        	mav_array_memcpy(packet1.state, packet_in.state, sizeof(int8_t)*9);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_picture_result_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_aa241x_picture_result_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_picture_result_pack(system_id, component_id, &msg , packet1.mission_time , packet1.success , packet1.center_n , packet1.center_e , packet1.center_d , packet1.pic_d , packet1.num_cells , packet1.i , packet1.j , packet1.state );
	mavlink_msg_aa241x_picture_result_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_picture_result_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mission_time , packet1.success , packet1.center_n , packet1.center_e , packet1.center_d , packet1.pic_d , packet1.num_cells , packet1.i , packet1.j , packet1.state );
	mavlink_msg_aa241x_picture_result_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_aa241x_picture_result_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_aa241x_picture_result_send(MAVLINK_COMM_1 , packet1.mission_time , packet1.success , packet1.center_n , packet1.center_e , packet1.center_d , packet1.pic_d , packet1.num_cells , packet1.i , packet1.j , packet1.state );
	mavlink_msg_aa241x_picture_result_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_aa241x(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_aa241x_mission_status(system_id, component_id, last_msg);
	mavlink_test_aa241x_new_fire_1(system_id, component_id, last_msg);
	mavlink_test_aa241x_new_fire_2(system_id, component_id, last_msg);
	mavlink_test_aa241x_new_fire_3(system_id, component_id, last_msg);
	mavlink_test_aa241x_water_drop_result(system_id, component_id, last_msg);
	mavlink_test_aa241x_picture_result(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // AA241X_TESTSUITE_H