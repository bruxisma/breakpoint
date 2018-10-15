#ifndef IXM_BREAKPOINT_HPP
#define IXM_BREAKPOINT_HPP

#if __has_include(<intrin.h>)
  #include <intrin.h>
#endif /* __has_include(<intrin.h>) */

namespace ixm {
inline namespace r0 {
namespace impl { bool is_debugger_present() noexcept; } /* namespace impl */

#if defined(__APPLE__)
#define __debugbreak __builtin_debugtrap
#endif /* defined(__APPLE__) */

[[gnu::flatten]] void breakpoint () {
  if (impl::is_debugger_present()) { __debugbreak(); }
}

}} /* namespace ixm::r0 */

#endif /* IXM_BREAKPOINT_HPP */
