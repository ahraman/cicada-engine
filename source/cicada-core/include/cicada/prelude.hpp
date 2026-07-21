#ifndef CICADA_PRELUDE_HPP_
# define CICADA_PRELUDE_HPP_

# ifndef CICADA_NO_PRAGMA_ONCE
#  if ((defined _MSC_VER) && (_MSC_VER >= 1310)) \
    || ((defined __GNUC__) && ((__GNUC__ > 3) || ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 4)))) \
    || (defined __clang__)
#   define CICADA_PRAGMA_ONCE
#  endif
# endif//CICADA_NO_PRAGMA_ONCE

# ifdef CICADA_PRAGMA_ONCE
#  pragma once
# endif//CICADA_PRAGMA_ONCE

# if (defined _WIN32)
#  define CICADA_OS_WINDOWS
# elif (defined __linux)
#  define CICADA_OS_LINUX
# else
#  define CICADA_OS_UNKNOWN
# endif

# if ((defined __x86_64__) || (defined _M_X64))
#  define CICADA_ARCH_X64
# elif ((defined __i386) || (defined _M_IX86))
#  define CICADA_ARCH_X86
# elif ((defined __arch64__) || (defined _M_ARM64))
#  define CICADA_ARCH_ARM64
# else
#  define CICADA_ARCH_UNKNOWN
# endif

# if (defined _MSC_VER)
#  define CICADA_COMPILER_MSVC
# elif (defined __GNUC__)
#  define CICADA_COMPILER_GNUC
# elif (defined __clang__)
#  define CICADA_COMPILER_CLANG
# else
#  define CICADA_COMPILER_UNKNOWN
# endif

#endif//CICADA_PRELUDE_HPP_
