#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.Version", version, 0x0, 0x20, true, 0x32d4744d393d4f4)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.InitMaxSize", init_max_size, 0x20, 0x20, true, 0xa1d0afb412935d1b)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.McaMaxSize", mca_max_size, 0x40, 0x20, true, 0x6e45ec82e36baf0f)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.McaPreviousEventsCount", mca_previous_events_count, 0x60, 0x20, true, 0x734ceadab93d573e)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.McaCorrectedEventsCount", mca_corrected_events_count, 0x80, 0x20, true, 0x8b81c8dd1c80dd2c)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.McaKernelDeliveryFails", mca_kernel_delivery_fails, 0xa0, 0x20, true, 0x3ae2c3b8c0439f53)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.McaDriverDpcQueueFails", mca_driver_dpc_queue_fails, 0xc0, 0x20, true, 0x85d01278350ff336)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.McaReserved", mca_reserved, 0xe0, 0x20, true, 0x12bd2bdc48158d06)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CmcMaxSize", cmc_max_size, 0x100, 0x20, true, 0x591c881d7e9393f6)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CmcPollingInterval", cmc_polling_interval, 0x120, 0x20, true, 0xc6840dde768fa7e7)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CmcInterruptsCount", cmc_interrupts_count, 0x140, 0x20, true, 0xa640b1962c98d90d)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CmcKernelDeliveryFails", cmc_kernel_delivery_fails, 0x160, 0x20, true, 0x236193bf4dc6d082)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CmcDriverDpcQueueFails", cmc_driver_dpc_queue_fails, 0x180, 0x20, true, 0x77225a0d11dd0241)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CmcGetStateFails", cmc_get_state_fails, 0x1a0, 0x20, true, 0x1389d87b89058627)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CmcClearStateFails", cmc_clear_state_fails, 0x1c0, 0x20, true, 0xd3ab3068fc5f7cda)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CmcReserved", cmc_reserved, 0x1e0, 0x20, true, 0xb71f3a0109912ead)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_HAL_ERROR_INFO.CmcLogId", cmc_log_id, 0x200, 0x40, true, 0xb8534531658312a)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CpeMaxSize", cpe_max_size, 0x240, 0x20, true, 0x69f449c23c6f7f17)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CpePollingInterval", cpe_polling_interval, 0x260, 0x20, true, 0xa482d7aa06ca2ff5)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CpeInterruptsCount", cpe_interrupts_count, 0x280, 0x20, true, 0xbb6bd4907cf9224d)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CpeKernelDeliveryFails", cpe_kernel_delivery_fails, 0x2a0, 0x20, true, 0x95f4e8c0911df8ed)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CpeDriverDpcQueueFails", cpe_driver_dpc_queue_fails, 0x2c0, 0x20, true, 0x64be3270ef468c28)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CpeGetStateFails", cpe_get_state_fails, 0x2e0, 0x20, true, 0xdebac75135590539)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CpeClearStateFails", cpe_clear_state_fails, 0x300, 0x20, true, 0x6d7b90382a7bd68e)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_ERROR_INFO.CpeInterruptSources", cpe_interrupt_sources, 0x320, 0x20, true, 0x62cf349ae3c52391)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_HAL_ERROR_INFO.CpeLogId", cpe_log_id, 0x340, 0x40, true, 0xd9e3bd3156833c6c)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_HAL_ERROR_INFO.KernelReserved", kernel_reserved, 0x380, 0x0, true, 0x1bdac52697cf0341)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#endif