#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KENTROPY_TIMING_STATE.EntropyCount", entropy_count, 0x0, 0x20, true, 0x17150dfe4d491b93)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 64>), "_KENTROPY_TIMING_STATE.Buffer", buffer, 0x20, 0x0, true, 0x3d25012f6b7caae1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_KENTROPY_TIMING_STATE.Dpc", dpc, 0x840, 0x0, true, 0x367456199e019eee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KENTROPY_TIMING_STATE.LastDeliveredBuffer", last_delivered_buffer, 0xa40, 0x20, true, 0x85a5627f634884fb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KENTROPY_TIMING_STATE.ReservedRawDataBuffer", reserved_raw_data_buffer, 0x0, 0x0, false, 0xc36d734f063d7bf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif