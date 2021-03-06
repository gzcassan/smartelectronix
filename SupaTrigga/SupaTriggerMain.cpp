#include "public.sdk/source/vst2.x/audioeffect.h"

#include "SupaTrigger.hpp"

//------------------------------------------------------------------------
/** Must be implemented externally. */
AudioEffect* createEffectInstance(audioMasterCallback audioMaster)
{
    // get vst version
    if (!audioMaster(0, audioMasterVersion, 0, 0, 0, 0))
        return 0; // old version

    return new SupaTrigger(audioMaster);
}
