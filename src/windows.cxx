#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <Windows.h>
#include <breakpoint.hpp>

namespace ixm {
inline namespace r0 {
namespace impl {

bool is_debugger_present() noexcept { return IsDebuggerPresent(); }

}}} /* namespace ixm::r0::impl */
