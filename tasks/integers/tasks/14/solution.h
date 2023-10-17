#pragma once

#include <stdint.h>
#include <stdio.h>

const int64_t TEN = 10;
const int64_t INPUT_NUM = -123456789876543211;

int64_t Abs(int64_t x) {
    return (x >= 0) ? x : -x;
}

bool HasTwoDigits(int64_t x) {
    return x < TEN;
}

int Task() {
    int64_t num = INPUT_NUM;
    num = Abs(num);
    bool IsSatisfyingCondition = false;
    // scanf("%lld", &num);
    if (HasTwoDigits(num)) {
        printf("No\n");
    } else {
        while (num >= TEN) {
            if (num % TEN == (num / TEN) % TEN) {
                IsSatisfyingCondition = true;
                break;
            }
            num /= TEN;
        }
        if (IsSatisfyingCondition) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}