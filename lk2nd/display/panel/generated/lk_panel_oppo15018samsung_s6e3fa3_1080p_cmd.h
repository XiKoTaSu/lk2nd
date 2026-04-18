// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2026 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_OPPO15018SAMSUNG_S6E3FA3_1080P_CMD_H_
#define _PANEL_OPPO15018SAMSUNG_S6E3FA3_1080P_CMD_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config oppo15018samsung_s6e3fa3_1080p_cmd_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_oppo15018samsung_s6e3fa3_1080p_cmd",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 1,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 1,
	.panel_init_delay = 0,
};

static struct panel_resolution oppo15018samsung_s6e3fa3_1080p_cmd_panel_res = {
	.panel_width = 1080,
	.panel_height = 1920,
	.hfront_porch = 140,
	.hback_porch = 70,
	.hpulse_width = 12,
	.hsync_skew = 0,
	.vfront_porch = 20,
	.vback_porch = 4,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info oppo15018samsung_s6e3fa3_1080p_cmd_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_0[] = {
	0x29, 0x00, 0x05, 0x80
};
static char oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_1[] = {
	0x11, 0x00, 0x05, 0x80
};
static char oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_2[] = {
	0x35, 0x00, 0x15, 0x80
};
static char oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_3[] = {
	0x53, 0x20, 0x15, 0x80
};
static char oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_4[] = {
	0x03, 0x00, 0x29, 0xc0, 0xfc, 0x5a, 0x5a, 0xff
};
static char oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_5[] = {
	0xb0, 0x1e, 0x15, 0x80
};
static char oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_6[] = {
	0xfd, 0xa8, 0x15, 0x80
};
static char oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_7[] = {
	0x03, 0x00, 0x29, 0xc0, 0xfc, 0xa5, 0xa5, 0xff
};

static struct mipi_dsi_cmd oppo15018samsung_s6e3fa3_1080p_cmd_on_command[] = {
	{ sizeof(oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_0), oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_0, 10 },
	{ sizeof(oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_1), oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_1, 140 },
	{ sizeof(oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_2), oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_2, 0 },
	{ sizeof(oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_3), oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_3, 0 },
	{ sizeof(oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_4), oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_4, 0 },
	{ sizeof(oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_5), oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_5, 0 },
	{ sizeof(oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_6), oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_6, 0 },
	{ sizeof(oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_7), oppo15018samsung_s6e3fa3_1080p_cmd_on_cmd_7, 0 },
};

static char oppo15018samsung_s6e3fa3_1080p_cmd_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char oppo15018samsung_s6e3fa3_1080p_cmd_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd oppo15018samsung_s6e3fa3_1080p_cmd_off_command[] = {
	{ sizeof(oppo15018samsung_s6e3fa3_1080p_cmd_off_cmd_0), oppo15018samsung_s6e3fa3_1080p_cmd_off_cmd_0, 40 },
	{ sizeof(oppo15018samsung_s6e3fa3_1080p_cmd_off_cmd_1), oppo15018samsung_s6e3fa3_1080p_cmd_off_cmd_1, 120 },
};

static struct command_state oppo15018samsung_s6e3fa3_1080p_cmd_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info oppo15018samsung_s6e3fa3_1080p_cmd_command_panel = {
	/* FIXME: This is a command mode panel */
};

static struct videopanel_info oppo15018samsung_s6e3fa3_1080p_cmd_video_panel = {
	.hsync_pulse = 1,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 2,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration oppo15018samsung_s6e3fa3_1080p_cmd_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t oppo15018samsung_s6e3fa3_1080p_cmd_timings[] = {
	0xf0, 0x3d, 0x26, 0x00, 0x6a, 0x6a, 0x30, 0x3e, 0x32, 0x03, 0x04, 0x00
};

static struct panel_timing oppo15018samsung_s6e3fa3_1080p_cmd_timing_info = {
	.tclk_post = 0x20,
	.tclk_pre = 0x3e,
};

static struct panel_reset_sequence oppo15018samsung_s6e3fa3_1080p_cmd_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 10, 5, 10 },
	.pin_direction = 2,
};

static struct backlight oppo15018samsung_s6e3fa3_1080p_cmd_backlight = {
	.bl_interface_type = BL_DCS,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_oppo15018samsung_s6e3fa3_1080p_cmd_select(struct panel_struct *panel,
								   struct msm_panel_info *pinfo,
								   struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &oppo15018samsung_s6e3fa3_1080p_cmd_panel_data;
	panel->panelres = &oppo15018samsung_s6e3fa3_1080p_cmd_panel_res;
	panel->color = &oppo15018samsung_s6e3fa3_1080p_cmd_color;
	panel->videopanel = &oppo15018samsung_s6e3fa3_1080p_cmd_video_panel;
	panel->commandpanel = &oppo15018samsung_s6e3fa3_1080p_cmd_command_panel;
	panel->state = &oppo15018samsung_s6e3fa3_1080p_cmd_state;
	panel->laneconfig = &oppo15018samsung_s6e3fa3_1080p_cmd_lane_config;
	panel->paneltiminginfo = &oppo15018samsung_s6e3fa3_1080p_cmd_timing_info;
	panel->panelresetseq = &oppo15018samsung_s6e3fa3_1080p_cmd_reset_seq;
	panel->backlightinfo = &oppo15018samsung_s6e3fa3_1080p_cmd_backlight;
	pinfo->mipi.panel_on_cmds = oppo15018samsung_s6e3fa3_1080p_cmd_on_command;
	pinfo->mipi.panel_off_cmds = oppo15018samsung_s6e3fa3_1080p_cmd_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(oppo15018samsung_s6e3fa3_1080p_cmd_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(oppo15018samsung_s6e3fa3_1080p_cmd_off_command);
	memcpy(phy_db->timing, oppo15018samsung_s6e3fa3_1080p_cmd_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_LDO_MODE;
}

#endif /* _PANEL_OPPO15018SAMSUNG_S6E3FA3_1080P_CMD_H_ */
