// SPDX-License-Identifier: Apache-2.0

void func(int a, int *px) {
    if (a % 2 == 0) {
        *px = 1;
    }
}

int main(int argc, char** argv) {
    int x;
    func(argc, &x);
    return x;
}
