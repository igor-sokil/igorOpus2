#include "header_dnp3.h"
#include "OutstationMrzsObject.h"

boolean  setMrzsDataMapKeys_for_AnalogSpec(DatabaseConfig* pDatabaseConfig)
{
  uint16_t index = 0;
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 350);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 351);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 352);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 353);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 354);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 355);

  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 357);
  /*
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 358);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 359);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 360);

  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 361);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 362);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 363);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 364);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 365);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 366);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 367);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 368);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 369);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 370);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 371);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 372);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 373);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 374);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 375);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 376);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 377);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 378);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 379);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 380);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 381);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 382);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 383);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 384);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 385);
                                
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 394);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 395);

  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 399);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 400);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 401);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 402);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 403);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 404);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 405);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 406);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 407);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 408);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 409);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 410);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 411);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 412);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 413);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 414);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 415);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 416);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 417);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 418);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 419);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 420);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 421);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 422);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 423);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 424);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 425);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 426);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 427);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 428);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 429);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 430);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 431);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 432);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 433);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 434);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 435);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 436);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 437);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 438);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 439);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 440);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 441);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 442);

  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 449);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 451);

  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 453);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 454);

  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 460);
  setDataMapKeys_for_AnalogSpec(pDatabaseConfig, index++, 462);
*/
  return 0;
}
