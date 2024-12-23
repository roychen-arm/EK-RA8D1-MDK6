/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_gpt.h"
#include "r_timer_api.h"
#include "r_iic_master.h"
#include "r_i2c_master_api.h"
#include "r_mipi_dsi.h"
            #include "r_mipi_dsi_api.h"
#include "r_glcdc.h"
            #include "r_display_api.h"
FSP_HEADER
/** Timer on GPT Instance. */
extern const timer_instance_t g_timer0;

/** Access the GPT instance using these structures when calling API functions directly (::p_api is not used). */
extern gpt_instance_ctrl_t g_timer0_ctrl;
extern const timer_cfg_t g_timer0_cfg;

#ifndef gpt_callback
void gpt_callback(timer_callback_args_t * p_args);
#endif
/* I2C Master on IIC Instance. */
extern const i2c_master_instance_t g_i2c_master;

/** Access the I2C Master instance using these structures when calling API functions directly (::p_api is not used). */
extern iic_master_instance_ctrl_t g_i2c_master_ctrl;
extern const i2c_master_cfg_t g_i2c_master_cfg;

#ifndef i2c_master_callback
void i2c_master_callback(i2c_master_callback_args_t * p_args);
#endif
/* MIPI PHY on MIPI PHY Instance. */

        extern const mipi_phy_instance_t g_mipi_phy0;

        /* Access the MIPI DSI instance using these structures when calling API functions directly (::p_api is not used). */
        extern mipi_phy_ctrl_t g_mipi_phy0_ctrl;
        extern const mipi_phy_cfg_t g_mipi_phy0_cfg;
/* MIPI DSI on MIPI DSI Instance. */

            /* Access the MIPI DSI instance using these structures when calling API functions directly (::p_api is not used). */
            extern mipi_dsi_instance_ctrl_t g_mipi_dsi0_ctrl;
            extern const mipi_dsi_cfg_t g_mipi_dsi0_cfg;
//            extern const mipi_dsi_extended_cfg_t g_mipi_dsi0_cfg_extend;

            #ifndef mipi_dsi_callback
            void mipi_dsi_callback(mipi_dsi_callback_args_t * p_args);
            #endif
#define GLCDC_CFG_LAYER_1_ENABLE (true)
            #define GLCDC_CFG_LAYER_2_ENABLE (false)

            #define GLCDC_CFG_CLUT_ENABLE (false)

            #define GLCDC_CFG_CORRECTION_GAMMA_ENABLE_R       (false)
            #define GLCDC_CFG_CORRECTION_GAMMA_ENABLE_G       (false)
            #define GLCDC_CFG_CORRECTION_GAMMA_ENABLE_B       (false)

            /* Display on GLCDC Instance. */
            extern const display_instance_t g_display;
            extern display_runtime_cfg_t g_display_runtime_cfg_fg;
            extern display_runtime_cfg_t g_display_runtime_cfg_bg;

            /** Access the GLCDC instance using these structures when calling API functions directly (::p_api is not used). */
            extern glcdc_instance_ctrl_t g_display_ctrl;
            extern const display_cfg_t g_display_cfg;

            #if ((GLCDC_CFG_CORRECTION_GAMMA_ENABLE_R | GLCDC_CFG_CORRECTION_GAMMA_ENABLE_G | GLCDC_CFG_CORRECTION_GAMMA_ENABLE_B) && GLCDC_CFG_COLOR_CORRECTION_ENABLE && !(false))
            extern display_gamma_correction_t g_display_gamma_cfg;
            #endif

            #if GLCDC_CFG_CLUT_ENABLE
            extern display_clut_cfg_t g_display_clut_cfg_glcdc;
            #endif

            #ifndef glcdc_callback
            void glcdc_callback(display_callback_args_t * p_args);
            #endif

            #define DISPLAY_IN_FORMAT_16BITS_RGB565_0
            #if defined (DISPLAY_IN_FORMAT_32BITS_RGB888_0) || defined (DISPLAY_IN_FORMAT_32BITS_ARGB8888_0)
            #define DISPLAY_BITS_PER_PIXEL_INPUT0 (32)
            #elif defined (DISPLAY_IN_FORMAT_16BITS_RGB565_0) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB1555_0) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB4444_0)
            #define DISPLAY_BITS_PER_PIXEL_INPUT0 (16)
            #elif defined (DISPLAY_IN_FORMAT_CLUT8_0)
            #define DISPLAY_BITS_PER_PIXEL_INPUT0 (8)
            #elif defined (DISPLAY_IN_FORMAT_CLUT4_0)
            #define DISPLAY_BITS_PER_PIXEL_INPUT0 (4)
            #else
            #define DISPLAY_BITS_PER_PIXEL_INPUT0 (1)
            #endif
            #define DISPLAY_HSIZE_INPUT0                 (480)
            #define DISPLAY_VSIZE_INPUT0                 (854)
            #define DISPLAY_BUFFER_STRIDE_BYTES_INPUT0   (((DISPLAY_HSIZE_INPUT0 * DISPLAY_BITS_PER_PIXEL_INPUT0 + 0x1FF) >> 9) << 6)
            #define DISPLAY_BUFFER_STRIDE_PIXELS_INPUT0  ((DISPLAY_BUFFER_STRIDE_BYTES_INPUT0 * 8) / DISPLAY_BITS_PER_PIXEL_INPUT0)
            #if GLCDC_CFG_LAYER_1_ENABLE
            extern uint8_t fb_background[2][DISPLAY_BUFFER_STRIDE_BYTES_INPUT0 * DISPLAY_VSIZE_INPUT0];
            #endif

            #define DISPLAY_IN_FORMAT_16BITS_RGB565_1
            #if defined (DISPLAY_IN_FORMAT_32BITS_RGB888_1) || defined (DISPLAY_IN_FORMAT_32BITS_ARGB8888_1)
            #define DISPLAY_BITS_PER_PIXEL_INPUT1 (32)
            #elif defined (DISPLAY_IN_FORMAT_16BITS_RGB565_1) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB1555_1) || defined (DISPLAY_IN_FORMAT_16BITS_ARGB4444_1)
            #define DISPLAY_BITS_PER_PIXEL_INPUT1 (16)
            #elif defined (DISPLAY_IN_FORMAT_CLUT8_1)
            #define DISPLAY_BITS_PER_PIXEL_INPUT1 (8)
            #elif defined (DISPLAY_IN_FORMAT_CLUT4_1)
            #define DISPLAY_BITS_PER_PIXEL_INPUT1 (4)
            #else
            #define DISPLAY_BITS_PER_PIXEL_INPUT1 (1)
            #endif
            #define DISPLAY_HSIZE_INPUT1                 (480)
            #define DISPLAY_VSIZE_INPUT1                 (854)
            #define DISPLAY_BUFFER_STRIDE_BYTES_INPUT1   (((DISPLAY_HSIZE_INPUT1 * DISPLAY_BITS_PER_PIXEL_INPUT1 + 0x1FF) >> 9) << 6)
            #define DISPLAY_BUFFER_STRIDE_PIXELS_INPUT1  ((DISPLAY_BUFFER_STRIDE_BYTES_INPUT1 * 8) / DISPLAY_BITS_PER_PIXEL_INPUT1)
            #if GLCDC_CFG_LAYER_2_ENABLE
            extern uint8_t fb_foreground[2][DISPLAY_BUFFER_STRIDE_BYTES_INPUT1 * DISPLAY_VSIZE_INPUT1];
            #endif
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
