#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_power_down_t), "_CLASS_POWER_CONTEXT.PowerChangeState.PowerDown", power_down, 0x0, 0x20, true, 0x1f258d2662a4c6ab)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_power_down2_t), "_CLASS_POWER_CONTEXT.PowerChangeState.PowerDown2", power_down2, 0x0, 0x20, true, 0x84ecee06d83850cf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u3_power_down3_t), "_CLASS_POWER_CONTEXT.PowerChangeState.PowerDown3", power_down3, 0x0, 0x20, true, 0xd31b6af5be7ede95)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u4_power_up_t), "_CLASS_POWER_CONTEXT.PowerChangeState.PowerUp", power_up, 0x0, 0x20, true, 0xc806999c9d71e08)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_power_change_state_t), "_CLASS_POWER_CONTEXT.PowerChangeState", power_change_state, 0x0, 0x20, true, 0xfd9cd311d9d07761)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_power_options_t), "_CLASS_POWER_CONTEXT.Options", options, 0x20, 0x20, true, 0xa299c6397766a874)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLASS_POWER_CONTEXT.InUse", in_use, 0x40, 0x8, true, 0xfbd85c3a8d1ed887)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLASS_POWER_CONTEXT.QueueLocked", queue_locked, 0x48, 0x8, true, 0xa4ffc292ba37fa2c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_CLASS_POWER_CONTEXT.FinalStatus", final_status, 0x60, 0x20, true, 0x5c1db5586ae1db0a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_POWER_CONTEXT.RetryCount", retry_count, 0x80, 0x20, true, 0x525e29b8bff9739)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_POWER_CONTEXT.RetryInterval", retry_interval, 0xa0, 0x20, true, 0xd30e428f1ccfae5c)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pio_completion_routine_t ), "_CLASS_POWER_CONTEXT.CompletionRoutine", completion_routine, 0xc0, 0x40, true, 0x334452bf8e57135a)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_CLASS_POWER_CONTEXT.DeviceObject", device_object, 0x100, 0x40, true, 0x7c1e01c814e783a4)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_CLASS_POWER_CONTEXT.Irp", irp, 0x140, 0x40, true, 0x3d680a70853e93f)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::scsi_request_block_t), "_CLASS_POWER_CONTEXT.Srb", srb, 0x180, 0xc0, true, 0xb5ed9638b842f5a5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif