#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WireLocalThatPart1.marshalingSetId", marshaling_set_id, 0x0, 0x40, true, 0xdf552e2c965ff23)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireLocalThatPart1.unique_pAsyncResponseBlock", unique_p_async_response_block, 0x60, 0x20, true, 0xd2c2b69612ddfb94)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireLocalThatPart1.unique_containerErrorInformation", unique_container_error_information, 0x80, 0x20, true, 0x30316a095e43e566)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireLocalThatPart1.unique_containerPassthroughData", unique_container_passthrough_data, 0xa0, 0x20, true, 0xd8e9565aef1283f5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WireLocalThatPart1.marshalingSetAcknowledgmentOxid", marshaling_set_acknowledgment_oxid, 0x0, 0x0, false, 0x7c22e97cab078424)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireLocalThatPart1.unique", unique, 0x0, 0x0, false, 0x278e752bb99d58f9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif