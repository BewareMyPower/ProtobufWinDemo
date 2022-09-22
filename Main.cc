#include <iostream>
#include "PulsarApi.pb.h"

int main() {
    pulsar::proto::MessageIdData id;
    id.set_ledgerid(100L);
    std::cout << "ledger id: " << id.ledgerid() << std::endl;
    return 0;
}
