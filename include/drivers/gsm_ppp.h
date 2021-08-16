/*
 * Copyright (c) 2020 Endian Technologies AB
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef GSM_PPP_H_
#define GSM_PPP_H_

#define GSM_MODEM_DEVICE_NAME "modem_gsm"

/** @cond INTERNAL_HIDDEN */
struct device;
void gsm_ppp_start(const struct device *dev);
void gsm_ppp_stop(const struct device *dev);
int gsm_is_stopped();
struct modem_iface *gsm_get_current_at_uart();
/** @endcond */

#endif /* GSM_PPP_H_ */
