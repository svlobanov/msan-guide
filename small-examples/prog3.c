// SPDX-License-Identifier: Apache-2.0

#include <string.h>

int main(int argc, char** argv) {
    int arr[2];
    memset(arr, 123, argc * sizeof(int));
    return arr[1];
}
