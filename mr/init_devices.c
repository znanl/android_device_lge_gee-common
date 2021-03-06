#include <stdlib.h>

const char *mr_init_devices[] = {
    // framebuffer device
    "/sys/class/graphics/fb0",

    "/sys/block/mmcblk0",
    "/sys/devices/platform/msm_sdcc.1/mmc_host",
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0",
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001",
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p7",
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p25",
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p23",

    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/bus/sdio/drivers/bcmsdh_sdmmc",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",
    
    //input
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/platform/msm_ssbi.0/pm8921-core/pm8xxx-keypad/input*",
    "/sys/devices/platform/msm_ssbi.0/pm8921-core/pm8xxx-pwrkey/input*",
    
    // for adb
    "/sys/class/tty/ptmx",
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p23", //system
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p24", // /cache
    "/sys/class/misc/android_adb",
    "/sys/class/android_usb/android0/f_adb",
    "/sys/bus/usb",

    //Mount persist and firmware
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0:0001/block/mmcblk0/mmcblk0p26", //persist
    "/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0:0001/block/mmcblk0/mmcblk0p1", //firmware

    //USB Driver here
    "/sys/devices/platform/msm_hsusb_host",

    NULL
};
