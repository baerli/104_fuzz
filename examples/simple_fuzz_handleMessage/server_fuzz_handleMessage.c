#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>

#include "iec60870_slave.h"
#include "iec60870_master.h"
#include "iec60870_common.h"

#include "hal_thread.h"
#include "hal_time.h"


extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) 
{

    T104Slave_handleMessageFuzz(Data, Size);
    return 0;
    
}