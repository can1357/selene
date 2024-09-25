#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALGPUDRIVERESCAPE.PartitionId", partition_id, 0x0, 0x20, true, 0xc487ad2069f0cf31)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALGPUDRIVERESCAPE.InputBufferSize", input_buffer_size, 0x20, 0x20, true, 0xb19ec10093b6b56b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALGPUDRIVERESCAPE.OutputBufferSize", output_buffer_size, 0x40, 0x20, true, 0x79e9377527e22299)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_VIRTUALGPUDRIVERESCAPE.pInputBuffer", p_input_buffer, 0x80, 0x40, true, 0x4e3b6e7e3efec2c6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_VIRTUALGPUDRIVERESCAPE.pOutputBuffer", p_output_buffer, 0xc0, 0x40, true, 0x483883876b83f236)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif