# GNU Build System -- Autotools
From (Autotools tutorial)[https://www.lrde.epita.fr/~adl/autotools.html]

## 实际应用应当注意
> `autoreconf` is your friend.

* 用 `autoreconf --install` 初始化配置
* 当修改文件时，知道用什么工具rebuild （生成 Makefile）
* 对配置文件和相应的工具有个大概的了解
  - `autoconf` create `configure` from `configure.ac`
  - `autoheader` create `config.h.in` from `configure.ac`
  - `automake` create `Makefile.in` from `Makefile.am` and `configure.ac`
  - `acolcal` scans `configure.ac` from uses of third-party macros, and gather definitions in `aclocal.m4`
  - `autom4te` Autoconf deiver for M4. All tools that process `configure.ac` do so through `autom4te`
