#include "billing.hh"
#define BILLING_MAP_INIT(X) 0,

std::atomic<uint32_t> billing_map[(uint32_t)Billing::NUM_BILLING_ELEMENTS] = {};

