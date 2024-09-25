#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY.FirstNbl", first_nbl, 0x0, 0x40, true, 0x766fc4cde7e34936)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY.LastNbl", last_nbl, 0x40, 0x40, true, 0x6bf372bc5e7f1b9d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY.IterationInProgress", iteration_in_progress, 0x80, 0x8, true, 0x9c29203afaee0004)
#else
#define _m00
#define _m01
#define _m02
#endif