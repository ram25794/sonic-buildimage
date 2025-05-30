/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: INTERNAL/regs/xgs/generate-pmd.pl
 *
 * Copyright 2018-2024 Broadcom. All rights reserved.
 * The term 'Broadcom' refers to Broadcom Inc. and/or its subsidiaries.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License 
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * A copy of the GNU General Public License version 2 (GPLv2) can
 * be found in the LICENSES folder.
 *
 * This file provides RXPMD access functions for BCM78907_A0.
 *
 ******************************************************************************/

#include <sal/sal_types.h>
#include <bcmpkt/bcmpkt_rxpmd.h>
#include <bcmpkt/bcmpkt_rxpmd_internal.h>

#define MASK(_bn) (((uint32_t)0x1<<(_bn))-1)
#define WORD_FIELD_GET(_d,_s,_l) (((_d) >> (_s)) & MASK(_l))
#define WORD_FIELD_SET(_d,_s,_l,_v) (_d)=(((_d) & ~(MASK(_l) << (_s))) | (((_v) & MASK(_l)) << (_s)))
#define WORD_FIELD_MASK(_d,_s,_l) (_d)=((_d) | (MASK(_l) << (_s)))
/*******************************************************************************
 * SWFORMAT:  RXPMD
 * BLOCKS:
 * SIZE:     416
 ******************************************************************************/
static void bcmpkt_rxpmd_unicast_queue_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[4], 22, 1, val);
}

static uint32_t bcmpkt_rxpmd_unicast_queue_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[4], 22, 1);
    return val;
}

static void bcmpkt_rxpmd_queue_num_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[10], 26, 6, val);
}

static uint32_t bcmpkt_rxpmd_queue_num_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[10], 26, 6);
    return val;
}

static void bcmpkt_rxpmd_cpu_cos_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[10], 26, 6, val);
}

static uint32_t bcmpkt_rxpmd_cpu_cos_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[10], 26, 6);
    return val;
}

static void bcmpkt_rxpmd_matched_rule_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[8], 17, 12, val);
}

static uint32_t bcmpkt_rxpmd_matched_rule_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[8], 17, 12);
    return val;
}

static void bcmpkt_rxpmd_pkt_length_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[9], 4, 14, val);
}

static uint32_t bcmpkt_rxpmd_pkt_length_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[9], 4, 14);
    return val;
}

static void bcmpkt_rxpmd_src_port_num_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[6], 21, 10, val);
}

static uint32_t bcmpkt_rxpmd_src_port_num_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[6], 21, 10);
    return val;
}

static void bcmpkt_rxpmd_outer_vid_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[7], 4, 12, val);
}

static uint32_t bcmpkt_rxpmd_outer_vid_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[7], 4, 12);
    return val;
}

static void bcmpkt_rxpmd_outer_cfi_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[7], 0, 1, val);
}

static uint32_t bcmpkt_rxpmd_outer_cfi_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[7], 0, 1);
    return val;
}

static void bcmpkt_rxpmd_outer_pri_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[7], 1, 3, val);
}

static uint32_t bcmpkt_rxpmd_outer_pri_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[7], 1, 3);
    return val;
}

static void bcmpkt_rxpmd_special_packet_indicator_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[6], 20, 1, val);
}

static uint32_t bcmpkt_rxpmd_special_packet_indicator_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[6], 20, 1);
    return val;
}

static void bcmpkt_rxpmd_special_packet_type_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[8], 7, 3, val);
}

static uint32_t bcmpkt_rxpmd_special_packet_type_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[8], 7, 3);
    return val;
}

static void bcmpkt_rxpmd_change_dscp_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[8], 3, 1, val);
}

static uint32_t bcmpkt_rxpmd_change_dscp_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[8], 3, 1);
    return val;
}

static void bcmpkt_rxpmd_dscp_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[8], 7, 6, val);
}

static uint32_t bcmpkt_rxpmd_dscp_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[8], 7, 6);
    return val;
}

static void bcmpkt_rxpmd_change_ecn_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[8], 4, 1, val);
}

static uint32_t bcmpkt_rxpmd_change_ecn_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[8], 4, 1);
    return val;
}

static void bcmpkt_rxpmd_ecn_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[8], 13, 2, val);
}

static uint32_t bcmpkt_rxpmd_ecn_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[8], 13, 2);
    return val;
}

static void bcmpkt_rxpmd_timestamp_set(uint32_t *data, uint32_t val)
{
    data[5] = val;
}

static uint32_t bcmpkt_rxpmd_timestamp_get(uint32_t *data)
{
    uint32_t val;
    val = data[5];
    return val;
}

static void bcmpkt_rxpmd_timestamp_hi_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[4], 0, 16, val);
}

static uint32_t bcmpkt_rxpmd_timestamp_hi_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[4], 0, 16);
    return val;
}

static void bcmpkt_rxpmd_mtp_index_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[8], 29, 3, val);
}

static uint32_t bcmpkt_rxpmd_mtp_index_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[8], 29, 3);
    return val;
}

static void bcmpkt_rxpmd_bpdu_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[8], 2, 1, val);
}

static uint32_t bcmpkt_rxpmd_bpdu_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[8], 2, 1);
    return val;
}

static void bcmpkt_rxpmd_l3only_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[8], 16, 1, val);
}

static uint32_t bcmpkt_rxpmd_l3only_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[8], 16, 1);
    return val;
}

static void bcmpkt_rxpmd_ip_routed_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[8], 15, 1, val);
}

static uint32_t bcmpkt_rxpmd_ip_routed_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[8], 15, 1);
    return val;
}

static void bcmpkt_rxpmd_uc_sw_copy_dropped_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[4], 21, 1, val);
}

static uint32_t bcmpkt_rxpmd_uc_sw_copy_dropped_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[4], 21, 1);
    return val;
}

static void bcmpkt_rxpmd_switch_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[6], 31, 1, val);
}

static uint32_t bcmpkt_rxpmd_switch_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[6], 31, 1);
    return val;
}

static void bcmpkt_rxpmd_ing_otag_action_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[9], 2, 2, val);
}

static uint32_t bcmpkt_rxpmd_ing_otag_action_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[9], 2, 2);
    return val;
}

static void bcmpkt_rxpmd_ing_tag_type_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[9], 1, 1, val);
}

static uint32_t bcmpkt_rxpmd_ing_tag_type_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[9], 1, 1);
    return val;
}

static void bcmpkt_rxpmd_rx_bfd_start_offset_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[10], 18, 8, val);
}

static uint32_t bcmpkt_rxpmd_rx_bfd_start_offset_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[10], 18, 8);
    return val;
}

static void bcmpkt_rxpmd_rx_bfd_start_offset_type_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[10], 16, 2, val);
}

static uint32_t bcmpkt_rxpmd_rx_bfd_start_offset_type_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[10], 16, 2);
    return val;
}

static void bcmpkt_rxpmd_rx_bfd_session_index_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[10], 4, 12, val);
}

static uint32_t bcmpkt_rxpmd_rx_bfd_session_index_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[10], 4, 12);
    return val;
}

static void bcmpkt_rxpmd_reason_type_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[10], 0, 4, val);
}

static uint32_t bcmpkt_rxpmd_reason_type_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[10], 0, 4);
    return val;
}

static void bcmpkt_rxpmd_do_not_change_ttl_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[8], 6, 1, val);
}

static uint32_t bcmpkt_rxpmd_do_not_change_ttl_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[8], 6, 1);
    return val;
}

static void bcmpkt_rxpmd_i2e_classid_type_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[10], 16, 4, val);
}

static uint32_t bcmpkt_rxpmd_i2e_classid_type_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[10], 16, 4);
    return val;
}

static void bcmpkt_rxpmd_i2e_classid_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[10], 4, 12, val);
}

static uint32_t bcmpkt_rxpmd_i2e_classid_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[10], 4, 12);
    return val;
}

static void bcmpkt_rxpmd_ing_l3_intf_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[10], 4, 13, val);
}

static uint32_t bcmpkt_rxpmd_ing_l3_intf_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[10], 4, 13);
    return val;
}

static void bcmpkt_rxpmd_regen_crc_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[7], 31, 1, val);
}

static uint32_t bcmpkt_rxpmd_regen_crc_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[7], 31, 1);
    return val;
}

static void bcmpkt_rxpmd_entropy_label_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[6], 0, 20, val);
}

static uint32_t bcmpkt_rxpmd_entropy_label_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[6], 0, 20);
    return val;
}

static void bcmpkt_rxpmd_tunnel_decap_type_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[4], 17, 4, val);
}

static uint32_t bcmpkt_rxpmd_tunnel_decap_type_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[4], 17, 4);
    return val;
}

static void bcmpkt_rxpmd_dlb_id_valid_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[8], 5, 1, val);
}

static uint32_t bcmpkt_rxpmd_dlb_id_valid_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[8], 5, 1);
    return val;
}

static void bcmpkt_rxpmd_dlb_id_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[4], 25, 7, val);
}

static uint32_t bcmpkt_rxpmd_dlb_id_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[4], 25, 7);
    return val;
}

static void bcmpkt_rxpmd_replication_or_nhop_index_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[7], 16, 15, val);
}

static uint32_t bcmpkt_rxpmd_replication_or_nhop_index_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[7], 16, 15);
    return val;
}

static void bcmpkt_rxpmd_incoming_int_hdr_type_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[4], 23, 2, val);
}

static uint32_t bcmpkt_rxpmd_incoming_int_hdr_type_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[4], 23, 2);
    return val;
}

static void bcmpkt_rxpmd_ing_l3_intf_valid_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[10], 20, 1, val);
}

static uint32_t bcmpkt_rxpmd_ing_l3_intf_valid_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[10], 20, 1);
    return val;
}

static void bcmpkt_rxpmd_o_nhi_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[9], 18, 14, val & MASK(14));
    WORD_FIELD_SET(data[8], 0, 1, (val >> 14) & MASK(1));
}

static uint32_t bcmpkt_rxpmd_o_nhi_get(uint32_t *data)
{
    uint32_t val;
    val = (WORD_FIELD_GET(data[9], 18, 14) | (WORD_FIELD_GET(data[8], 0, 1) << 14)) ;
    return val;
}

static void bcmpkt_rxpmd_incoming_opaque_tag_status_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[8], 1, 1, val);
}

static uint32_t bcmpkt_rxpmd_incoming_opaque_tag_status_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[8], 1, 1);
    return val;
}

static void bcmpkt_rxpmd_ieee_802_1as_timestamp_enabled_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[4], 16, 1, val);
}

static uint32_t bcmpkt_rxpmd_ieee_802_1as_timestamp_enabled_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[4], 16, 1);
    return val;
}

static uint32_t bcmpkt_rxpmd_i_size_get(uint32_t *data, uint32_t **addr)
{
    return 13;
}

static uint32_t bcmpkt_rxpmd_i_reason_get(uint32_t *data, uint32_t **addr)
{
    *addr = data + 11;
    return 2;
}

static uint32_t bcmpkt_rxpmd_i_module_hdr_get(uint32_t *data, uint32_t **addr)
{
    *addr = data + 0;
    return 4;
}

/*******************************************************************************
 * SWFORMAT:  RX_REASON
 * BLOCKS:
 * SIZE:     46
 ******************************************************************************/
void bcm78907_a0_rx_reason_encode(const bcmpkt_rx_reasons_t *reasons, uint32_t *data)
{
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_INVALID_REASON)) {
        data[1] |= (0x1 << 0);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_SLF)) {
        data[1] |= (0x1 << 1);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_DLF)) {
        data[1] |= (0x1 << 2);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_L2MOVE)) {
        data[1] |= (0x1 << 3);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_L2CPU)) {
        data[1] |= (0x1 << 4);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_L3SRC_MISS)) {
        data[1] |= (0x1 << 5);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_L3DST_MISS)) {
        data[1] |= (0x1 << 6);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_L3SRC_MOVE)) {
        data[1] |= (0x1 << 7);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_MC_MISS)) {
        data[1] |= (0x1 << 8);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_IPMC_MISS)) {
        data[1] |= (0x1 << 9);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_FFP)) {
        data[1] |= (0x1 << 10);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_L3HDR_ERR)) {
        data[1] |= (0x1 << 11);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_PROTOCOL_PKT)) {
        data[1] |= (0x1 << 12);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_DOS_ATTACK)) {
        data[1] |= (0x1 << 13);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_MARTIAN_ADDR)) {
        data[1] |= (0x1 << 14);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_TUNNEL_ERR)) {
        data[1] |= (0x1 << 15);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_SFLOW_SRC)) {
        data[1] |= (0x1 << 16);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_SFLOW_DST)) {
        data[1] |= (0x1 << 17);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_ICMP_REDIRECT)) {
        data[1] |= (0x1 << 18);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_L3_SLOWPATH)) {
        data[1] |= (0x1 << 19);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_PARITY_ERROR)) {
        data[1] |= (0x1 << 20);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_L3_MTU_CHECK_FAIL)) {
        data[1] |= (0x1 << 21);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_MPLS_TTL_CHECK)) {
        data[1] |= (0x1 << 22);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_MPLS_LABEL_MISS)) {
        data[1] |= (0x1 << 23);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_MPLS_INVALID_ACTION)) {
        data[1] |= (0x1 << 24);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_MPLS_INVALID_PAYLOAD)) {
        data[1] |= (0x1 << 25);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_VFP)) {
        data[1] |= (0x1 << 26);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_PBT_NONUC_PKT)) {
        data[1] |= (0x1 << 27);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_L3_NEXT_HOP)) {
        data[1] |= (0x1 << 28);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_MY_STATION)) {
        data[1] |= (0x1 << 29);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_TIME_SYNC)) {
        data[1] |= (0x1 << 30);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_TUNNEL_DECAP_ECN_ERROR)) {
        data[1] |= (0x1 << 31);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_BFD_SLOWPATH)) {
        data[0] |= (0x1 << 0);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_BFD_ERROR)) {
        data[0] |= (0x1 << 1);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_PACKET_TRACE_TO_CPU)) {
        data[0] |= (0x1 << 2);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_MPLS_UNKNOWN_CONTROL_PKT)) {
        data[0] |= (0x1 << 3);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_MPLS_ALERT_LABEL)) {
        data[0] |= (0x1 << 4);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_IPMC_INTERFACE_MISMATCH)) {
        data[0] |= (0x1 << 5);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_DLB_MONITOR)) {
        data[0] |= (0x1 << 6);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_SFLOW_FLEX)) {
        data[0] |= (0x1 << 7);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_CPU_UVLAN)) {
        data[0] |= (0x1 << 8);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_SRV6_ERROR)) {
        data[0] |= (0x1 << 9);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_VXLAN_VN_ID_MISS)) {
        data[0] |= (0x1 << 10);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_VXLAN_SIP_MISS)) {
        data[0] |= (0x1 << 11);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_ADAPT_MISS)) {
        data[0] |= (0x1 << 12);
    }
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_INVALID_GSH_NON_GSH)) {
        data[0] |= (0x1 << 13);
    }
}

void bcm78907_a0_rx_reason_decode(const uint32_t *data, bcmpkt_rx_reasons_t *reasons)
{
    uint32_t val;
    COMPILER_REFERENCE(val);
    if (data[1] & (0x1 << 0)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_INVALID_REASON);
    }
    if (data[1] & (0x1 << 1)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_SLF);
    }
    if (data[1] & (0x1 << 2)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_DLF);
    }
    if (data[1] & (0x1 << 3)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_L2MOVE);
    }
    if (data[1] & (0x1 << 4)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_L2CPU);
    }
    if (data[1] & (0x1 << 5)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_L3SRC_MISS);
    }
    if (data[1] & (0x1 << 6)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_L3DST_MISS);
    }
    if (data[1] & (0x1 << 7)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_L3SRC_MOVE);
    }
    if (data[1] & (0x1 << 8)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_MC_MISS);
    }
    if (data[1] & (0x1 << 9)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_IPMC_MISS);
    }
    if (data[1] & (0x1 << 10)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_FFP);
    }
    if (data[1] & (0x1 << 11)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_L3HDR_ERR);
    }
    if (data[1] & (0x1 << 12)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_PROTOCOL_PKT);
    }
    if (data[1] & (0x1 << 13)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_DOS_ATTACK);
    }
    if (data[1] & (0x1 << 14)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_MARTIAN_ADDR);
    }
    if (data[1] & (0x1 << 15)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_TUNNEL_ERR);
    }
    if (data[1] & (0x1 << 16)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_SFLOW_SRC);
    }
    if (data[1] & (0x1 << 17)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_SFLOW_DST);
    }
    if (data[1] & (0x1 << 18)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_ICMP_REDIRECT);
    }
    if (data[1] & (0x1 << 19)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_L3_SLOWPATH);
    }
    if (data[1] & (0x1 << 20)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_PARITY_ERROR);
    }
    if (data[1] & (0x1 << 21)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_L3_MTU_CHECK_FAIL);
    }
    if (data[1] & (0x1 << 22)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_MPLS_TTL_CHECK);
    }
    if (data[1] & (0x1 << 23)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_MPLS_LABEL_MISS);
    }
    if (data[1] & (0x1 << 24)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_MPLS_INVALID_ACTION);
    }
    if (data[1] & (0x1 << 25)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_MPLS_INVALID_PAYLOAD);
    }
    if (data[1] & (0x1 << 26)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_VFP);
    }
    if (data[1] & (0x1 << 27)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_PBT_NONUC_PKT);
    }
    if (data[1] & (0x1 << 28)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_L3_NEXT_HOP);
    }
    if (data[1] & (0x1 << 29)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_MY_STATION);
    }
    if (data[1] & (0x1 << 30)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_TIME_SYNC);
    }
    if (data[1] & (0x1 << 31)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_TUNNEL_DECAP_ECN_ERROR);
    }
    if (data[0] & (0x1 << 0)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_BFD_SLOWPATH);
    }
    if (data[0] & (0x1 << 1)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_BFD_ERROR);
    }
    if (data[0] & (0x1 << 2)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_PACKET_TRACE_TO_CPU);
    }
    if (data[0] & (0x1 << 3)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_MPLS_UNKNOWN_CONTROL_PKT);
    }
    if (data[0] & (0x1 << 4)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_MPLS_ALERT_LABEL);
    }
    if (data[0] & (0x1 << 5)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_IPMC_INTERFACE_MISMATCH);
    }
    if (data[0] & (0x1 << 6)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_DLB_MONITOR);
    }
    if (data[0] & (0x1 << 7)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_SFLOW_FLEX);
    }
    if (data[0] & (0x1 << 8)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_CPU_UVLAN);
    }
    if (data[0] & (0x1 << 9)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_SRV6_ERROR);
    }
    if (data[0] & (0x1 << 10)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_VXLAN_VN_ID_MISS);
    }
    if (data[0] & (0x1 << 11)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_VXLAN_SIP_MISS);
    }
    if (data[0] & (0x1 << 12)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_ADAPT_MISS);
    }
    if (data[0] & (0x1 << 13)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_INVALID_GSH_NON_GSH);
    }
}

/*******************************************************************************
 * SWFORMAT:  EP_RX_REASON
 * BLOCKS:
 * SIZE:     64
 ******************************************************************************/
void bcm78907_a0_ep_rx_reason_encode(const bcmpkt_rx_reasons_t *reasons, uint32_t *data)
{
    if (BCMPKT_RX_REASON_GET(*reasons, BCMPKT_RX_REASON_EP_CTC)) {
        data[1] |= (0x1 << 0);
    }
}

void bcm78907_a0_ep_rx_reason_decode(const uint32_t *data, bcmpkt_rx_reasons_t *reasons)
{
    uint32_t val;
    COMPILER_REFERENCE(val);
    if (data[1] & (0x1 << 0)) {
        BCMPKT_RX_REASON_SET(*reasons, BCMPKT_RX_REASON_EP_CTC);
    }
}

const bcmpkt_rxpmd_fget_t bcm78907_a0_rxpmd_fget = {
    {
        bcmpkt_rxpmd_unicast_queue_get,
        bcmpkt_rxpmd_queue_num_get,
        bcmpkt_rxpmd_cpu_cos_get,
        NULL,
        bcmpkt_rxpmd_matched_rule_get,
        bcmpkt_rxpmd_pkt_length_get,
        bcmpkt_rxpmd_src_port_num_get,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_outer_vid_get,
        bcmpkt_rxpmd_outer_cfi_get,
        bcmpkt_rxpmd_outer_pri_get,
        bcmpkt_rxpmd_special_packet_indicator_get,
        bcmpkt_rxpmd_special_packet_type_get,
        bcmpkt_rxpmd_change_dscp_get,
        bcmpkt_rxpmd_dscp_get,
        bcmpkt_rxpmd_change_ecn_get,
        bcmpkt_rxpmd_ecn_get,
        NULL,
        bcmpkt_rxpmd_timestamp_get,
        bcmpkt_rxpmd_timestamp_hi_get,
        bcmpkt_rxpmd_mtp_index_get,
        bcmpkt_rxpmd_bpdu_get,
        NULL,
        bcmpkt_rxpmd_l3only_get,
        bcmpkt_rxpmd_ip_routed_get,
        NULL,
        NULL,
        bcmpkt_rxpmd_uc_sw_copy_dropped_get,
        bcmpkt_rxpmd_switch_get,
        NULL,
        NULL,
        bcmpkt_rxpmd_ing_otag_action_get,
        bcmpkt_rxpmd_ing_tag_type_get,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_rx_bfd_start_offset_get,
        bcmpkt_rxpmd_rx_bfd_start_offset_type_get,
        bcmpkt_rxpmd_rx_bfd_session_index_get,
        bcmpkt_rxpmd_reason_type_get,
        bcmpkt_rxpmd_do_not_change_ttl_get,
        bcmpkt_rxpmd_i2e_classid_type_get,
        bcmpkt_rxpmd_i2e_classid_get,
        bcmpkt_rxpmd_ing_l3_intf_get,
        NULL,
        bcmpkt_rxpmd_regen_crc_get,
        bcmpkt_rxpmd_entropy_label_get,
        bcmpkt_rxpmd_tunnel_decap_type_get,
        bcmpkt_rxpmd_dlb_id_valid_get,
        bcmpkt_rxpmd_dlb_id_get,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_replication_or_nhop_index_get,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_incoming_int_hdr_type_get,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_ing_l3_intf_valid_get,
        bcmpkt_rxpmd_o_nhi_get,
        NULL,
        NULL,
        bcmpkt_rxpmd_incoming_opaque_tag_status_get,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_ieee_802_1as_timestamp_enabled_get,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};


const bcmpkt_rxpmd_fset_t bcm78907_a0_rxpmd_fset = {
    {
        bcmpkt_rxpmd_unicast_queue_set,
        bcmpkt_rxpmd_queue_num_set,
        bcmpkt_rxpmd_cpu_cos_set,
        NULL,
        bcmpkt_rxpmd_matched_rule_set,
        bcmpkt_rxpmd_pkt_length_set,
        bcmpkt_rxpmd_src_port_num_set,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_outer_vid_set,
        bcmpkt_rxpmd_outer_cfi_set,
        bcmpkt_rxpmd_outer_pri_set,
        bcmpkt_rxpmd_special_packet_indicator_set,
        bcmpkt_rxpmd_special_packet_type_set,
        bcmpkt_rxpmd_change_dscp_set,
        bcmpkt_rxpmd_dscp_set,
        bcmpkt_rxpmd_change_ecn_set,
        bcmpkt_rxpmd_ecn_set,
        NULL,
        bcmpkt_rxpmd_timestamp_set,
        bcmpkt_rxpmd_timestamp_hi_set,
        bcmpkt_rxpmd_mtp_index_set,
        bcmpkt_rxpmd_bpdu_set,
        NULL,
        bcmpkt_rxpmd_l3only_set,
        bcmpkt_rxpmd_ip_routed_set,
        NULL,
        NULL,
        bcmpkt_rxpmd_uc_sw_copy_dropped_set,
        bcmpkt_rxpmd_switch_set,
        NULL,
        NULL,
        bcmpkt_rxpmd_ing_otag_action_set,
        bcmpkt_rxpmd_ing_tag_type_set,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_rx_bfd_start_offset_set,
        bcmpkt_rxpmd_rx_bfd_start_offset_type_set,
        bcmpkt_rxpmd_rx_bfd_session_index_set,
        bcmpkt_rxpmd_reason_type_set,
        bcmpkt_rxpmd_do_not_change_ttl_set,
        bcmpkt_rxpmd_i2e_classid_type_set,
        bcmpkt_rxpmd_i2e_classid_set,
        bcmpkt_rxpmd_ing_l3_intf_set,
        NULL,
        bcmpkt_rxpmd_regen_crc_set,
        bcmpkt_rxpmd_entropy_label_set,
        bcmpkt_rxpmd_tunnel_decap_type_set,
        bcmpkt_rxpmd_dlb_id_valid_set,
        bcmpkt_rxpmd_dlb_id_set,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_replication_or_nhop_index_set,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_incoming_int_hdr_type_set,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_ing_l3_intf_valid_set,
        bcmpkt_rxpmd_o_nhi_set,
        NULL,
        NULL,
        bcmpkt_rxpmd_incoming_opaque_tag_status_set,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_rxpmd_ieee_802_1as_timestamp_enabled_set,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};


const bcmpkt_rxpmd_figet_t bcm78907_a0_rxpmd_figet = {
    {
        bcmpkt_rxpmd_i_size_get,
        bcmpkt_rxpmd_i_reason_get,
        bcmpkt_rxpmd_i_module_hdr_get,
        NULL
    }
};

static shr_enum_map_t bcm78907_a0_rxpmd_view_types[] = {
    {NULL, -1},
};

/* -2: unsupported, -1: global, others: view's value */
static int bcm78907_a0_rxpmd_view_infos[BCMPKT_RXPMD_FID_COUNT] = {
     -1, -1, -1, -2, -1, -1, -1, -2, -2, -2, -1, -1, -1, -1, -1, -1,
     -1, -1, -1, -2, -1, -1, -1, -1, -2, -1, -1, -2, -2, -1, -1, -2,
     -2, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1,
     -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -2, -2, -2,
     -2, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -2, -2, -2,
     -1, -1, -2, -2, -1, -2, -2, -2, -2, -1, -2, -2, -2, -2, -2, -2,
     -2, -2, -2,
};


void bcm78907_a0_rxpmd_view_info_get(bcmpkt_pmd_view_info_t *info)
{
    info->view_infos = bcm78907_a0_rxpmd_view_infos;
    info->view_types = bcm78907_a0_rxpmd_view_types;
    info->view_type_get = NULL;
}
