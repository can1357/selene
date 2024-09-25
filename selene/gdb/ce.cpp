#include <xstd/intrinsics.hpp>
#include "ce.hpp"
#include <optional>
#include <ntpp.hpp>
#include <sdk/nt/subsection_t.hpp>
#include <sdk/nt/control_area_t.hpp>
#include <sdk/mm/api.hpp>
#include "../utility/memory.hpp"

// Raw garbage as defined by cheat engine.
//
#pragma pack(push, 1)

enum command_id : uint8_t {
	CMD_GETVERSION = 0,
	CMD_CLOSECONNECTION = 1,
	CMD_TERMINATESERVER = 2,
	CMD_OPENPROCESS = 3,
	CMD_CREATETOOLHELP32SNAPSHOT = 4,
	CMD_PROCESS32FIRST = 5,
	CMD_PROCESS32NEXT = 6,
	CMD_CLOSEHANDLE = 7,
	CMD_VIRTUALQUERYEX = 8,
	CMD_READPROCESSMEMORY = 9,
	CMD_WRITEPROCESSMEMORY = 10,
	CMD_STARTDEBUG = 11,
	CMD_STOPDEBUG = 12,
	CMD_WAITFORDEBUGEVENT = 13,
	CMD_CONTINUEFROMDEBUGEVENT = 14,
	CMD_SETBREAKPOINT = 15,
	CMD_REMOVEBREAKPOINT = 16,
	CMD_SUSPENDTHREAD = 17,
	CMD_RESUMETHREAD = 18,
	CMD_GETTHREADCONTEXT = 19,
	CMD_SETTHREADCONTEXT = 20,
	CMD_GETARCHITECTURE = 21,
	CMD_MODULE32FIRST = 22,
	CMD_MODULE32NEXT = 23,
	CMD_GETSYMBOLLISTFROMFILE = 24,
	CMD_LOADEXTENSION = 25,
	CMD_ALLOC = 26,
	CMD_FREE = 27,
	CMD_CREATETHREAD = 28,
	CMD_LOADMODULE = 29,
	CMD_SPEEDHACK_SETSPEED = 30,
	CMD_VIRTUALQUERYEXFULL = 31,
	CMD_GETREGIONINFO = 32,
	CMD_GETABI = 33,
	CMD_SET_CONNECTION_NAME = 34,
	CMD_CREATETOOLHELP32SNAPSHOTEX = 35,
	CMD_CHANGEMEMORYPROTECTION = 36,
	CMD_GETOPTIONS = 37,
	CMD_GETOPTIONVALUE = 38,
	CMD_SETOPTIONVALUE = 39,
	CMD_PTRACE_MMAP = 40,
	CMD_OPENNAMEDPIPE = 41,
	CMD_PIPEREAD = 42,
	CMD_PIPEWRITE = 43,
	CMD_GETCESERVERPATH = 44,
	CMD_ISANDROID = 45,
	CMD_LOADMODULEEX = 46,
	CMD_SETCURRENTPATH = 47,
	CMD_GETCURRENTPATH = 48,
	CMD_ENUMFILES = 49,
	CMD_GETFILEPERMISSIONS = 50,
	CMD_SETFILEPERMISSIONS = 51,
	CMD_GETFILE = 52,
	CMD_PUTFILE = 53,
	CMD_CREATEDIR = 54,
	CMD_DELETEFILE = 55,
	CMD_AOBSCAN = 200,
	CMD_COMMANDLIST2 = 255,
};

#define TH32CS_SNAPPROCESS  0x2
#define TH32CS_SNAPTHREAD   0x4
#define TH32CS_SNAPMODULE   0x8
#define TH32CS_SNAPFIRSTMODULE 0x40000000

#define PAGE_NOACCESS 1
#define PAGE_READONLY 2
#define PAGE_READWRITE 4
#define PAGE_WRITECOPY 8
#define PAGE_EXECUTE 16
#define PAGE_EXECUTE_READ 32
#define PAGE_EXECUTE_READWRITE 64

#define VQE_PAGEDONLY 1
#define VQE_DIRTYONLY 2
#define VQE_NOSHARED 4

#define MEM_MAPPED 262144
#define MEM_PRIVATE 131072
using ce_handle = uint32_t;

struct CeVersion {
	int version = 0;
	unsigned char stringsize = 0;
	//append the versionstring
};

struct CeCreateToolhelp32Snapshot {
	uint32_t dwFlags = 0;
	uint32_t th32ProcessID = 0;
};

struct CeProcessEntry {
	int result = 0;
	int pid = 0;
	int processnamesize = 0;
	//processname
};

struct CeModuleEntry {
	int32_t result = 0;
	int64_t modulebase = 0;
	int32_t modulepart = 0;
	int32_t modulesize = 0;
	uint32_t modulefileoffset = 0;
	int32_t modulenamesize = 0;
};

struct CeVirtualQueryExInput {
	int handle = 0;
	uint64_t baseaddress = 0;
};

struct CeVirtualQueryExOutput {
	uint8_t result = 0;
	uint32_t protection = 0;
	uint32_t type = 0;
	uint64_t baseaddress = 0;
	uint64_t size = 0;
};

struct CeVirtualQueryExFullInput {
	int handle = 0;
	uint8_t flags = 0;
};

struct CeVirtualQueryExFullOutput {
	uint32_t protection = 0;
	uint32_t type = 0;
	uint64_t baseaddress = 0;
	uint64_t size = 0;
};

struct CeReadProcessMemoryInput {
	uint32_t handle = 0;
	uint64_t address = 0;
	uint32_t size = 0;
	uint8_t  compress = 0;
};

struct CeReadProcessMemoryOutput {
	int read = 0;
};

struct CeWriteProcessMemoryInput {
	ce_handle handle = 0;
	uint64_t address = 0;
	uint32_t size = 0;
};


struct CeWriteProcessMemoryOutput {
	uint32_t written = 0;
};


struct CeSetBreapointInput {
	ce_handle hProcess = 0;
	int tid = 0;
	int debugreg = 0;
	uint64_t Address = 0;
	int bptype = 0;
	int bpsize = 0;
};


struct CeSetBreapointOutput {
	int result = 0;
};

struct CeRemoveBreapointInput {
	ce_handle hProcess = 0;
	uint32_t tid = 0;
	uint32_t debugreg = 0;
	uint32_t wasWatchpoint = 0;
};


struct CeRemoveBreapointOutput {
	int result = 0;
};

struct CeSuspendThreadInput {
	ce_handle hProcess = 0;
	int tid = 0;
};

struct RegionInfo {
	uint64_t baseaddress = 0;
	uint64_t size = 0;
	uint32_t protection = 0;
	uint32_t type = 0;
};

struct CeSuspendThreadOutput {
	int result = 0;
};

struct CeResumeThreadInput {
	ce_handle hProcess = 0;
	int tid = 0;
};


struct CeResumeThreadOutput {
	int result = 0;
};

struct CeAllocInput {
	ce_handle hProcess = 0;
	uint64_t preferedBase = 0;
	uint32_t size = 0;
	uint32_t windowsprotection = 0;
};


struct CeAllocOutput {
	uint64_t address; //0=fail
};

struct CeFreeInput {
	ce_handle hProcess;
	uint64_t address;
	uint32_t size;
};


struct CeFreeOutput {
	uint32_t result;
};

struct CeCreateThreadInput {
	ce_handle hProcess = 0;
	uint64_t startaddress = 0;
	uint64_t parameter = 0;
};


struct CeCreateThreadOutput {
	ce_handle threadhandle = 0;
};

struct CeLoadModuleInput {
	ce_handle hProcess = 0;
	uint32_t modulepathlength = 0;
	//modulepath
};

struct CeLoadModuleInputEx {
	ce_handle hProcess = 0;
	uint64_t dlopenaddress = 0;
	uint32_t modulepathlength = 0;
	//modulepath
};


struct CeLoadModuleOutput {
	uint32_t result = 0;
};


struct CeSpeedhackSetSpeedInput {
	ce_handle hProcess = 0;
	float speed = 0;
};


struct CeSpeedhackSetSpeedOutput {
	uint32_t result = 0;
};

struct CeChangeMemoryProtection {
	ce_handle hProcess = 0;
	uint64_t address = 0;
	uint32_t size = 0;
	uint32_t windowsprotection = 0;
};

struct CeReadPipe {
	ce_handle hPipe = 0;
	uint32_t size = 0;
	uint32_t timeout = 0;
};

struct CeWritePipe {
	ce_handle hPipe = 0;
	uint32_t size = 0;
	uint32_t timeout = 0;
	//data[size]
};


struct CeAobScanInput {
	ce_handle hProcess = 0;
	uint64_t start = 0;
	uint64_t end = 0;
	int inc = 0;
	int protection = 0;
	int scansize = 0;
};
#pragma pack(pop)

// Utilities.
//
struct ce_module {
	uint64_t    base;
	uint64_t    size;
	std::string name;

	void into( xstd::vec_buffer& result ) const {
		auto& desc = result.emplace_back_as<CeModuleEntry>( {} );
		desc.result = base ? 1 : 0;
		desc.modulebase = base;
		desc.modulepart = 0;
		desc.modulesize = (int32_t) (uint32_t) size;
		desc.modulenamesize = (int32_t) (uint32_t) name.size();
		result.append_range( name );
	}
};
struct ce_process {
	uint64_t    id;
	std::string name;

	void into( xstd::vec_buffer& result ) const {
		auto& desc = result.emplace_back_as<CeProcessEntry>( {} );
		desc.result = id ? 1 : 0;
		desc.pid = (int32_t) (uint32_t) id;
		desc.processnamesize = (int32_t) (uint32_t) name.size();
		result.append_range( name );
	}
};
struct ce_handle_state {
	size_t process_index = 0;
	size_t module_index = 0;
	std::vector<ce_module>  modules;
	std::vector<ce_process> processes;
};

struct ce_region {
	uint64_t base;
	uint64_t size;
	uint32_t prot;

	uint8_t file_len = 0;
	char    file_name[ 256 ];

	void set_name( std::string_view name ) {
		size_t len = std::min( name.size(), sizeof( file_name ) );
		memcpy( file_name, name.data(), len );
		file_len = (uint8_t) len;
	}

	void into_ri( xstd::vec_buffer& result ) {
		auto& desc = result.emplace_back_as<RegionInfo>( {} );
		desc.baseaddress = base;
		desc.protection = prot;
		desc.size = size;
		desc.type = file_len ? MEM_MAPPED : MEM_PRIVATE;
	}
	void into_vq( xstd::vec_buffer& result, bool with_name ) const {
		auto& desc = result.emplace_back_as<CeVirtualQueryExOutput>( {} );
		desc.result = size ? 1 : 0;
		desc.baseaddress = base;
		desc.protection = prot;
		desc.size = size;
		desc.type = file_len ? MEM_MAPPED : MEM_PRIVATE;
		if ( with_name ) {
			result.emplace_back( file_len );
			result.append_range( std::span{ &file_name[ 0 ], (size_t) file_len } );
		}
	}
};


// Implementation.
//
using process_handle = ntpp::ref<nt::eprocess_t>;
static size_t copy_from( nt::eprocess_t* proc, any_ptr dst, any_ptr src, size_t n ) {
	if ( proc == ntpp::get_initial_system_process() ) {
		if ( src < km_va_start ) return 0;

		for ( size_t it = 0; it < n; ) {
			ia32::scope_irql<NO_INTERRUPTS> _i{};
			auto [vpte, depth] = mem::establish_pte( src + it, { .write = false } );
			if ( !vpte.present ) {
				return it;
			}
			auto   page_end = xstd::align_up( src + it + 1, mem::page_size( depth ) );
			size_t copy_size = std::min( page_end, src + n ) - ( src + it );
			memcpy( dst + it, src + it, copy_size );
			it += copy_size;
		}
		return n;
	} else {
		if ( src >= um_va_end ) return 0;

		size_t result = 0;
		mm::copy_virtual_memory( &proc->pcb, src, &ke::get_eprocess()->pcb, dst, n, 0, &result );
		return result;
	}
}
static size_t copy_to( nt::eprocess_t* proc, any_ptr dst, any_ptr src, size_t n ) {
	if ( proc == ntpp::get_initial_system_process() ) {
		if ( dst < km_va_start ) return 0;

		for ( size_t it = 0; it < n; ) {
			ia32::scope_irql<NO_INTERRUPTS> _i{};
			auto [vpte, depth] = mem::establish_pte( dst + it, { .write = true } );
			if ( !vpte.present ) {
				return it;
			}
			auto   page_end = xstd::align_up( dst + it + 1, mem::page_size( depth ) );
			size_t copy_size = std::min( page_end, dst + n ) - ( dst + it );
			memcpy( dst + it, src + it, copy_size );
			it += copy_size;
		}
		return n;
	} else {
		if ( dst >= um_va_end ) return 0;

		size_t result = 0;
		mm::copy_virtual_memory( &ke::get_eprocess()->pcb, src, &proc->pcb, dst, n, 0, &result );
		return result;
	}
}
static std::vector<ce_process> ce_list_process() {
	std::vector<ce_process> result = {};
	for ( auto&& proc : ntpp::process_list{} ) {
		std::string name;
		if ( proc == ntpp::get_initial_system_process() ) {
			name = "Kernel";
		} else if ( !ntpp::is_exiting( proc ) ) {
			name = xstd::utf_convert<char>( ntpp::get_image_name( proc ) );
			if ( name.empty() ) {
				auto end = std::find( proc->image_file_name.data(), proc->image_file_name.data() + proc->image_file_name.size(), 0 );
				name.assign( (const char*) proc->image_file_name.data(), (const char*) end );
			}
		}
		result.push_back( { (uint64_t) proc->unique_process_id, std::move( name ) } );
	}
	return result;
}
static std::vector<ce_module> ce_list_module( uint64_t pid ) {
	std::vector<ce_module> result = {};
	auto proc = ntpp::lookup_process( pid );
	if ( !proc ) return result;
	if ( proc == ntpp::get_initial_system_process() ) {
		for ( auto&& entry : ntpp::module_list{} ) {
			result.push_back( {
				uint64_t( entry->dll_base ),
				uint64_t( entry->size_of_image ),
				xstd::utf_convert<char>( entry->base_dll_name.get() )
			} );
		}
	} else {
		auto safe_read = [ & ] <typename T> ( T * ptr ) {
			std::optional<T> out;
			if ( copy_from( proc, &out.emplace(), ptr, sizeof( T ) ) < sizeof( T ) )
				out.reset();
			return out;
		};

		auto* peb = proc->peb;
		auto* ldr = safe_read( &peb->ldr ).value_or( nullptr );

		wchar_t buffer[ 128 ];
		auto ldr_head = &ldr->in_load_order_module_list;
		for ( auto it = safe_read( &ldr_head->flink ).value_or( nullptr ); it && it != ldr_head; it = safe_read( &it->flink ).value_or( nullptr ) ) {
			ldr::data_table_entry_t* entry = (ldr::data_table_entry_t*) it;
			auto name = safe_read( &entry->base_dll_name );
			auto base = safe_read( &entry->dll_base );
			auto size = safe_read( &entry->size_of_image );
			if ( !name || !base || !size ) break;

			size_t names = std::min<size_t>( name->length / 2, std::size( buffer ) );
			names = copy_from( proc.get(), &buffer, name->buffer, names * 2 ) / 2;

			result.push_back( {
				uint64_t( *base ),
				uint64_t( *size ),
				xstd::utf_convert<char>( std::wstring_view{ buffer, names } )
			 } );
		}
	}
	return result;
}
static ce_region convert_vad( nt::mmvad_t* vad ) {
	ntpp::mm_protection prot = { .flags = vad->core.vad_flags.protection };
	auto base = ntpp::vad_base_vpn( vad ) << 12;
	auto end = ( ntpp::vad_limit_vpn( vad ) + 1 ) << 12;

	if ( prot.modifier == ntpp::mm_modifier::guard )
		prot = { .flags = 0 };

	ce_region result = {
		base,
		end - base,
		prot.to_win()
	};

	if ( vad->core.vad_flags.vad_type == VadDevicePhysicalMemory )
	{
		result.set_name( "Physical" );
	}
	else if ( vad->core.vad_flags.vad_type == VadImageMap || !vad->core.vad_flags.private_memory )
	{
		if ( auto* sc = vad->subsection )
			if ( auto* ca = sc->control_area )
				if ( auto f = ntpp::reference_control_area_file( ca ) )
					result.set_name( xstd::utf_convert<char>( f->file_name.get() ) );
	}
	return result;
}
static ce_region convert_pte( ia32::pt_entry_64 pte, int8_t depth, any_ptr va )
{
	size_t size = mem::page_size( depth );
	uint64_t address = xstd::align_down( va, size ).address;

	ce_region result = {
		address,
		mem::page_size( depth ),
		PAGE_NOACCESS
	};

	if ( pte.present ) {
		if ( pte.write )
			result.prot = pte.execute_disable ? PAGE_READWRITE : PAGE_EXECUTE_READWRITE;
		else if ( mem::is_copy_on_write( &pte ) )
			result.prot = pte.execute_disable ? PAGE_WRITECOPY : PAGE_EXECUTE_WRITECOPY;
		else
			result.prot = pte.execute_disable ? PAGE_READONLY : PAGE_EXECUTE_READ;
		result.set_name( mem::va_name_px( address ) );
	}
	return result;
}
static ce_region virtual_query( nt::eprocess_t* proc, uint64_t address ) {
	address = xstd::align_down( address, 0x1000 );
	size_t vpn = address >> 12;
	if ( proc == ntpp::get_initial_system_process() ) {
		if ( address < km_va_start )
			return ce_region{ address, km_va_start - address, PAGE_NOACCESS };

		// Find the PTE and return.
		//
		ia32::disable();
		auto [pte, depth] = mem::lookup_pte( address );
		auto ppte = *pte;
		ia32::enable();
		return convert_pte( ppte, depth, address );
	} else {
		if ( address > um_va_end )
			return ce_region{ um_va_end, UINT64_MAX - um_va_end, PAGE_NOACCESS };

		// Lock the address space.
		//
		ntpp::shared_lock lock{ &proc->address_creation_lock };

		// Find the VAD and return.
		//
		auto* vad = ntpp::find_vad_lower_bound( (nt::mmvad_t*) proc->vad_root.root, address );
		if ( !vad )
			return ce_region{ address, um_va_end - address, PAGE_NOACCESS };

		if ( ntpp::vad_base_vpn( vad ) <= vpn && vpn <= ntpp::vad_limit_vpn( vad ) ) {
			return convert_vad( vad );
		} else {
			return ce_region{
				address,
				( ntpp::vad_base_vpn( vad ) - vpn ) << 12,
				PAGE_NOACCESS
			};
		}
	}
}
static std::vector<ce_region> virtual_query_full( nt::eprocess_t* proc, int flags ) {
	std::vector<ce_region> result = {};
	if ( proc == ntpp::get_initial_system_process() ) {
		// ??
	} else {
		ntpp::enum_vads( proc, [&]( nt::mmvad_t* vad ) { result.emplace_back( convert_vad( vad ) ); } );
	}
	return result;
}
static process_handle open_process( ce_handle pid ) {
	return ntpp::lookup_process( pid );
}


// Protocol implementation.
//
struct ce_socket : xstd::ref_counted<ce_socket> {
	std::unique_ptr<xstd::net::tcp> stream = {};
	std::unordered_map<ce_handle, ce_handle_state> handles = {};
	ce_handle next_handle = 0;

	std::pair<ce_handle, ce_handle_state*> alloc_handle() {
		auto h = ++next_handle;
		return { h, &handles[ h ] };
	}

	template<typename T>
	auto recv() {
		return stream->read_until( []( xstd::vec_buffer& buf ) -> std::optional<T> {
			if ( buf.size() < sizeof( T ) ) {
				return std::nullopt;
			} else {
				return buf.shift_as<T>();
			}
		} );
	}
	auto read_n( size_t n ) {
		return stream->read( n );
	}
	template<typename T>
	auto write( T&& v ) {
		return stream->write( std::forward<T>(v) );
	}

	xstd::async_task run( std::unique_ptr<xstd::net::tcp> _stream ) {
		auto _ref = add_ref();
		this->stream = std::move( _stream );

		auto rem = stream->get_remote_address();
		xstd::vec_buffer out = {};
		while ( true ) {
			out.clear();
			auto opcode = ( co_await recv<command_id>() ).value_or( CMD_TERMINATESERVER );
			//xstd::inspect( rem, opcode, "begin" );
			switch ( opcode ) {
				case CMD_CREATETOOLHELP32SNAPSHOT:
				{
					auto res = co_await recv<CeCreateToolhelp32Snapshot>();
					if ( !res ) co_return;
					auto [hnd, data] = alloc_handle();
					data->processes = ce_list_process();
					if ( res->th32ProcessID != 0 ) {
						data->modules = ce_list_module( res->th32ProcessID );
					}
					out.emplace_back_as( hnd );
					break;
				}
				case CMD_CREATETOOLHELP32SNAPSHOTEX:
				{
					auto res = co_await recv<CeCreateToolhelp32Snapshot>();
					if ( !res ) co_return;
					if ( res->dwFlags & TH32CS_SNAPMODULE ) {
						auto modules = ce_list_module( res->th32ProcessID );
						for ( auto& mod : modules ) {
							mod.into( out );
						}
						ce_module{}.into( out );
					} else if ( res->dwFlags & TH32CS_SNAPTHREAD ) {
						out.emplace_back_as<int>( 0 );
					} else {
						auto [hnd, data] = alloc_handle();
						data->processes = ce_list_process();
						if ( res->th32ProcessID != 0 ) {
							data->modules = ce_list_module( res->th32ProcessID );
						}
						out.emplace_back_as( hnd );
					}
					break;
				}
				case CMD_PROCESS32NEXT:
				case CMD_PROCESS32FIRST:
				{
					auto res = co_await recv<ce_handle>();
					if ( !res ) co_return;
					auto& data = handles[ *res ];
					if ( opcode == CMD_PROCESS32FIRST ) data.process_index = 0;
					auto& info = data.process_index >= data.processes.size() ? xstd::make_static<ce_process>() : data.processes[ data.process_index++ ];
					info.into( out );
					break;
				}
				case CMD_MODULE32NEXT:
				case CMD_MODULE32FIRST:
				{
					auto res = co_await recv<ce_handle>();
					if ( !res ) co_return;
					auto& data = handles[ *res ];
					if ( opcode == CMD_MODULE32FIRST ) data.module_index = 0;
					auto& info = data.module_index >= data.modules.size() ? xstd::make_static<ce_module>() : data.modules[ data.module_index++ ];
					info.into( out );
					break;
				}
				case CMD_CLOSEHANDLE:
				{
					auto res = co_await recv<ce_handle>();
					if ( !res ) co_return;
					handles.erase( *res );
					out.emplace_back_as<int>( 0 );
					break;
				}
				case CMD_GETABI:
				{
					out.emplace_back_as<uint8_t>( 0 ); // WINDOWS
					break;
				}
				case CMD_GETOPTIONS:
				{
					out.emplace_back_as<uint16_t>( 0 );
					break;
				}
				case CMD_GETARCHITECTURE:
				{
					co_await recv<ce_handle>();
					out.emplace_back_as<uint8_t>( 1 ); // x86_64
					break;
				}
				case CMD_OPENPROCESS:
				{
					auto res = co_await recv<ce_handle>();
					if ( !res ) co_return;
					out.emplace_back_as( *res );
					break;
				}
				case CMD_GETVERSION:
				{
					static constexpr int CESERVERVERSION = 6;
					static constexpr std::string_view versionstring = "CHEATENGINE Network 2.3";
					out.emplace_back_as( CESERVERVERSION );
					out.emplace_back_as<uint8_t>( (uint8_t) versionstring.size() );
					out.append_range( versionstring );
					break;
				}
				case CMD_GETSYMBOLLISTFROMFILE:
				{
					co_await recv<uint8_t>();
					uint32_t path = ( co_await recv<uint32_t>() ).value_or( 0 );
					co_await read_n( path );
					out.emplace_back_as<uint64_t>( 0 );
					break;
				}
				case CMD_SET_CONNECTION_NAME:
				{
					uint32_t name = ( co_await recv<uint32_t>() ).value_or( 0 );
					co_await read_n( name );
					break;
				}
				case CMD_READPROCESSMEMORY:
				{
					auto in = co_await recv<CeReadProcessMemoryInput>();
					if ( !in ) co_return;
					xstd::vec_buffer buffer;
					if ( auto proc = open_process( in->handle ) ) {
						buffer.resize( in->size );
						buffer.resize( copy_from( proc, buffer.data(), (void*) in->address, in->size ) );
					}
					out.emplace_back_as<uint32_t>( (uint32_t) buffer.size() );
					if ( in->compress ) {
						out.push( 4 );
						size_t n = out.size();
						// Fake deflate.
						do {
							size_t len = std::min<size_t>( buffer.size(), 0xffff - 4 );
							uint8_t* chunk = out.push( len + 5 );
							chunk[ 0 ] = len == buffer.size() ? 0x01 : 0x00;
							(uint16_t&) chunk[ 1 ] = (uint16_t) len;
							(uint16_t&) chunk[ 3 ] = 0xffff ^ (uint16_t) len;
							memcpy( chunk + 5, buffer.data(), len );
							buffer.shift( len );
						} while ( buffer.size() );
						(uint32_t&) out[ n - 4 ] = (uint32_t) ( out.size() - n );
					} else {
						out.append_range( std::move( buffer ) );
					}
					break;
				}
				case CMD_WRITEPROCESSMEMORY:
				{
					auto in = co_await recv<CeWriteProcessMemoryInput>();
					if ( !in ) co_return;
					auto buf = co_await read_n( in->size );
					uint32_t ok = 0;
					if ( auto proc = open_process( in->handle ) ) {
						ok = (uint32_t) copy_to( proc, in->address, &buf[ 0 ], in->size );
					}
					out.emplace_back_as( ok );
					break;
				}
				case CMD_VIRTUALQUERYEX:
				case CMD_GETREGIONINFO:
				{
					auto in = co_await recv<CeVirtualQueryExInput>();
					if ( !in ) co_return;
					if ( auto proc = open_process( in->handle ) ) {
						auto rgn = virtual_query( proc, in->baseaddress );
						rgn.into_vq( out, opcode == CMD_GETREGIONINFO );
					} else {
						ce_region{}.into_vq( out, opcode == CMD_GETREGIONINFO );
					}
					break;
				}
				case CMD_VIRTUALQUERYEXFULL:
				{
					auto in = co_await recv<CeVirtualQueryExFullInput>();
					if ( !in ) co_return;
					if ( auto proc = open_process( in->handle ) ) {
						auto result = virtual_query_full( proc, in->flags );
						out.emplace_back_as<uint32_t>( (uint32_t) result.size() ); // count
						for ( auto& rgn : result ) rgn.into_ri( out );
					} else {
						out.emplace_back_as<uint32_t>( 0 ); // count
					}
					break;
				}
				default:
				case CMD_TERMINATESERVER:
				case CMD_CLOSECONNECTION:
					co_return;
			}
			//xstd::inspect( rem, opcode, "response:", out.subspan( 0, std::min( out.size(), 8ull ) ) );
			if ( out )
				co_await write( std::move( out ) );
			//xstd::inspect( rem, opcode, "done" );
		}
	}
};

namespace cesrv
{
	static std::optional<xstd::net::tcp_server> g_server = std::nullopt;
	void init() {
	   uint16_t port_no = 52736;
	   g_server.reset();
	   g_server.emplace( "0.0.0.0", port_no );
	   g_server->listen( []( std::unique_ptr<xstd::net::tcp> sock ) {
	   xstd::make_refc<ce_socket>()->run( std::move( sock ) );
	   } );
	}
};
