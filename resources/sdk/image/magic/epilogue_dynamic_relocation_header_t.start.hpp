#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_EPILOGUE_DYNAMIC_RELOCATION_HEADER.EpilogueCount", epilogue_count, 0x0, 0x20, true, 0x10ff72de4c647704)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_EPILOGUE_DYNAMIC_RELOCATION_HEADER.EpilogueByteCount", epilogue_byte_count, 0x20, 0x8, true, 0x6aaa6ae58ec02737)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_EPILOGUE_DYNAMIC_RELOCATION_HEADER.BranchDescriptorElementSize", branch_descriptor_element_size, 0x28, 0x8, true, 0x1c74685747a6def7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_EPILOGUE_DYNAMIC_RELOCATION_HEADER.BranchDescriptorCount", branch_descriptor_count, 0x30, 0x10, true, 0x31e8d954ce769293)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif