#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_KINTERRUPT.Type", type, 0x0, 0x10, true, 0xa5f166d7f3f7adcc)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_KINTERRUPT.Size", size, 0x10, 0x10, true, 0x1b41ff0b89d8580d)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KINTERRUPT.InterruptListEntry", interrupt_list_entry, 0x40, 0x80, true, 0xaad52495681ca8fb)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::kinterrupt_t*, void*)>*), "_KINTERRUPT.ServiceRoutine", service_routine, 0xc0, 0x40, true, 0xf30a21bc47027886)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::kinterrupt_t*, void*, uint32_t)>*), "_KINTERRUPT.MessageServiceRoutine", message_service_routine, 0x100, 0x40, true, 0x3a5c8f0d9eae01a9)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KINTERRUPT.MessageIndex", message_index, 0x140, 0x20, true, 0x2024e0e34fc47275)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KINTERRUPT.ServiceContext", service_context, 0x180, 0x40, true, 0x69d413ed85d6d1fa)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KINTERRUPT.SpinLock", spin_lock, 0x1c0, 0x40, true, 0xeb71785a94b0c63b)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KINTERRUPT.TickCount", tick_count, 0x200, 0x20, true, 0x5aaf3c8aacf8cf7c)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_KINTERRUPT.ActualLock", actual_lock, 0x240, 0x40, true, 0x4b95bb4bdd50175d)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_KINTERRUPT.DispatchAddress", dispatch_address, 0x280, 0x40, true, 0xef83fa34f4d88e3f)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KINTERRUPT.Vector", vector, 0x2c0, 0x20, true, 0xb3018e3d5d2e580)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KINTERRUPT.Irql", irql, 0x2e0, 0x8, true, 0x45210013da2fc146)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KINTERRUPT.SynchronizeIrql", synchronize_irql, 0x2e8, 0x8, true, 0x8674cbfdc4cec39d)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KINTERRUPT.FloatingSave", floating_save, 0x2f0, 0x8, true, 0xb8f09b73c3e5f44c)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KINTERRUPT.Connected", connected, 0x2f8, 0x8, true, 0xc06050d88b242b)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KINTERRUPT.Number", number, 0x300, 0x20, true, 0x658344a301afad8b)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KINTERRUPT.ShareVector", share_vector, 0x320, 0x8, true, 0x2c2afaca1229064)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KINTERRUPT.EmulateActiveBoth", emulate_active_both, 0x328, 0x8, true, 0x59a3d7a85d0fd1c9)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KINTERRUPT.ActiveCount", active_count, 0x330, 0x10, true, 0x834ba004bbefa58d)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KINTERRUPT.InternalState", internal_state, 0x340, 0x20, true, 0xf58d72962e70dfc5)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_KINTERRUPT.Mode", mode, 0x360, 0x20, true, 0x46003049870f335d)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_polarity_t), "_KINTERRUPT.Polarity", polarity, 0x380, 0x20, true, 0x1859b7401bd39fdc)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KINTERRUPT.ServiceCount", service_count, 0x3a0, 0x20, true, 0x914fb4e023a3d64c)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KINTERRUPT.DispatchCount", dispatch_count, 0x3c0, 0x20, true, 0x1d348c9fc8f5a5fa)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_KINTERRUPT.PassiveEvent", passive_event, 0x400, 0x40, true, 0xbd9775d2969fc0c7)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::trapframe*), "_KINTERRUPT.TrapFrame", trap_frame, 0x440, 0x40, true, 0xc0ac8df95414a433)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KINTERRUPT.DisconnectData", disconnect_data, 0x480, 0x40, true, 0xb159f2c5adc37122)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t volatile*), "_KINTERRUPT.ServiceThread", service_thread, 0x4c0, 0x40, true, 0x93b3e3b43a6a6271)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interrupt_connection_data_t*), "_KINTERRUPT.ConnectionData", connection_data, 0x500, 0x40, true, 0x1abeb21145ce3cd7)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KINTERRUPT.IntTrackEntry", int_track_entry, 0x540, 0x40, true, 0x1744dcd9eb50b569)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::isrdpcstats_t), "_KINTERRUPT.IsrDpcStats", isr_dpc_stats, 0x580, 0x0, true, 0xdde571151e18522b)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KINTERRUPT.RedirectObject", redirect_object, 0x880, 0x40, true, 0xd3b4bffba955cbc9)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KINTERRUPT.PhysicalDeviceObject", physical_device_object, 0x8c0, 0x40, true, 0x1df41e729339596b)
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
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#endif