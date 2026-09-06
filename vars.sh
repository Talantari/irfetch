#!/bin/sh
get_kernel=$(uname -s)
get_kernel_ver=$(uname -r)
get_shell=$(echo "$SHELL")
if command -v hostname > /dev/null 2>&1; then
    get_hostname=$(hostname)
else
    get_hostname=$(sysctl -n kern.hostname)
fi
file="./vars.h"

cat > "$file" <<EOF
#include <stdio.h>
#define get_kernel "$get_kernel"
#define get_kernel_ver "$get_kernel_ver"
#define get_shell "$get_shell"
#define get_hostname "$get_hostname"
EOF

echo "Vars echoed successfully."
exit 0
