/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_XFS_STG_H
#define BCMINT_LTSW_XFS_STG_H

#include <bcm/types.h>

#include <shr/shr_bitop.h>
#include <sal/sal_types.h>

/*!
 * \brief Get STG size information.
 *
 * \param [in] unit Unit Number.
 * \param [out] stg_min Minimum STG index.
 * \param [out] stg_max Maximum STG index.
 * \param [out] vlan_count VLAN count.
 * \param [out] vpn_count VPN count.
 * \param [out] vpn_offset VPN offset.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_stg_size_get(
    int unit,
    bcm_stg_t *stg_min,
    bcm_stg_t *stg_max,
    int *vlan_count,
    int *vpn_count,
    int *vpn_offset);

/*!
 * \brief Set STG into a specified VLAN.
 *
 * \param [in] unit Unit Number.
 * \param [in] vid VLAN ID.
 * \param [in] stg STG index.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_stg_vlan_set(
    int unit,
    bcm_vlan_t vid,
    bcm_stg_t stg);

/*!
 * \brief Get STG from a specified VLAN.
 *
 * \param [in] unit Unit Number.
 * \param [in] vid VLAN ID.
 * \param [out] stg STG index.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_stg_vlan_get(
    int unit,
    bcm_vlan_t vid,
    bcm_stg_t *stg);

/*!
 * \brief Initialize the state in a specified STG.
 *
 * \param [in] unit Unit Number.
 * \param [in] stg STG index.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_stg_stp_init(
    int unit,
    bcm_stg_t stg);

/*!
 * \brief Clear the state in a specified STG.
 *
 * \param [in] unit Unit Number.
 * \param [in] stg STG index.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_stg_stp_clear(
    int unit,
    bcm_stg_t stg);

/*!
 * \brief Set the spanning tree state for a port in specified STG.
 *
 * \param [in] unit Unit Number.
 * \param [in] stg STG index.
 * \param [in] port Port Number.
 * \param [in] stp_state Spanning Tree State of port.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_stg_stp_set(
    int unit,
    bcm_stg_t stg,
    bcm_port_t port,
    int stp_state);

/*!
 * \brief Retrieve the spanning tree state for a port in specified STG.
 *
 * \param [in] unit Unit Number.
 * \param [in] stg STG index.
 * \param [in] port Port Number.
 * \param [out] stp_state Spanning Tree State of port.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_stg_stp_get(
    int unit,
    bcm_stg_t stg,
    bcm_port_t port,
    int *stp_state);

/*!
 * \brief Recover SW state (STG usage bitmap and map) during warm boot.
 *
 * \param [in] unit Unit Number.
 * \param [out] stg_bmp Bitmap of STGs.
 * \param [out] uidx_first First user index of STG
 * \param [out] uidx_next Next user index of STG
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_stg_reinit(
    int unit,
    SHR_BITDCL *stg_bmp,
    int *uidx_first,
    int *uidx_next);

/*!
 * \brief De-initialize the STG moudle.
 *
 * \param [in] unit Unit Number.
 * \param [in] stg STG index.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_stg_detach(
    int unit,
    bcm_stg_t stg);

/*!
 * \brief Set the state of STG check on a given port.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [in] disable Disable or enable.
 * \param [in] flags Direction flags.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_stg_port_check_set(
    int unit,
    bcm_port_t port,
    int disable,
    uint16_t flags);

/*!
 * \brief Initialize STG moudle.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_stg_init(int unit);

/*!
 * \brief Display STG software information.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xfs_ltsw_stg_info_dump(int unit);

#endif /* BCMINT_LTSW_XFS_STG_H */