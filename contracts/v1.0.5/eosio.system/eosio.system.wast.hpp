const char* const eosio_system_wast = R"=====(
(module
 (type $FUNCSIG$vijj (func (param i32 i64 i64)))
 (type $FUNCSIG$vi (func (param i32)))
 (type $FUNCSIG$vij (func (param i32 i64)))
 (type $FUNCSIG$vii (func (param i32 i32)))
 (type $FUNCSIG$viji (func (param i32 i64 i32)))
 (type $FUNCSIG$vijji (func (param i32 i64 i64 i32)))
 (type $FUNCSIG$vijjiii (func (param i32 i64 i64 i32 i32 i32)))
 (type $FUNCSIG$vijjii (func (param i32 i64 i64 i32 i32)))
 (type $FUNCSIG$vijiii (func (param i32 i64 i32 i32 i32)))
 (type $FUNCSIG$viij (func (param i32 i32 i64)))
 (type $FUNCSIG$v (func))
 (type $FUNCSIG$j (func (result i64)))
 (type $FUNCSIG$vjj (func (param i64 i64)))
 (type $FUNCSIG$vj (func (param i64)))
 (type $FUNCSIG$ijjjj (func (param i64 i64 i64 i64) (result i32)))
 (type $FUNCSIG$vijii (func (param i32 i64 i32 i32)))
 (type $FUNCSIG$ijjjij (func (param i64 i64 i64 i32 i64) (result i32)))
 (type $FUNCSIG$iiii (func (param i32 i32 i32) (result i32)))
 (type $FUNCSIG$ijjjii (func (param i64 i64 i64 i32 i32) (result i32)))
 (type $FUNCSIG$jii (func (param i32 i32) (result i64)))
 (type $FUNCSIG$iii (func (param i32 i32) (result i32)))
 (type $FUNCSIG$ijjjjii (func (param i64 i64 i64 i64 i32 i32) (result i32)))
 (type $FUNCSIG$vjjjj (func (param i64 i64 i64 i64)))
 (type $FUNCSIG$ii (func (param i32) (result i32)))
 (type $FUNCSIG$ijjjji (func (param i64 i64 i64 i64 i32) (result i32)))
 (type $FUNCSIG$vji (func (param i64 i32)))
 (type $FUNCSIG$ij (func (param i64) (result i32)))
 (type $FUNCSIG$i (func (result i32)))
 (import "env" "abort" (func $abort))
 (import "env" "action_data_size" (func $action_data_size (result i32)))
 (import "env" "cancel_deferred" (func $cancel_deferred (param i32) (result i32)))
 (import "env" "current_receiver" (func $current_receiver (result i64)))
 (import "env" "current_time" (func $current_time (result i64)))
 (import "env" "db_find_i64" (func $db_find_i64 (param i64 i64 i64 i64) (result i32)))
 (import "env" "db_get_i64" (func $db_get_i64 (param i32 i32 i32) (result i32)))
 (import "env" "db_idx64_find_primary" (func $db_idx64_find_primary (param i64 i64 i64 i32 i64) (result i32)))
 (import "env" "db_idx64_lowerbound" (func $db_idx64_lowerbound (param i64 i64 i64 i32 i32) (result i32)))
 (import "env" "db_idx64_remove" (func $db_idx64_remove (param i32)))
 (import "env" "db_idx64_store" (func $db_idx64_store (param i64 i64 i64 i64 i32) (result i32)))
 (import "env" "db_idx64_update" (func $db_idx64_update (param i32 i64 i32)))
 (import "env" "db_idx_double_find_primary" (func $db_idx_double_find_primary (param i64 i64 i64 i32 i64) (result i32)))
 (import "env" "db_idx_double_lowerbound" (func $db_idx_double_lowerbound (param i64 i64 i64 i32 i32) (result i32)))
 (import "env" "db_idx_double_next" (func $db_idx_double_next (param i32 i32) (result i32)))
 (import "env" "db_idx_double_store" (func $db_idx_double_store (param i64 i64 i64 i64 i32) (result i32)))
 (import "env" "db_idx_double_update" (func $db_idx_double_update (param i32 i64 i32)))
 (import "env" "db_next_i64" (func $db_next_i64 (param i32 i32) (result i32)))
 (import "env" "db_remove_i64" (func $db_remove_i64 (param i32)))
 (import "env" "db_store_i64" (func $db_store_i64 (param i64 i64 i64 i64 i32 i32) (result i32)))
 (import "env" "db_update_i64" (func $db_update_i64 (param i32 i64 i32 i32)))
 (import "env" "eosio_assert" (func $eosio_assert (param i32 i32)))
 (import "env" "get_blockchain_parameters_packed" (func $get_blockchain_parameters_packed (param i32 i32) (result i32)))
 (import "env" "is_account" (func $is_account (param i64) (result i32)))
 (import "env" "memcpy" (func $memcpy (param i32 i32 i32) (result i32)))
 (import "env" "memmove" (func $memmove (param i32 i32 i32) (result i32)))
 (import "env" "memset" (func $memset (param i32 i32 i32) (result i32)))
 (import "env" "printi" (func $printi (param i64)))
 (import "env" "printn" (func $printn (param i64)))
 (import "env" "prints" (func $prints (param i32)))
 (import "env" "prints_l" (func $prints_l (param i32 i32)))
 (import "env" "printui" (func $printui (param i64)))
 (import "env" "read_action_data" (func $read_action_data (param i32 i32) (result i32)))
 (import "env" "require_auth" (func $require_auth (param i64)))
 (import "env" "require_auth2" (func $require_auth2 (param i64 i64)))
 (import "env" "require_recipient" (func $require_recipient (param i64)))
 (import "env" "send_deferred" (func $send_deferred (param i32 i64 i32 i32 i32)))
 (import "env" "send_inline" (func $send_inline (param i32 i32)))
 (import "env" "set_blockchain_parameters_packed" (func $set_blockchain_parameters_packed (param i32 i32)))
 (import "env" "set_privileged" (func $set_privileged (param i64 i32)))
 (import "env" "set_proposed_producers" (func $set_proposed_producers (param i32 i32) (result i64)))
 (import "env" "set_resource_limits" (func $set_resource_limits (param i64 i64 i64 i64)))
 (table 25 25 anyfunc)
 (elem (i32.const 0) $__wasm_nullptr $_ZN11eosiosystem15system_contract7onblockEN5eosio15block_timestampEy $_ZN11eosiosystem15system_contract9unregprodEy $_ZN11eosiosystem15system_contract7sellramEyx $_ZN11eosiosystem6native11canceldelayEv $_ZN11eosiosystem15system_contract11regproducerEyRKN5eosio10public_keyERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEt $_ZN11eosiosystem15system_contract7bidnameEyyN5eosio5assetE $_ZN11eosiosystem15system_contract6setramEy $_ZN11eosiosystem6native10deleteauthEv $_ZN11eosiosystem6native8linkauthEv $_ZN11eosiosystem6native10newaccountEyy $_ZN11eosiosystem15system_contract12undelegatebwEyyN5eosio5assetES2_ $_ZN11eosiosystem6native10unlinkauthEv $_ZN11eosiosystem15system_contract8regproxyEyb $_ZN11eosiosystem15system_contract11rmvproducerEy $_ZN11eosiosystem15system_contract6buyramEyyN5eosio5assetE $_ZN11eosiosystem15system_contract11buyrambytesEyym $_ZN11eosiosystem6native7onerrorEv $_ZN11eosiosystem15system_contract6refundEy $_ZN11eosiosystem6native10updateauthEv $_ZN11eosiosystem15system_contract12voteproducerEyyRKNSt3__16vectorIyNS1_9allocatorIyEEEE $_ZN11eosiosystem15system_contract9setparamsERKN5eosio21blockchain_parametersE $_ZN11eosiosystem15system_contract7setprivEyh $_ZN11eosiosystem15system_contract12claimrewardsERKy $_ZN11eosiosystem15system_contract10delegatebwEyyN5eosio5assetES2_b)
 (memory $0 1)
 (data (i32.const 4) "PZ\00\00")
 (data (i32.const 16) "eosio\00")
 (data (i32.const 32) "object passed to iterator_to is not in multi_index\00")
 (data (i32.const 96) "cannot pass end iterator to modify\00")
 (data (i32.const 144) "object passed to modify is not in multi_index\00")
 (data (i32.const 192) "cannot modify objects in table of another contract\00")
 (data (i32.const 256) "updater cannot change primary key when modifying an object\00")
 (data (i32.const 320) "write\00")
 (data (i32.const 336) "error reading iterator\00")
 (data (i32.const 368) "read\00")
 (data (i32.const 384) "cannot increment end iterator\00")
 (data (i32.const 416) "get\00")
 (data (i32.const 432) "unable to find key\00")
 (data (i32.const 464) "producer does not have an active key\00")
 (data (i32.const 512) "cannot claim rewards until the chain is activated (at least 15% of all tokens participate in voting)\00")
 (data (i32.const 624) "already claimed rewards within past day\00")
 (data (i32.const 672) "eosio.token\00")
 (data (i32.const 688) "active\00")
 (data (i32.const 704) "invalid symbol name\00")
 (data (i32.const 736) "issue tokens for producer pay and savings\00")
 (data (i32.const 784) "eosio.saving\00")
 (data (i32.const 800) "unallocated inflation\00")
 (data (i32.const 832) "eosio.bpay\00")
 (data (i32.const 848) "fund per-block bucket\00")
 (data (i32.const 880) "eosio.vpay\00")
 (data (i32.const 896) "fund per-vote bucket\00")
 (data (i32.const 928) "producer block pay\00")
 (data (i32.const 960) "producer vote pay\00")
 (data (i32.const 992) "magnitude of asset amount must be less than 2^62\00")
 (data (i32.const 1056) "must purchase a positive amount\00")
 (data (i32.const 1088) "eosio.ram\00")
 (data (i32.const 1104) "buy ram\00")
 (data (i32.const 1120) "eosio.ramfee\00")
 (data (i32.const 1136) "ram fee\00")
 (data (i32.const 1152) "must reserve a positive amount\00")
 (data (i32.const 1184) "cannot create objects in table of another contract\00")
 (data (i32.const 1248) "ram market does not exist\00")
 (data (i32.const 1280) "invalid sell\00")
 (data (i32.const 1296) "invalid conversion\00")
 (data (i32.const 1328) "unexpected asset symbol input\00")
 (data (i32.const 1360) "cannot sell negative byte\00")
 (data (i32.const 1392) "no resource row\00")
 (data (i32.const 1408) "insufficient quota\00")
 (data (i32.const 1440) "error, attempt to unstake more tokens than previously staked\00")
 (data (i32.const 1504) "sell ram\00")
 (data (i32.const 1520) "sell ram fee\00")
 (data (i32.const 1536) "b1 can only claim their tokens over 10 years\00")
 (data (i32.const 1584) "comparison of assets with different symbols is not allowed\00")
 (data (i32.const 1648) "should stake non-zero amount\00")
 (data (i32.const 1680) "attempt to add asset with different symbol\00")
 (data (i32.const 1728) "addition underflow\00")
 (data (i32.const 1760) "addition overflow\00")
 (data (i32.const 1792) "insufficient staked net bandwidth\00")
 (data (i32.const 1840) "insufficient staked cpu bandwidth\00")
 (data (i32.const 1888) "cannot pass end iterator to erase\00")
 (data (i32.const 1936) "insufficient staked total net bandwidth\00")
 (data (i32.const 1984) "insufficient staked total cpu bandwidth\00")
 (data (i32.const 2032) "eosio.stake\00")
 (data (i32.const 2048) "negative net refund amount\00")
 (data (i32.const 2080) "negative cpu refund amount\00")
 (data (i32.const 2112) "refund\00")
 (data (i32.const 2128) "stake bandwidth\00")
 (data (i32.const 2144) "stake for voting cannot be negative\00")
 (data (i32.const 2192) "b1\00")
 (data (i32.const 2208) "cannot vote for producers and proxy at same time\00")
 (data (i32.const 2272) "cannot proxy to self\00")
 (data (i32.const 2304) "attempt to vote for too many producers\00")
 (data (i32.const 2352) "producer votes must be unique and sorted\00")
 (data (i32.const 2400) "user must stake before they can vote\00")
 (data (i32.const 2448) "account registered as a proxy is not allowed to use a proxy\00")
 (data (i32.const 2512) "old proxy not found\00")
 (data (i32.const 2544) "invalid proxy specified\00")
 (data (i32.const 2576) "proxy not found\00")
 (data (i32.const 2592) "producer is not currently registered\00")
 (data (i32.const 2640) "producer is not registered\00")
 (data (i32.const 2672) "producer not found\00")
 (data (i32.const 2704) "object passed to erase is not in multi_index\00")
 (data (i32.const 2752) "cannot erase objects in table of another contract\00")
 (data (i32.const 2816) "attempt to remove object that was not in multi_index\00")
 (data (i32.const 2880) "attempt to subtract asset with different symbol\00")
 (data (i32.const 2928) "subtraction underflow\00")
 (data (i32.const 2960) "subtraction overflow\00")
 (data (i32.const 2992) "must stake a positive amount\00")
 (data (i32.const 3024) "must unstake a positive amount\00")
 (data (i32.const 3056) "cannot undelegate bandwidth until the chain is activated (at least 15% of all tokens participate in voting)\00")
 (data (i32.const 3168) "refund request not found\00")
 (data (i32.const 3200) "refund is not available yet\00")
 (data (i32.const 3232) "unstake\00")
 (data (i32.const 3248) "url too long\00")
 (data (i32.const 3264) "public key should not be the default value\00")
 (data (i32.const 3312) "action has no effect\00")
 (data (i32.const 3344) "account that uses a proxy is not allowed to become a proxy\00")
 (data (i32.const 3408) "singleton does not exist\00")
 (data (i32.const 3440) "ram may only be increased\00")
 (data (i32.const 3472) "ram size is unrealistic\00")
 (data (i32.const 3504) "attempt to set max below reserved\00")
 (data (i32.const 3552) "max_authority_depth should be at least 3\00")
 (data (i32.const 3600) "you can only bid on top-level suffix\00")
 (data (i32.const 3648) "account already exists\00")
 (data (i32.const 3680) "asset must be system token\00")
 (data (i32.const 3712) "insufficient bid\00")
 (data (i32.const 3744) "eosio.names\00")
 (data (i32.const 3760) "bid name \00")
 (data (i32.const 3776) " bid \00")
 (data (i32.const 3792) " on \00")
 (data (i32.const 3808) "\n\00")
 (data (i32.const 3824) "this auction has already closed\00")
 (data (i32.const 3856) "must increase bid by 10%\00")
 (data (i32.const 3888) "account is already highest bidder\00")
 (data (i32.const 3936) "refund bid on name \00")
 (data (i32.const 3968) ".\00")
 (data (i32.const 3984) " \00")
 (data (i32.const 4000) ",\00")
 (data (i32.const 4004) "\b0\0f\00\00")
 (data (i32.const 4016) ".12345abcdefghijklmnopqrstuvwxyz\00")
 (data (i32.const 4064) "no active bid for name\00")
 (data (i32.const 4096) "only highest bidder can claim\00")
 (data (i32.const 4128) "auction for name is not closed yet\00")
 (data (i32.const 4176) "only suffix may create this account\00")
 (data (i32.const 4224) "onerror\00")
 (data (i32.const 4240) "onerror action\'s are only valid from the \"eosio\" system account\00")
 (data (i32.const 4320) "\00\00\00\00\00\00\f0?\00\00\00\00\00\00\f8?")
 (data (i32.const 4336) "\00\00\00\00\00\00\00\00\06\d0\cfC\eb\fdL>")
 (data (i32.const 4352) "\00\00\00\00\00\00\00\00\00\00\00@\03\b8\e2?")
 (data (i32.const 4368) "buffer is too small\00")
 (data (i32.const 12784) "malloc_from_freed was designed to only be called after _heap was completely allocated\00")
 (export "memory" (memory $0))
 (export "now" (func $now))
 (export "_ZeqRK11checksum256S1_" (func $_ZeqRK11checksum256S1_))
 (export "_ZeqRK11checksum160S1_" (func $_ZeqRK11checksum160S1_))
 (export "_ZneRK11checksum160S1_" (func $_ZneRK11checksum160S1_))
 (export "_ZN5eosio12require_authERKNS_16permission_levelE" (func $_ZN5eosio12require_authERKNS_16permission_levelE))
 (export "_ZN11eosiosystem15system_contract7onblockEN5eosio15block_timestampEy" (func $_ZN11eosiosystem15system_contract7onblockEN5eosio15block_timestampEy))
 (export "_ZN11eosiosystem15system_contract24update_elected_producersEN5eosio15block_timestampE" (func $_ZN11eosiosystem15system_contract24update_elected_producersEN5eosio15block_timestampE))
 (export "_ZN11eosiosystem15system_contract12claimrewardsERKy" (func $_ZN11eosiosystem15system_contract12claimrewardsERKy))
 (export "_ZN11eosiosystem15system_contract11buyrambytesEyym" (func $_ZN11eosiosystem15system_contract11buyrambytesEyym))
 (export "_ZN11eosiosystem14exchange_state7convertEN5eosio5assetENS1_11symbol_typeE" (func $_ZN11eosiosystem14exchange_state7convertEN5eosio5assetENS1_11symbol_typeE))
 (export "_ZN11eosiosystem15system_contract6buyramEyyN5eosio5assetE" (func $_ZN11eosiosystem15system_contract6buyramEyyN5eosio5assetE))
 (export "_ZN11eosiosystem14exchange_state21convert_from_exchangeERNS0_9connectorEN5eosio5assetE" (func $_ZN11eosiosystem14exchange_state21convert_from_exchangeERNS0_9connectorEN5eosio5assetE))
 (export "_ZN11eosiosystem15system_contract7sellramEyx" (func $_ZN11eosiosystem15system_contract7sellramEyx))
 (export "_ZN11eosiosystem19validate_b1_vestingEx" (func $_ZN11eosiosystem19validate_b1_vestingEx))
 (export "_ZN11eosiosystem15system_contract8changebwEyyN5eosio5assetES2_b" (func $_ZN11eosiosystem15system_contract8changebwEyyN5eosio5assetES2_b))
 (export "_ZN11eosiosystem15system_contract12update_votesEyyRKNSt3__16vectorIyNS1_9allocatorIyEEEEb" (func $_ZN11eosiosystem15system_contract12update_votesEyyRKNSt3__16vectorIyNS1_9allocatorIyEEEEb))
 (export "_ZN11eosiosystem15system_contract23propagate_weight_changeERKNS_10voter_infoE" (func $_ZN11eosiosystem15system_contract23propagate_weight_changeERKNS_10voter_infoE))
 (export "_ZN11eosiosystem15system_contract10delegatebwEyyN5eosio5assetES2_b" (func $_ZN11eosiosystem15system_contract10delegatebwEyyN5eosio5assetES2_b))
 (export "_ZN11eosiosystem15system_contract12undelegatebwEyyN5eosio5assetES2_" (func $_ZN11eosiosystem15system_contract12undelegatebwEyyN5eosio5assetES2_))
 (export "_ZN11eosiosystem15system_contract6refundEy" (func $_ZN11eosiosystem15system_contract6refundEy))
 (export "_ZN11eosiosystem15system_contract11regproducerEyRKN5eosio10public_keyERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEt" (func $_ZN11eosiosystem15system_contract11regproducerEyRKN5eosio10public_keyERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEt))
 (export "_ZN11eosiosystem15system_contract9unregprodEy" (func $_ZN11eosiosystem15system_contract9unregprodEy))
 (export "_ZN11eosiosystem10stake2voteEx" (func $_ZN11eosiosystem10stake2voteEx))
 (export "_ZN11eosiosystem15system_contract12voteproducerEyyRKNSt3__16vectorIyNS1_9allocatorIyEEEE" (func $_ZN11eosiosystem15system_contract12voteproducerEyyRKNSt3__16vectorIyNS1_9allocatorIyEEEE))
 (export "_ZN11eosiosystem15system_contract8regproxyEyb" (func $_ZN11eosiosystem15system_contract8regproxyEyb))
 (export "_ZN11eosiosystem14exchange_state19convert_to_exchangeERNS0_9connectorEN5eosio5assetE" (func $_ZN11eosiosystem14exchange_state19convert_to_exchangeERNS0_9connectorEN5eosio5assetE))
 (export "_ZN11eosiosystem15system_contractC2Ey" (func $_ZN11eosiosystem15system_contractC2Ey))
 (export "_ZN11eosiosystem15system_contract22get_default_parametersEv" (func $_ZN11eosiosystem15system_contract22get_default_parametersEv))
 (export "_ZN11eosiosystem15system_contractD2Ev" (func $_ZN11eosiosystem15system_contractD2Ev))
 (export "_ZN11eosiosystem15system_contract6setramEy" (func $_ZN11eosiosystem15system_contract6setramEy))
 (export "_ZN11eosiosystem15system_contract9setparamsERKN5eosio21blockchain_parametersE" (func $_ZN11eosiosystem15system_contract9setparamsERKN5eosio21blockchain_parametersE))
 (export "_ZN11eosiosystem15system_contract7setprivEyh" (func $_ZN11eosiosystem15system_contract7setprivEyh))
 (export "_ZN11eosiosystem15system_contract11rmvproducerEy" (func $_ZN11eosiosystem15system_contract11rmvproducerEy))
 (export "_ZN11eosiosystem15system_contract7bidnameEyyN5eosio5assetE" (func $_ZN11eosiosystem15system_contract7bidnameEyyN5eosio5assetE))
 (export "_ZN11eosiosystem6native10newaccountEyy" (func $_ZN11eosiosystem6native10newaccountEyy))
 (export "apply" (func $apply))
 (export "pow" (func $pow))
 (export "sqrt" (func $sqrt))
 (export "fabs" (func $fabs))
 (export "scalbn" (func $scalbn))
 (export "strlen" (func $strlen))
 (export "memcmp" (func $memcmp))
 (export "_ZN5eosio25set_blockchain_parametersERKNS_21blockchain_parametersE" (func $_ZN5eosio25set_blockchain_parametersERKNS_21blockchain_parametersE))
 (export "_ZN5eosio25get_blockchain_parametersERNS_21blockchain_parametersE" (func $_ZN5eosio25get_blockchain_parametersERNS_21blockchain_parametersE))
 (export "malloc" (func $malloc))
 (export "free" (func $free))
 (func $now (result i32)
  (i32.wrap/i64
   (i64.div_u
    (call $current_time)
    (i64.const 1000000)
   )
  )
 )
 (func $_ZeqRK11checksum256S1_ (param $0 i32) (param $1 i32) (result i32)
  (i32.eqz
   (call $memcmp
    (get_local $0)
    (get_local $1)
    (i32.const 32)
   )
  )
 )
 (func $_ZeqRK11checksum160S1_ (param $0 i32) (param $1 i32) (result i32)
  (i32.eqz
   (call $memcmp
    (get_local $0)
    (get_local $1)
    (i32.const 32)
   )
  )
 )
 (func $_ZneRK11checksum160S1_ (param $0 i32) (param $1 i32) (result i32)
  (i32.ne
   (call $memcmp
    (get_local $0)
    (get_local $1)
    (i32.const 32)
   )
   (i32.const 0)
  )
 )
 (func $_ZN5eosio12require_authERKNS_16permission_levelE (param $0 i32)
  (call $require_auth2
   (i64.load
    (get_local $0)
   )
   (i64.load offset=8
    (get_local $0)
   )
  )
 )
 (func $_ZN11eosiosystem15system_contract7onblockEN5eosio15block_timestampEy (type $FUNCSIG$viij) (param $0 i32) (param $1 i32) (param $2 i64)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i64)
  (local $8 i64)
  (local $9 i64)
  (local $10 i64)
  (local $11 i32)
  (local $12 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $12
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 144)
    )
   )
  )
  (set_local $8
   (i64.const 0)
  )
  (set_local $7
   (i64.const 59)
  )
  (set_local $6
   (i32.const 16)
  )
  (set_local $9
   (i64.const 0)
  )
  (loop $label$0
   (block $label$1
    (block $label$2
     (block $label$3
      (block $label$4
       (block $label$5
        (br_if $label$5
         (i64.gt_u
          (get_local $8)
          (i64.const 4)
         )
        )
        (br_if $label$4
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $3
             (i32.load8_s
              (get_local $6)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $3
         (i32.add
          (get_local $3)
          (i32.const 165)
         )
        )
        (br $label$3)
       )
       (set_local $10
        (i64.const 0)
       )
       (br_if $label$2
        (i64.le_u
         (get_local $8)
         (i64.const 11)
        )
       )
       (br $label$1)
      )
      (set_local $3
       (select
        (i32.add
         (get_local $3)
         (i32.const 208)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $3)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $10
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $3)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $10
     (i64.shl
      (i64.and
       (get_local $10)
       (i64.const 31)
      )
      (i64.and
       (get_local $7)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $6
    (i32.add
     (get_local $6)
     (i32.const 1)
    )
   )
   (set_local $8
    (i64.add
     (get_local $8)
     (i64.const 1)
    )
   )
   (set_local $9
    (i64.or
     (get_local $10)
     (get_local $9)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $7
      (i64.add
       (get_local $7)
       (i64.const -5)
      )
     )
     (i64.const -6)
    )
   )
  )
  (call $require_auth
   (get_local $9)
  )
  (block $label$6
   (br_if $label$6
    (i64.lt_s
     (i64.load
      (i32.add
       (get_local $0)
       (i32.const 264)
      )
     )
     (i64.const 1500000000000)
    )
   )
   (block $label$7
    (br_if $label$7
     (i64.ne
      (i64.load
       (tee_local $6
        (i32.add
         (get_local $0)
         (i32.const 232)
        )
       )
      )
      (i64.const 0)
     )
    )
    (i64.store
     (get_local $6)
     (call $current_time)
    )
   )
   (block $label$8
    (br_if $label$8
     (i32.eq
      (tee_local $11
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 76)
        )
       )
      )
      (tee_local $4
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 72)
        )
       )
      )
     )
    )
    (set_local $6
     (i32.add
      (get_local $11)
      (i32.const -24)
     )
    )
    (set_local $5
     (i32.sub
      (i32.const 0)
      (get_local $4)
     )
    )
    (loop $label$9
     (br_if $label$8
      (i64.eq
       (i64.load
        (i32.load
         (get_local $6)
        )
       )
       (get_local $2)
      )
     )
     (set_local $11
      (get_local $6)
     )
     (set_local $6
      (tee_local $3
       (i32.add
        (get_local $6)
        (i32.const -24)
       )
      )
     )
     (br_if $label$9
      (i32.ne
       (i32.add
        (get_local $3)
        (get_local $5)
       )
       (i32.const -24)
      )
     )
    )
   )
   (set_local $6
    (i32.add
     (get_local $0)
     (i32.const 48)
    )
   )
   (block $label$10
    (block $label$11
     (block $label$12
      (br_if $label$12
       (i32.eq
        (get_local $11)
        (get_local $4)
       )
      )
      (call $eosio_assert
       (i32.eq
        (i32.load
         (i32.add
          (tee_local $3
           (i32.load
            (i32.add
             (get_local $11)
             (i32.const -24)
            )
           )
          )
          (i32.const 92)
         )
        )
        (get_local $6)
       )
       (i32.const 32)
      )
      (br_if $label$11
       (get_local $3)
      )
      (br $label$10)
     )
     (br_if $label$10
      (i32.lt_s
       (tee_local $3
        (call $db_find_i64
         (i64.load
          (i32.add
           (get_local $0)
           (i32.const 48)
          )
         )
         (i64.load
          (i32.add
           (get_local $0)
           (i32.const 56)
          )
         )
         (i64.const -5915305344019464192)
         (get_local $2)
        )
       )
       (i32.const 0)
      )
     )
     (call $eosio_assert
      (i32.eq
       (i32.load offset=92
        (tee_local $3
         (call $_ZNK5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE31load_object_by_primary_iteratorEl
          (get_local $6)
          (get_local $3)
         )
        )
       )
       (get_local $6)
      )
      (i32.const 32)
     )
    )
    (i32.store
     (tee_local $11
      (i32.add
       (get_local $0)
       (i32.const 256)
      )
     )
     (i32.add
      (i32.load
       (get_local $11)
      )
      (i32.const 1)
     )
    )
    (call $eosio_assert
     (i32.const 1)
     (i32.const 96)
    )
    (call $_ZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE6modifyIZNS1_15system_contract7onblockENS_15block_timestampEyE3$_0EEvRKS2_yOT_
     (get_local $6)
     (get_local $3)
    )
   )
   (br_if $label$6
    (i32.lt_u
     (i32.sub
      (get_local $1)
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 224)
       )
      )
     )
     (i32.const 121)
    )
   )
   (call $_ZN11eosiosystem15system_contract24update_elected_producersEN5eosio15block_timestampE
    (get_local $0)
    (get_local $1)
   )
   (br_if $label$6
    (i32.lt_u
     (i32.sub
      (get_local $1)
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 296)
       )
      )
     )
     (i32.const 172801)
    )
   )
   (i32.store
    (i32.add
     (get_local $12)
     (i32.const 56)
    )
    (i32.const 0)
   )
   (i64.store offset=40
    (get_local $12)
    (i64.const -1)
   )
   (i64.store offset=48
    (get_local $12)
    (i64.const 0)
   )
   (i64.store offset=24
    (get_local $12)
    (tee_local $8
     (i64.load
      (get_local $0)
     )
    )
   )
   (i64.store offset=32
    (get_local $12)
    (get_local $8)
   )
   (i32.store8 offset=60
    (get_local $12)
    (i32.const 0)
   )
   (i32.store offset=16
    (get_local $12)
    (i32.add
     (get_local $12)
     (i32.const 24)
    )
   )
   (i64.store offset=64
    (get_local $12)
    (i64.const 0)
   )
   (call $_ZNK5eosio11multi_indexILy11071153799887323136EN11eosiosystem8name_bidEJNS_10indexed_byILy7753179550577590272EN5boost11multi_index13const_mem_funIS2_yXadL_ZNKS2_11by_high_bidEvEEEEEEEE5indexILy7753179550577590272ES7_Ly0ELb0EE11lower_boundERKy
    (i32.add
     (get_local $12)
     (i32.const 8)
    )
    (i32.add
     (get_local $12)
     (i32.const 16)
    )
    (i32.add
     (get_local $12)
     (i32.const 64)
    )
   )
   (block $label$13
    (br_if $label$13
     (i32.eqz
      (tee_local $6
       (i32.load offset=12
        (get_local $12)
       )
      )
     )
    )
    (br_if $label$13
     (i64.lt_s
      (i64.load offset=16
       (get_local $6)
      )
      (i64.const 1)
     )
    )
    (br_if $label$13
     (i64.ge_u
      (i64.load offset=24
       (get_local $6)
      )
      (i64.add
       (call $current_time)
       (i64.const -86400000000)
      )
     )
    )
    (br_if $label$13
     (i64.eqz
      (i64.load
       (tee_local $6
        (i32.add
         (get_local $0)
         (i32.const 272)
        )
       )
      )
     )
    )
    (br_if $label$13
     (i64.lt_u
      (i64.sub
       (call $current_time)
       (i64.load
        (get_local $6)
       )
      )
      (i64.const 1209600000001)
     )
    )
    (i32.store
     (i32.add
      (get_local $0)
      (i32.const 296)
     )
     (get_local $1)
    )
    (call $eosio_assert
     (i32.ne
      (tee_local $6
       (i32.load offset=12
        (get_local $12)
       )
      )
      (i32.const 0)
     )
     (i32.const 96)
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=32
       (get_local $6)
      )
      (tee_local $11
       (i32.load offset=16
        (get_local $12)
       )
      )
     )
     (i32.const 144)
    )
    (call $eosio_assert
     (i64.eq
      (i64.load
       (get_local $11)
      )
      (call $current_receiver)
     )
     (i32.const 192)
    )
    (i64.store offset=112
     (get_local $12)
     (tee_local $8
      (i64.sub
       (i64.const 0)
       (i64.load
        (tee_local $3
         (i32.add
          (get_local $6)
          (i32.const 16)
         )
        )
       )
      )
     )
    )
    (i64.store
     (get_local $3)
     (get_local $8)
    )
    (set_local $8
     (i64.load
      (get_local $6)
     )
    )
    (call $eosio_assert
     (i32.const 1)
     (i32.const 256)
    )
    (i32.store offset=104
     (get_local $12)
     (i32.add
      (i32.add
       (get_local $12)
       (i32.const 64)
      )
      (i32.const 32)
     )
    )
    (i32.store offset=100
     (get_local $12)
     (i32.add
      (get_local $12)
      (i32.const 64)
     )
    )
    (i32.store offset=96
     (get_local $12)
     (i32.add
      (get_local $12)
      (i32.const 64)
     )
    )
    (i32.store offset=120
     (get_local $12)
     (i32.add
      (get_local $12)
      (i32.const 96)
     )
    )
    (i32.store offset=132
     (get_local $12)
     (i32.add
      (get_local $6)
      (i32.const 8)
     )
    )
    (i32.store offset=128
     (get_local $12)
     (get_local $6)
    )
    (i32.store offset=136
     (get_local $12)
     (get_local $3)
    )
    (i32.store offset=140
     (get_local $12)
     (i32.add
      (get_local $6)
      (i32.const 24)
     )
    )
    (call $_ZN5boost3pfr6detail19for_each_field_implINS1_14sequence_tuple5tupleIJRKyS6_RKxS6_EEEZN5eosiolsINSA_10datastreamIPcEEN11eosiosystem8name_bidELPv0EEERT_SJ_RKT0_EUlRKSI_E_JLj0ELj1ELj2ELj3EEEEvSJ_OSK_NSt3__116integer_sequenceIjJXspT1_EEEENSR_17integral_constantIbLb0EEE
     (i32.add
      (get_local $12)
      (i32.const 128)
     )
     (i32.add
      (get_local $12)
      (i32.const 120)
     )
    )
    (call $db_update_i64
     (i32.load offset=36
      (get_local $6)
     )
     (i64.const 0)
     (i32.add
      (get_local $12)
      (i32.const 64)
     )
     (i32.const 32)
    )
    (block $label$14
     (br_if $label$14
      (i64.lt_u
       (get_local $8)
       (i64.load offset=16
        (get_local $11)
       )
      )
     )
     (i64.store
      (i32.add
       (get_local $11)
       (i32.const 16)
      )
      (select
       (i64.const -2)
       (i64.add
        (get_local $8)
        (i64.const 1)
       )
       (i64.gt_u
        (get_local $8)
        (i64.const -3)
       )
      )
     )
    )
    (i64.store offset=128
     (get_local $12)
     (i64.sub
      (i64.const 0)
      (i64.load
       (get_local $3)
      )
     )
    )
    (br_if $label$13
     (i32.eqz
      (call $memcmp
       (i32.add
        (get_local $12)
        (i32.const 112)
       )
       (i32.add
        (get_local $12)
        (i32.const 128)
       )
       (i32.const 8)
      )
     )
    )
    (block $label$15
     (br_if $label$15
      (i32.gt_s
       (tee_local $6
        (i32.load
         (tee_local $3
          (i32.add
           (get_local $6)
           (i32.const 40)
          )
         )
        )
       )
       (i32.const -1)
      )
     )
     (i32.store
      (get_local $3)
      (tee_local $6
       (call $db_idx64_find_primary
        (i64.load
         (get_local $11)
        )
        (i64.load offset=8
         (get_local $11)
        )
        (i64.const -7375590273822228480)
        (i32.add
         (get_local $12)
         (i32.const 120)
        )
        (get_local $8)
       )
      )
     )
    )
    (call $db_idx64_update
     (get_local $6)
     (i64.const 0)
     (i32.add
      (get_local $12)
      (i32.const 128)
     )
    )
   )
   (br_if $label$6
    (i32.eqz
     (tee_local $11
      (i32.load offset=48
       (get_local $12)
      )
     )
    )
   )
   (block $label$16
    (block $label$17
     (br_if $label$17
      (i32.eq
       (tee_local $6
        (i32.load
         (tee_local $0
          (i32.add
           (get_local $12)
           (i32.const 52)
          )
         )
        )
       )
       (get_local $11)
      )
     )
     (loop $label$18
      (set_local $3
       (i32.load
        (tee_local $6
         (i32.add
          (get_local $6)
          (i32.const -24)
         )
        )
       )
      )
      (i32.store
       (get_local $6)
       (i32.const 0)
      )
      (block $label$19
       (br_if $label$19
        (i32.eqz
         (get_local $3)
        )
       )
       (call $_ZdlPv
        (get_local $3)
       )
      )
      (br_if $label$18
       (i32.ne
        (get_local $11)
        (get_local $6)
       )
      )
     )
     (set_local $6
      (i32.load
       (i32.add
        (get_local $12)
        (i32.const 48)
       )
      )
     )
     (br $label$16)
    )
    (set_local $6
     (get_local $11)
    )
   )
   (i32.store
    (get_local $0)
    (get_local $11)
   )
   (call $_ZdlPv
    (get_local $6)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $12)
    (i32.const 144)
   )
  )
 )
 (func $_ZNK5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE31load_object_by_primary_iteratorEl (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (set_local $8
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 28)
       )
      )
     )
     (tee_local $2
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (set_local $3
    (i32.sub
     (i32.const 0)
     (get_local $2)
    )
   )
   (set_local $6
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i32.eq
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const 16)
       )
      )
      (get_local $1)
     )
    )
    (set_local $7
     (get_local $6)
    )
    (set_local $6
     (tee_local $4
      (i32.add
       (get_local $6)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $4)
       (get_local $3)
      )
      (i32.const -24)
     )
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (get_local $2)
     )
    )
    (set_local $6
     (i32.load
      (i32.add
       (get_local $7)
       (i32.const -24)
      )
     )
    )
    (br $label$2)
   )
   (call $eosio_assert
    (i32.xor
     (i32.shr_u
      (tee_local $6
       (call $db_get_i64
        (get_local $1)
        (i32.const 0)
        (i32.const 0)
       )
      )
      (i32.const 31)
     )
     (i32.const 1)
    )
    (i32.const 336)
   )
   (block $label$4
    (block $label$5
     (br_if $label$5
      (i32.lt_u
       (get_local $6)
       (i32.const 513)
      )
     )
     (set_local $4
      (call $malloc
       (get_local $6)
      )
     )
     (br $label$4)
    )
    (i32.store offset=4
     (i32.const 0)
     (tee_local $4
      (i32.sub
       (get_local $9)
       (i32.and
        (i32.add
         (get_local $6)
         (i32.const 15)
        )
        (i32.const -16)
       )
      )
     )
    )
   )
   (drop
    (call $db_get_i64
     (get_local $1)
     (get_local $4)
     (get_local $6)
    )
   )
   (i32.store offset=36
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=32
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=40
    (get_local $8)
    (i32.add
     (get_local $4)
     (get_local $6)
    )
   )
   (block $label$6
    (br_if $label$6
     (i32.lt_u
      (get_local $6)
      (i32.const 513)
     )
    )
    (call $free
     (get_local $4)
    )
   )
   (i32.store offset=16
    (tee_local $6
     (call $_Znwj
      (i32.const 104)
     )
    )
    (i32.const 0)
   )
   (i64.store offset=8
    (get_local $6)
    (i64.const 0)
   )
   (i32.store8 offset=56
    (get_local $6)
    (i32.const 1)
   )
   (i32.store offset=60
    (get_local $6)
    (i32.const 0)
   )
   (i32.store offset=64
    (get_local $6)
    (i32.const 0)
   )
   (i32.store offset=68
    (get_local $6)
    (i32.const 0)
   )
   (i32.store offset=72
    (get_local $6)
    (i32.const 0)
   )
   (i64.store offset=80
    (get_local $6)
    (i64.const 0)
   )
   (i32.store16 offset=88
    (get_local $6)
    (i32.const 0)
   )
   (i32.store offset=92
    (get_local $6)
    (get_local $0)
   )
   (drop
    (call $_ZN11eosiosystemrsIN5eosio10datastreamIPKcEEEERT_S7_RNS_13producer_infoE
     (i32.add
      (get_local $8)
      (i32.const 32)
     )
     (get_local $6)
    )
   )
   (i32.store offset=100
    (get_local $6)
    (i32.const -1)
   )
   (i32.store offset=96
    (get_local $6)
    (get_local $1)
   )
   (i32.store offset=24
    (get_local $8)
    (get_local $6)
   )
   (i64.store offset=16
    (get_local $8)
    (tee_local $5
     (i64.load
      (get_local $6)
     )
    )
   )
   (i32.store offset=12
    (get_local $8)
    (tee_local $7
     (i32.load offset=96
      (get_local $6)
     )
    )
   )
   (block $label$7
    (block $label$8
     (br_if $label$8
      (i32.ge_u
       (tee_local $4
        (i32.load
         (tee_local $1
          (i32.add
           (get_local $0)
           (i32.const 28)
          )
         )
        )
       )
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 32)
        )
       )
      )
     )
     (i64.store offset=8
      (get_local $4)
      (get_local $5)
     )
     (i32.store offset=16
      (get_local $4)
      (get_local $7)
     )
     (i32.store offset=24
      (get_local $8)
      (i32.const 0)
     )
     (i32.store
      (get_local $4)
      (get_local $6)
     )
     (i32.store
      (get_local $1)
      (i32.add
       (get_local $4)
       (i32.const 24)
      )
     )
     (br $label$7)
    )
    (call $_ZNSt3__16vectorIN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS1_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS4_dXadL_ZNKS4_8by_votesEvEEEEEEEE8item_ptrENS_9allocatorISC_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINSB_4itemENS_14default_deleteISI_EEEERyRlEEEvDpOT_
     (i32.add
      (get_local $0)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 16)
     )
     (i32.add
      (get_local $8)
      (i32.const 12)
     )
    )
   )
   (set_local $4
    (i32.load offset=24
     (get_local $8)
    )
   )
   (i32.store offset=24
    (get_local $8)
    (i32.const 0)
   )
   (br_if $label$2
    (i32.eqz
     (get_local $4)
    )
   )
   (block $label$9
    (br_if $label$9
     (i32.eqz
      (i32.and
       (i32.load8_u offset=60
        (get_local $4)
       )
       (i32.const 1)
      )
     )
    )
    (call $_ZdlPv
     (i32.load
      (i32.add
       (get_local $4)
       (i32.const 68)
      )
     )
    )
   )
   (call $_ZdlPv
    (get_local $4)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 48)
   )
  )
  (get_local $6)
 )
 (func $_ZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE6modifyIZNS1_15system_contract7onblockENS_15block_timestampEyE3$_0EEvRKS2_yOT_ (param $0 i32) (param $1 i32)
  (local $2 i64)
  (local $3 f64)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $7
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (call $eosio_assert
   (i32.eq
    (i32.load
     (i32.add
      (get_local $1)
      (i32.const 92)
     )
    )
    (get_local $0)
   )
   (i32.const 144)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 192)
  )
  (i32.store offset=72
   (get_local $1)
   (i32.add
    (i32.load offset=72
     (get_local $1)
    )
    (i32.const 1)
   )
  )
  (f64.store offset=24
   (tee_local $8
    (get_local $7)
   )
   (select
    (f64.neg
     (tee_local $3
      (f64.load
       (i32.add
        (get_local $1)
        (i32.const 8)
       )
      )
     )
    )
    (get_local $3)
    (i32.load8_u
     (i32.add
      (get_local $1)
      (i32.const 56)
     )
    )
   )
  )
  (set_local $2
   (i64.load
    (get_local $1)
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 256)
  )
  (set_local $5
   (i64.load32_u offset=16
    (get_local $1)
   )
  )
  (set_local $6
   (i32.const 64)
  )
  (loop $label$0
   (set_local $6
    (i32.add
     (get_local $6)
     (i32.const 1)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $5
      (i64.shr_u
       (get_local $5)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (set_local $6
   (i32.add
    (tee_local $4
     (select
      (i32.load
       (i32.add
        (get_local $1)
        (i32.const 64)
       )
      )
      (i32.shr_u
       (tee_local $4
        (i32.load8_u offset=60
         (get_local $1)
        )
       )
       (i32.const 1)
      )
      (i32.and
       (get_local $4)
       (i32.const 1)
      )
     )
    )
    (get_local $6)
   )
  )
  (set_local $5
   (i64.extend_u/i32
    (get_local $4)
   )
  )
  (loop $label$1
   (set_local $6
    (i32.add
     (get_local $6)
     (i32.const 1)
    )
   )
   (br_if $label$1
    (i64.ne
     (tee_local $5
      (i64.shr_u
       (get_local $5)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.lt_u
      (get_local $6)
      (i32.const 513)
     )
    )
    (set_local $7
     (call $malloc
      (get_local $6)
     )
    )
    (br $label$2)
   )
   (i32.store offset=4
    (i32.const 0)
    (tee_local $7
     (i32.sub
      (get_local $7)
      (i32.and
       (i32.add
        (get_local $6)
        (i32.const 15)
       )
       (i32.const -16)
      )
     )
    )
   )
  )
  (i32.store offset=12
   (get_local $8)
   (get_local $7)
  )
  (i32.store offset=8
   (get_local $8)
   (get_local $7)
  )
  (i32.store offset=16
   (get_local $8)
   (i32.add
    (get_local $7)
    (get_local $6)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_13producer_infoE
    (i32.add
     (get_local $8)
     (i32.const 8)
    )
    (get_local $1)
   )
  )
  (call $db_update_i64
   (i32.load offset=96
    (get_local $1)
   )
   (i64.const 0)
   (get_local $7)
   (get_local $6)
  )
  (block $label$4
   (br_if $label$4
    (i32.lt_u
     (get_local $6)
     (i32.const 513)
    )
   )
   (call $free
    (get_local $7)
   )
  )
  (block $label$5
   (br_if $label$5
    (i64.lt_u
     (get_local $2)
     (i64.load offset=16
      (get_local $0)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $0)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $2)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $2)
      (i64.const -3)
     )
    )
   )
  )
  (f64.store offset=40
   (get_local $8)
   (select
    (f64.neg
     (tee_local $3
      (f64.load
       (i32.add
        (get_local $1)
        (i32.const 8)
       )
      )
     )
    )
    (get_local $3)
    (i32.load8_u
     (i32.add
      (get_local $1)
      (i32.const 56)
     )
    )
   )
  )
  (block $label$6
   (br_if $label$6
    (i32.eqz
     (call $memcmp
      (i32.add
       (get_local $8)
       (i32.const 24)
      )
      (i32.add
       (get_local $8)
       (i32.const 40)
      )
      (i32.const 8)
     )
    )
   )
   (block $label$7
    (br_if $label$7
     (i32.gt_s
      (tee_local $6
       (i32.load offset=100
        (get_local $1)
       )
      )
      (i32.const -1)
     )
    )
    (i32.store
     (i32.add
      (get_local $1)
      (i32.const 100)
     )
     (tee_local $6
      (call $db_idx_double_find_primary
       (i64.load
        (get_local $0)
       )
       (i64.load offset=8
        (get_local $0)
       )
       (i64.const -5915305344019464192)
       (i32.add
        (get_local $8)
        (i32.const 32)
       )
       (get_local $2)
      )
     )
    )
   )
   (call $db_idx_double_update
    (get_local $6)
    (i64.const 0)
    (i32.add
     (get_local $8)
     (i32.const 40)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 48)
   )
  )
 )
 (func $_ZN11eosiosystem15system_contract24update_elected_producersEN5eosio15block_timestampE (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 f64)
  (local $5 i32)
  (local $6 i32)
  (local $7 i64)
  (local $8 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $8
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 144)
    )
   )
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 224)
   )
   (get_local $1)
  )
  (i32.store offset=136
   (get_local $8)
   (i32.add
    (get_local $0)
    (i32.const 48)
   )
  )
  (i32.store offset=124
   (get_local $8)
   (tee_local $1
    (call $_Znwj
     (i32.const 1176)
    )
   )
  )
  (i32.store offset=120
   (get_local $8)
   (get_local $1)
  )
  (i32.store offset=128
   (get_local $8)
   (i32.add
    (get_local $1)
    (i32.const 1176)
   )
  )
  (i64.store offset=64
   (get_local $8)
   (i64.const -4503599627370497)
  )
  (call $_ZNK5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE5indexILy12531717195943457440ES7_Ly0ELb0EE11lower_boundERKd
   (i32.add
    (get_local $8)
    (i32.const 8)
   )
   (i32.add
    (get_local $8)
    (i32.const 136)
   )
   (i32.add
    (get_local $8)
    (i32.const 64)
   )
  )
  (block $label$0
   (br_if $label$0
    (i32.eqz
     (tee_local $1
      (i32.load offset=12
       (get_local $8)
      )
     )
    )
   )
   (set_local $3
    (i32.add
     (i32.add
      (get_local $8)
      (i32.const 64)
     )
     (i32.const 8)
    )
   )
   (set_local $5
    (i32.add
     (i32.add
      (get_local $8)
      (i32.const 64)
     )
     (i32.const 48)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i32.gt_u
      (i32.div_s
       (i32.sub
        (tee_local $6
         (i32.load offset=124
          (get_local $8)
         )
        )
        (i32.load offset=120
         (get_local $8)
        )
       )
       (i32.const 56)
      )
      (i32.const 20)
     )
    )
    (br_if $label$0
     (i32.or
      (f64.le
       (tee_local $4
        (f64.load offset=8
         (get_local $1)
        )
       )
       (f64.const 0)
      )
      (f64.ne
       (get_local $4)
       (get_local $4)
      )
     )
    )
    (br_if $label$0
     (i32.eqz
      (i32.load8_u offset=56
       (get_local $1)
      )
     )
    )
    (set_local $7
     (i64.load
      (get_local $1)
     )
    )
    (drop
     (call $memcpy
      (i32.add
       (get_local $8)
       (i32.const 24)
      )
      (i32.add
       (get_local $1)
       (i32.const 16)
      )
      (i32.const 40)
     )
    )
    (i64.store offset=64
     (get_local $8)
     (get_local $7)
    )
    (drop
     (call $memcpy
      (get_local $3)
      (i32.add
       (get_local $8)
       (i32.const 24)
      )
      (i32.const 40)
     )
    )
    (i32.store16
     (get_local $5)
     (i32.load16_u offset=88
      (get_local $1)
     )
    )
    (block $label$2
     (block $label$3
      (br_if $label$3
       (i32.ge_u
        (get_local $6)
        (i32.load
         (i32.add
          (i32.add
           (get_local $8)
           (i32.const 120)
          )
          (i32.const 8)
         )
        )
       )
      )
      (i32.store offset=124
       (get_local $8)
       (i32.add
        (call $memcpy
         (get_local $6)
         (i32.add
          (get_local $8)
          (i32.const 64)
         )
         (i32.const 56)
        )
        (i32.const 56)
       )
      )
      (br $label$2)
     )
     (call $_ZNSt3__16vectorINS_4pairIN5eosio12producer_keyEtEENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_
      (i32.add
       (get_local $8)
       (i32.const 120)
      )
      (i32.add
       (get_local $8)
       (i32.const 64)
      )
     )
    )
    (drop
     (call $_ZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE5indexILy12531717195943457440ES7_Ly0ELb0EE14const_iteratorppEv
      (i32.add
       (get_local $8)
       (i32.const 8)
      )
     )
    )
    (br_if $label$1
     (tee_local $1
      (i32.load offset=12
       (get_local $8)
      )
     )
    )
   )
  )
  (block $label$4
   (block $label$5
    (br_if $label$5
     (i32.lt_u
      (i32.div_s
       (i32.sub
        (tee_local $6
         (i32.load offset=124
          (get_local $8)
         )
        )
        (tee_local $1
         (i32.load offset=120
          (get_local $8)
         )
        )
       )
       (i32.const 56)
      )
      (i32.load16_u
       (i32.add
        (get_local $0)
        (i32.const 280)
       )
      )
     )
    )
    (call $_ZNSt3__16__sortIRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEvT0_S9_T_
     (get_local $1)
     (get_local $6)
     (i32.add
      (get_local $8)
      (i32.const 64)
     )
    )
    (i64.store offset=24
     (get_local $8)
     (i64.const 0)
    )
    (i32.store offset=32
     (get_local $8)
     (i32.const 0)
    )
    (set_local $1
     (i32.div_s
      (tee_local $6
       (i32.sub
        (i32.load offset=124
         (get_local $8)
        )
        (i32.load offset=120
         (get_local $8)
        )
       )
      )
      (i32.const 56)
     )
    )
    (block $label$6
     (br_if $label$6
      (i32.eqz
       (get_local $6)
      )
     )
     (br_if $label$4
      (i32.ge_u
       (get_local $1)
       (i32.const 89478486)
      )
     )
     (set_local $2
      (i32.add
       (tee_local $6
        (call $_Znwj
         (tee_local $1
          (i32.mul
           (get_local $1)
           (i32.const 48)
          )
         )
        )
       )
       (get_local $1)
      )
     )
     (set_local $3
      (i32.add
       (get_local $6)
       (i32.mul
        (i32.div_s
         (tee_local $5
          (i32.sub
           (i32.load offset=28
            (get_local $8)
           )
           (tee_local $1
            (i32.load offset=24
             (get_local $8)
            )
           )
          )
         )
         (i32.const -48)
        )
        (i32.const 48)
       )
      )
     )
     (block $label$7
      (br_if $label$7
       (i32.lt_s
        (get_local $5)
        (i32.const 1)
       )
      )
      (drop
       (call $memcpy
        (get_local $3)
        (get_local $1)
        (get_local $5)
       )
      )
      (set_local $1
       (i32.load offset=24
        (get_local $8)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $8)
       (i32.const 32)
      )
      (get_local $2)
     )
     (i32.store offset=28
      (get_local $8)
      (get_local $6)
     )
     (i32.store offset=24
      (get_local $8)
      (get_local $3)
     )
     (br_if $label$6
      (i32.eqz
       (get_local $1)
      )
     )
     (call $_ZdlPv
      (get_local $1)
     )
    )
    (block $label$8
     (br_if $label$8
      (i32.eq
       (tee_local $1
        (i32.load offset=120
         (get_local $8)
        )
       )
       (tee_local $3
        (i32.load offset=124
         (get_local $8)
        )
       )
      )
     )
     (set_local $5
      (i32.add
       (get_local $8)
       (i32.const 32)
      )
     )
     (loop $label$9
      (block $label$10
       (block $label$11
        (br_if $label$11
         (i32.eq
          (tee_local $6
           (i32.load offset=28
            (get_local $8)
           )
          )
          (i32.load
           (get_local $5)
          )
         )
        )
        (i32.store offset=28
         (get_local $8)
         (i32.add
          (call $memcpy
           (get_local $6)
           (get_local $1)
           (i32.const 48)
          )
          (i32.const 48)
         )
        )
        (br $label$10)
       )
       (call $_ZNSt3__16vectorIN5eosio12producer_keyENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_
        (i32.add
         (get_local $8)
         (i32.const 24)
        )
        (get_local $1)
       )
      )
      (br_if $label$9
       (i32.ne
        (get_local $3)
        (tee_local $1
         (i32.add
          (get_local $1)
          (i32.const 56)
         )
        )
       )
      )
     )
    )
    (i64.store offset=8
     (get_local $8)
     (i64.const 0)
    )
    (set_local $1
     (i32.const 0)
    )
    (i32.store offset=16
     (get_local $8)
     (i32.const 0)
    )
    (set_local $7
     (i64.extend_u/i32
      (i32.div_s
       (i32.sub
        (tee_local $3
         (i32.load offset=28
          (get_local $8)
         )
        )
        (tee_local $6
         (i32.load offset=24
          (get_local $8)
         )
        )
       )
       (i32.const 48)
      )
     )
    )
    (loop $label$12
     (set_local $1
      (i32.add
       (get_local $1)
       (i32.const 1)
      )
     )
     (br_if $label$12
      (i64.ne
       (tee_local $7
        (i64.shr_u
         (get_local $7)
         (i64.const 7)
        )
       )
       (i64.const 0)
      )
     )
    )
    (block $label$13
     (block $label$14
      (block $label$15
       (br_if $label$15
        (i32.eq
         (get_local $6)
         (get_local $3)
        )
       )
       (loop $label$16
        (set_local $1
         (i32.add
          (get_local $1)
          (i32.const 41)
         )
        )
        (set_local $7
         (i64.load32_u offset=8
          (get_local $6)
         )
        )
        (loop $label$17
         (set_local $1
          (i32.add
           (get_local $1)
           (i32.const 1)
          )
         )
         (br_if $label$17
          (i64.ne
           (tee_local $7
            (i64.shr_u
             (get_local $7)
             (i64.const 7)
            )
           )
           (i64.const 0)
          )
         )
        )
        (br_if $label$16
         (i32.ne
          (tee_local $6
           (i32.add
            (get_local $6)
            (i32.const 48)
           )
          )
          (get_local $3)
         )
        )
       )
       (br_if $label$14
        (i32.eqz
         (get_local $1)
        )
       )
      )
      (call $_ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj
       (i32.add
        (get_local $8)
        (i32.const 8)
       )
       (get_local $1)
      )
      (set_local $6
       (i32.load offset=12
        (get_local $8)
       )
      )
      (set_local $1
       (i32.load offset=8
        (get_local $8)
       )
      )
      (br $label$13)
     )
     (set_local $6
      (i32.const 0)
     )
     (set_local $1
      (i32.const 0)
     )
    )
    (i32.store offset=68
     (get_local $8)
     (get_local $1)
    )
    (i32.store offset=64
     (get_local $8)
     (get_local $1)
    )
    (i32.store offset=72
     (get_local $8)
     (get_local $6)
    )
    (drop
     (call $_ZN5eosiolsINS_10datastreamIPcEENS_12producer_keyEEERT_S6_RKNSt3__16vectorIT0_NS7_9allocatorIS9_EEEE
      (i32.add
       (get_local $8)
       (i32.const 64)
      )
      (i32.add
       (get_local $8)
       (i32.const 24)
      )
     )
    )
    (block $label$18
     (br_if $label$18
      (i64.le_s
       (call $set_proposed_producers
        (tee_local $1
         (i32.load offset=8
          (get_local $8)
         )
        )
        (i32.sub
         (i32.load offset=12
          (get_local $8)
         )
         (get_local $1)
        )
       )
       (i64.const -1)
      )
     )
     (i32.store16
      (i32.add
       (get_local $0)
       (i32.const 280)
      )
      (i32.div_s
       (i32.sub
        (i32.load offset=124
         (get_local $8)
        )
        (i32.load offset=120
         (get_local $8)
        )
       )
       (i32.const 56)
      )
     )
    )
    (block $label$19
     (br_if $label$19
      (i32.eqz
       (tee_local $1
        (i32.load offset=8
         (get_local $8)
        )
       )
      )
     )
     (i32.store offset=12
      (get_local $8)
      (get_local $1)
     )
     (call $_ZdlPv
      (get_local $1)
     )
    )
    (block $label$20
     (br_if $label$20
      (i32.eqz
       (tee_local $1
        (i32.load offset=24
         (get_local $8)
        )
       )
      )
     )
     (i32.store offset=28
      (get_local $8)
      (get_local $1)
     )
     (call $_ZdlPv
      (get_local $1)
     )
    )
    (set_local $1
     (i32.load offset=120
      (get_local $8)
     )
    )
   )
   (block $label$21
    (br_if $label$21
     (i32.eqz
      (get_local $1)
     )
    )
    (i32.store offset=124
     (get_local $8)
     (get_local $1)
    )
    (call $_ZdlPv
     (get_local $1)
    )
   )
   (i32.store offset=4
    (i32.const 0)
    (i32.add
     (get_local $8)
     (i32.const 144)
    )
   )
   (return)
  )
  (call $abort)
  (unreachable)
 )
 (func $_ZNK5eosio11multi_indexILy11071153799887323136EN11eosiosystem8name_bidEJNS_10indexed_byILy7753179550577590272EN5boost11multi_index13const_mem_funIS2_yXadL_ZNKS2_11by_high_bidEvEEEEEEEE5indexILy7753179550577590272ES7_Ly0ELb0EE11lower_boundERKy (param $0 i32) (param $1 i32) (param $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (local $10 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $10
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (i64.store offset=8
   (get_local $10)
   (i64.const 0)
  )
  (i64.store
   (get_local $10)
   (i64.load
    (get_local $2)
   )
  )
  (set_local $2
   (i32.const 0)
  )
  (block $label$0
   (br_if $label$0
    (i32.lt_s
     (tee_local $3
      (call $db_idx64_lowerbound
       (i64.load
        (tee_local $8
         (i32.load
          (get_local $1)
         )
        )
       )
       (i64.load offset=8
        (get_local $8)
       )
       (i64.const -7375590273822228480)
       (get_local $10)
       (i32.add
        (get_local $10)
        (i32.const 8)
       )
      )
     )
     (i32.const 0)
    )
   )
   (set_local $5
    (i64.load offset=8
     (get_local $10)
    )
   )
   (block $label$1
    (br_if $label$1
     (i32.eq
      (tee_local $9
       (i32.load
        (i32.add
         (tee_local $4
          (i32.load
           (get_local $1)
          )
         )
         (i32.const 28)
        )
       )
      )
      (tee_local $6
       (i32.load offset=24
        (get_local $4)
       )
      )
     )
    )
    (set_local $2
     (i32.add
      (get_local $9)
      (i32.const -24)
     )
    )
    (set_local $7
     (i32.sub
      (i32.const 0)
      (get_local $6)
     )
    )
    (loop $label$2
     (br_if $label$1
      (i64.eq
       (i64.load
        (i32.load
         (get_local $2)
        )
       )
       (get_local $5)
      )
     )
     (set_local $9
      (get_local $2)
     )
     (set_local $2
      (tee_local $8
       (i32.add
        (get_local $2)
        (i32.const -24)
       )
      )
     )
     (br_if $label$2
      (i32.ne
       (i32.add
        (get_local $8)
        (get_local $7)
       )
       (i32.const -24)
      )
     )
    )
   )
   (block $label$3
    (block $label$4
     (br_if $label$4
      (i32.eq
       (get_local $9)
       (get_local $6)
      )
     )
     (call $eosio_assert
      (i32.eq
       (i32.load offset=32
        (tee_local $2
         (i32.load
          (i32.add
           (get_local $9)
           (i32.const -24)
          )
         )
        )
       )
       (get_local $4)
      )
      (i32.const 32)
     )
     (br $label$3)
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=32
       (tee_local $2
        (call $_ZNK5eosio11multi_indexILy11071153799887323136EN11eosiosystem8name_bidEJNS_10indexed_byILy7753179550577590272EN5boost11multi_index13const_mem_funIS2_yXadL_ZNKS2_11by_high_bidEvEEEEEEEE31load_object_by_primary_iteratorEl
         (get_local $4)
         (call $db_find_i64
          (i64.load
           (get_local $4)
          )
          (i64.load offset=8
           (get_local $4)
          )
          (i64.const -7375590273822228480)
          (get_local $5)
         )
        )
       )
      )
      (get_local $4)
     )
     (i32.const 32)
    )
   )
   (i32.store
    (i32.add
     (get_local $2)
     (i32.const 40)
    )
    (get_local $3)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (get_local $2)
  )
  (i32.store
   (get_local $0)
   (get_local $1)
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $10)
    (i32.const 16)
   )
  )
 )
 (func $_ZN5boost3pfr6detail19for_each_field_implINS1_14sequence_tuple5tupleIJRKyS6_RKxS6_EEEZN5eosiolsINSA_10datastreamIPcEEN11eosiosystem8name_bidELPv0EEERT_SJ_RKT0_EUlRKSI_E_JLj0ELj1ELj2ELj3EEEEvSJ_OSK_NSt3__116integer_sequenceIjJXspT1_EEEENSR_17integral_constantIbLb0EEE (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (set_local $3
   (i32.load
    (get_local $0)
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (tee_local $2
       (i32.load
        (get_local $1)
       )
      )
     )
     (i32.load offset=4
      (get_local $2)
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $2)
    )
    (get_local $3)
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (i32.add
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (set_local $3
   (i32.load offset=4
    (get_local $0)
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (tee_local $2
       (i32.load
        (get_local $1)
       )
      )
     )
     (i32.load offset=4
      (get_local $2)
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $2)
    )
    (get_local $3)
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (i32.add
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (set_local $3
   (i32.load offset=8
    (get_local $0)
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (tee_local $2
       (i32.load
        (get_local $1)
       )
      )
     )
     (i32.load offset=4
      (get_local $2)
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $2)
    )
    (get_local $3)
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (i32.add
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (set_local $2
   (i32.load offset=12
    (get_local $0)
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (tee_local $0
       (i32.load
        (get_local $1)
       )
      )
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (get_local $2)
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
 )
 (func $_ZNK5eosio11multi_indexILy11071153799887323136EN11eosiosystem8name_bidEJNS_10indexed_byILy7753179550577590272EN5boost11multi_index13const_mem_funIS2_yXadL_ZNKS2_11by_high_bidEvEEEEEEEE31load_object_by_primary_iteratorEl (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (set_local $8
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 28)
       )
      )
     )
     (tee_local $2
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (set_local $3
    (i32.sub
     (i32.const 0)
     (get_local $2)
    )
   )
   (set_local $6
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i32.eq
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const 16)
       )
      )
      (get_local $1)
     )
    )
    (set_local $7
     (get_local $6)
    )
    (set_local $6
     (tee_local $4
      (i32.add
       (get_local $6)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $4)
       (get_local $3)
      )
      (i32.const -24)
     )
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (get_local $2)
     )
    )
    (set_local $6
     (i32.load
      (i32.add
       (get_local $7)
       (i32.const -24)
      )
     )
    )
    (br $label$2)
   )
   (call $eosio_assert
    (i32.xor
     (i32.shr_u
      (tee_local $6
       (call $db_get_i64
        (get_local $1)
        (i32.const 0)
        (i32.const 0)
       )
      )
      (i32.const 31)
     )
     (i32.const 1)
    )
    (i32.const 336)
   )
   (block $label$4
    (block $label$5
     (br_if $label$5
      (i32.lt_u
       (get_local $6)
       (i32.const 513)
      )
     )
     (set_local $4
      (call $malloc
       (get_local $6)
      )
     )
     (br $label$4)
    )
    (i32.store offset=4
     (i32.const 0)
     (tee_local $4
      (i32.sub
       (get_local $9)
       (i32.and
        (i32.add
         (get_local $6)
         (i32.const 15)
        )
        (i32.const -16)
       )
      )
     )
    )
   )
   (drop
    (call $db_get_i64
     (get_local $1)
     (get_local $4)
     (get_local $6)
    )
   )
   (i32.store offset=12
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=8
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=16
    (get_local $8)
    (i32.add
     (get_local $4)
     (get_local $6)
    )
   )
   (block $label$6
    (br_if $label$6
     (i32.lt_u
      (get_local $6)
      (i32.const 513)
     )
    )
    (call $free
     (get_local $4)
    )
   )
   (i64.store offset=24
    (tee_local $6
     (call $_Znwj
      (i32.const 48)
     )
    )
    (i64.const 0)
   )
   (i64.store offset=16
    (get_local $6)
    (i64.const 0)
   )
   (i32.store offset=32
    (get_local $6)
    (get_local $0)
   )
   (i32.store offset=24
    (get_local $8)
    (i32.add
     (get_local $8)
     (i32.const 8)
    )
   )
   (i32.store offset=36
    (get_local $8)
    (i32.add
     (get_local $6)
     (i32.const 8)
    )
   )
   (i32.store offset=32
    (get_local $8)
    (get_local $6)
   )
   (i32.store offset=40
    (get_local $8)
    (i32.add
     (get_local $6)
     (i32.const 16)
    )
   )
   (i32.store offset=44
    (get_local $8)
    (i32.add
     (get_local $6)
     (i32.const 24)
    )
   )
   (call $_ZN5boost3pfr6detail19for_each_field_implINS1_14sequence_tuple5tupleIJRyS5_RxS5_EEEZN5eosiorsINS8_10datastreamIPKcEEN11eosiosystem8name_bidELPv0EEERT_SI_RT0_EUlSI_E_JLj0ELj1ELj2ELj3EEEEvSI_OSJ_NSt3__116integer_sequenceIjJXspT1_EEEENSN_17integral_constantIbLb0EEE
    (i32.add
     (get_local $8)
     (i32.const 32)
    )
    (i32.add
     (get_local $8)
     (i32.const 24)
    )
   )
   (i32.store offset=40
    (get_local $6)
    (i32.const -1)
   )
   (i32.store offset=36
    (get_local $6)
    (get_local $1)
   )
   (i32.store offset=24
    (get_local $8)
    (get_local $6)
   )
   (i64.store offset=32
    (get_local $8)
    (tee_local $5
     (i64.load
      (get_local $6)
     )
    )
   )
   (i32.store offset=4
    (get_local $8)
    (tee_local $7
     (i32.load offset=36
      (get_local $6)
     )
    )
   )
   (block $label$7
    (block $label$8
     (br_if $label$8
      (i32.ge_u
       (tee_local $4
        (i32.load
         (tee_local $1
          (i32.add
           (get_local $0)
           (i32.const 28)
          )
         )
        )
       )
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 32)
        )
       )
      )
     )
     (i64.store offset=8
      (get_local $4)
      (get_local $5)
     )
     (i32.store offset=16
      (get_local $4)
      (get_local $7)
     )
     (i32.store offset=24
      (get_local $8)
      (i32.const 0)
     )
     (i32.store
      (get_local $4)
      (get_local $6)
     )
     (i32.store
      (get_local $1)
      (i32.add
       (get_local $4)
       (i32.const 24)
      )
     )
     (br $label$7)
    )
    (call $_ZNSt3__16vectorIN5eosio11multi_indexILy11071153799887323136EN11eosiosystem8name_bidEJNS1_10indexed_byILy7753179550577590272EN5boost11multi_index13const_mem_funIS4_yXadL_ZNKS4_11by_high_bidEvEEEEEEEE8item_ptrENS_9allocatorISC_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINSB_4itemENS_14default_deleteISI_EEEERyRlEEEvDpOT_
     (i32.add
      (get_local $0)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 32)
     )
     (i32.add
      (get_local $8)
      (i32.const 4)
     )
    )
   )
   (set_local $4
    (i32.load offset=24
     (get_local $8)
    )
   )
   (i32.store offset=24
    (get_local $8)
    (i32.const 0)
   )
   (br_if $label$2
    (i32.eqz
     (get_local $4)
    )
   )
   (call $_ZdlPv
    (get_local $4)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 48)
   )
  )
  (get_local $6)
 )
 (func $_ZN5boost3pfr6detail19for_each_field_implINS1_14sequence_tuple5tupleIJRyS5_RxS5_EEEZN5eosiorsINS8_10datastreamIPKcEEN11eosiosystem8name_bidELPv0EEERT_SI_RT0_EUlSI_E_JLj0ELj1ELj2ELj3EEEEvSI_OSJ_NSt3__116integer_sequenceIjJXspT1_EEEENSN_17integral_constantIbLb0EEE (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (set_local $3
   (i32.load
    (get_local $0)
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (tee_local $2
       (i32.load
        (get_local $1)
       )
      )
     )
     (i32.load offset=4
      (get_local $2)
     )
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (get_local $3)
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (i32.add
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (set_local $3
   (i32.load offset=4
    (get_local $0)
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (tee_local $2
       (i32.load
        (get_local $1)
       )
      )
     )
     (i32.load offset=4
      (get_local $2)
     )
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (get_local $3)
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (i32.add
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (set_local $3
   (i32.load offset=8
    (get_local $0)
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (tee_local $2
       (i32.load
        (get_local $1)
       )
      )
     )
     (i32.load offset=4
      (get_local $2)
     )
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (get_local $3)
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (i32.add
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (set_local $2
   (i32.load offset=12
    (get_local $0)
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (tee_local $0
       (i32.load
        (get_local $1)
       )
      )
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (get_local $2)
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
 )
 (func $_ZNSt3__16vectorIN5eosio11multi_indexILy11071153799887323136EN11eosiosystem8name_bidEJNS1_10indexed_byILy7753179550577590272EN5boost11multi_index13const_mem_funIS4_yXadL_ZNKS4_11by_high_bidEvEEEEEEEE8item_ptrENS_9allocatorISC_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINSB_4itemENS_14default_deleteISI_EEEERyRlEEEvDpOT_ (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.ge_u
      (tee_local $5
       (i32.add
        (tee_local $4
         (i32.div_s
          (i32.sub
           (i32.load offset=4
            (get_local $0)
           )
           (tee_local $6
            (i32.load
             (get_local $0)
            )
           )
          )
          (i32.const 24)
         )
        )
        (i32.const 1)
       )
      )
      (i32.const 178956971)
     )
    )
    (set_local $7
     (i32.const 178956970)
    )
    (block $label$2
     (block $label$3
      (br_if $label$3
       (i32.gt_u
        (tee_local $6
         (i32.div_s
          (i32.sub
           (i32.load offset=8
            (get_local $0)
           )
           (get_local $6)
          )
          (i32.const 24)
         )
        )
        (i32.const 89478484)
       )
      )
      (br_if $label$2
       (i32.eqz
        (tee_local $7
         (select
          (get_local $5)
          (tee_local $7
           (i32.shl
            (get_local $6)
            (i32.const 1)
           )
          )
          (i32.lt_u
           (get_local $7)
           (get_local $5)
          )
         )
        )
       )
      )
     )
     (set_local $6
      (call $_Znwj
       (i32.mul
        (get_local $7)
        (i32.const 24)
       )
      )
     )
     (br $label$0)
    )
    (set_local $7
     (i32.const 0)
    )
    (set_local $6
     (i32.const 0)
    )
    (br $label$0)
   )
   (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
    (get_local $0)
   )
   (unreachable)
  )
  (set_local $5
   (i32.load
    (get_local $1)
   )
  )
  (i32.store
   (get_local $1)
   (i32.const 0)
  )
  (i32.store
   (tee_local $1
    (i32.add
     (get_local $6)
     (i32.mul
      (get_local $4)
      (i32.const 24)
     )
    )
   )
   (get_local $5)
  )
  (i64.store offset=8
   (get_local $1)
   (i64.load
    (get_local $2)
   )
  )
  (i32.store offset=16
   (get_local $1)
   (i32.load
    (get_local $3)
   )
  )
  (set_local $4
   (i32.add
    (get_local $6)
    (i32.mul
     (get_local $7)
     (i32.const 24)
    )
   )
  )
  (set_local $5
   (i32.add
    (get_local $1)
    (i32.const 24)
   )
  )
  (block $label$4
   (block $label$5
    (br_if $label$5
     (i32.eq
      (tee_local $6
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 4)
        )
       )
      )
      (tee_local $7
       (i32.load
        (get_local $0)
       )
      )
     )
    )
    (loop $label$6
     (set_local $3
      (i32.load
       (tee_local $2
        (i32.add
         (get_local $6)
         (i32.const -24)
        )
       )
      )
     )
     (i32.store
      (get_local $2)
      (i32.const 0)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
      (get_local $3)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -8)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -8)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -12)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -12)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -16)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -16)
       )
      )
     )
     (set_local $1
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
     )
     (set_local $6
      (get_local $2)
     )
     (br_if $label$6
      (i32.ne
       (get_local $7)
       (get_local $2)
      )
     )
    )
    (set_local $7
     (i32.load
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (set_local $6
     (i32.load
      (get_local $0)
     )
    )
    (br $label$4)
   )
   (set_local $6
    (get_local $7)
   )
  )
  (i32.store
   (get_local $0)
   (get_local $1)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
   (get_local $5)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
   (get_local $4)
  )
  (block $label$7
   (br_if $label$7
    (i32.eq
     (get_local $7)
     (get_local $6)
    )
   )
   (loop $label$8
    (set_local $1
     (i32.load
      (tee_local $7
       (i32.add
        (get_local $7)
        (i32.const -24)
       )
      )
     )
    )
    (i32.store
     (get_local $7)
     (i32.const 0)
    )
    (block $label$9
     (br_if $label$9
      (i32.eqz
       (get_local $1)
      )
     )
     (call $_ZdlPv
      (get_local $1)
     )
    )
    (br_if $label$8
     (i32.ne
      (get_local $6)
      (get_local $7)
     )
    )
   )
  )
  (block $label$10
   (br_if $label$10
    (i32.eqz
     (get_local $6)
    )
   )
   (call $_ZdlPv
    (get_local $6)
   )
  )
 )
 (func $_ZNK5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE5indexILy12531717195943457440ES7_Ly0ELb0EE11lower_boundERKd (param $0 i32) (param $1 i32) (param $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (local $10 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $10
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (i64.store offset=8
   (get_local $10)
   (i64.const 0)
  )
  (i64.store
   (get_local $10)
   (i64.load
    (get_local $2)
   )
  )
  (set_local $2
   (i32.const 0)
  )
  (block $label$0
   (br_if $label$0
    (i32.lt_s
     (tee_local $3
      (call $db_idx_double_lowerbound
       (i64.load
        (tee_local $8
         (i32.load
          (get_local $1)
         )
        )
       )
       (i64.load offset=8
        (get_local $8)
       )
       (i64.const -5915305344019464192)
       (get_local $10)
       (i32.add
        (get_local $10)
        (i32.const 8)
       )
      )
     )
     (i32.const 0)
    )
   )
   (set_local $5
    (i64.load offset=8
     (get_local $10)
    )
   )
   (block $label$1
    (br_if $label$1
     (i32.eq
      (tee_local $9
       (i32.load
        (i32.add
         (tee_local $4
          (i32.load
           (get_local $1)
          )
         )
         (i32.const 28)
        )
       )
      )
      (tee_local $6
       (i32.load offset=24
        (get_local $4)
       )
      )
     )
    )
    (set_local $2
     (i32.add
      (get_local $9)
      (i32.const -24)
     )
    )
    (set_local $7
     (i32.sub
      (i32.const 0)
      (get_local $6)
     )
    )
    (loop $label$2
     (br_if $label$1
      (i64.eq
       (i64.load
        (i32.load
         (get_local $2)
        )
       )
       (get_local $5)
      )
     )
     (set_local $9
      (get_local $2)
     )
     (set_local $2
      (tee_local $8
       (i32.add
        (get_local $2)
        (i32.const -24)
       )
      )
     )
     (br_if $label$2
      (i32.ne
       (i32.add
        (get_local $8)
        (get_local $7)
       )
       (i32.const -24)
      )
     )
    )
   )
   (block $label$3
    (block $label$4
     (br_if $label$4
      (i32.eq
       (get_local $9)
       (get_local $6)
      )
     )
     (call $eosio_assert
      (i32.eq
       (i32.load
        (i32.add
         (tee_local $2
          (i32.load
           (i32.add
            (get_local $9)
            (i32.const -24)
           )
          )
         )
         (i32.const 92)
        )
       )
       (get_local $4)
      )
      (i32.const 32)
     )
     (br $label$3)
    )
    (set_local $2
     (i32.const 0)
    )
    (br_if $label$3
     (i32.lt_s
      (tee_local $8
       (call $db_find_i64
        (i64.load
         (get_local $4)
        )
        (i64.load offset=8
         (get_local $4)
        )
        (i64.const -5915305344019464192)
        (get_local $5)
       )
      )
      (i32.const 0)
     )
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=92
       (tee_local $2
        (call $_ZNK5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE31load_object_by_primary_iteratorEl
         (get_local $4)
         (get_local $8)
        )
       )
      )
      (get_local $4)
     )
     (i32.const 32)
    )
   )
   (i32.store offset=100
    (get_local $2)
    (get_local $3)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (get_local $2)
  )
  (i32.store
   (get_local $0)
   (get_local $1)
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $10)
    (i32.const 16)
   )
  )
 )
 (func $_ZNSt3__16vectorINS_4pairIN5eosio12producer_keyEtEENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_ (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.ge_u
      (tee_local $7
       (i32.add
        (tee_local $2
         (i32.div_s
          (i32.sub
           (tee_local $5
            (i32.load offset=4
             (get_local $0)
            )
           )
           (tee_local $4
            (i32.load
             (get_local $0)
            )
           )
          )
          (i32.const 56)
         )
        )
        (i32.const 1)
       )
      )
      (i32.const 76695845)
     )
    )
    (set_local $6
     (i32.const 76695844)
    )
    (block $label$2
     (block $label$3
      (br_if $label$3
       (i32.gt_u
        (tee_local $3
         (i32.div_s
          (i32.sub
           (i32.load offset=8
            (get_local $0)
           )
           (get_local $4)
          )
          (i32.const 56)
         )
        )
        (i32.const 38347921)
       )
      )
      (br_if $label$2
       (i32.eqz
        (tee_local $6
         (select
          (get_local $7)
          (tee_local $6
           (i32.shl
            (get_local $3)
            (i32.const 1)
           )
          )
          (i32.lt_u
           (get_local $6)
           (get_local $7)
          )
         )
        )
       )
      )
     )
     (set_local $7
      (call $_Znwj
       (i32.mul
        (get_local $6)
        (i32.const 56)
       )
      )
     )
     (set_local $5
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 4)
       )
      )
     )
     (set_local $4
      (i32.load
       (get_local $0)
      )
     )
     (br $label$0)
    )
    (set_local $6
     (i32.const 0)
    )
    (set_local $7
     (i32.const 0)
    )
    (br $label$0)
   )
   (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
    (get_local $0)
   )
   (unreachable)
  )
  (set_local $1
   (i32.add
    (tee_local $2
     (call $memcpy
      (i32.add
       (get_local $7)
       (i32.mul
        (get_local $2)
        (i32.const 56)
       )
      )
      (get_local $1)
      (i32.const 56)
     )
    )
    (i32.mul
     (i32.div_s
      (tee_local $5
       (i32.sub
        (get_local $5)
        (get_local $4)
       )
      )
      (i32.const -56)
     )
     (i32.const 56)
    )
   )
  )
  (set_local $6
   (i32.add
    (get_local $7)
    (i32.mul
     (get_local $6)
     (i32.const 56)
    )
   )
  )
  (set_local $7
   (i32.add
    (get_local $2)
    (i32.const 56)
   )
  )
  (block $label$4
   (br_if $label$4
    (i32.lt_s
     (get_local $5)
     (i32.const 1)
    )
   )
   (drop
    (call $memcpy
     (get_local $1)
     (get_local $4)
     (get_local $5)
    )
   )
   (set_local $4
    (i32.load
     (get_local $0)
    )
   )
  )
  (i32.store
   (get_local $0)
   (get_local $1)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
   (get_local $7)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
   (get_local $6)
  )
  (block $label$5
   (br_if $label$5
    (i32.eqz
     (get_local $4)
    )
   )
   (call $_ZdlPv
    (get_local $4)
   )
  )
 )
 (func $_ZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE5indexILy12531717195943457440ES7_Ly0ELb0EE14const_iteratorppEv (param $0 i32) (result i32)
  (local $1 i32)
  (local $2 i32)
  (local $3 i64)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (set_local $7
   (i32.const 0)
  )
  (call $eosio_assert
   (i32.ne
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 0)
   )
   (i32.const 384)
  )
  (block $label$0
   (br_if $label$0
    (i32.ne
     (tee_local $6
      (i32.load offset=100
       (tee_local $8
        (i32.load offset=4
         (get_local $0)
        )
       )
      )
     )
     (i32.const -1)
    )
   )
   (set_local $6
    (call $db_idx_double_find_primary
     (i64.load
      (tee_local $6
       (i32.load
        (i32.load
         (get_local $0)
        )
       )
      )
     )
     (i64.load offset=8
      (get_local $6)
     )
     (i64.const -5915305344019464192)
     (i32.add
      (get_local $9)
      (i32.const 8)
     )
     (i64.load
      (get_local $8)
     )
    )
   )
   (i32.store offset=100
    (i32.load
     (i32.add
      (get_local $0)
      (i32.const 4)
     )
    )
    (get_local $6)
   )
  )
  (i64.store offset=8
   (get_local $9)
   (i64.const 0)
  )
  (block $label$1
   (br_if $label$1
    (i32.lt_s
     (tee_local $1
      (call $db_idx_double_next
       (get_local $6)
       (i32.add
        (get_local $9)
        (i32.const 8)
       )
      )
     )
     (i32.const 0)
    )
   )
   (set_local $3
    (i64.load offset=8
     (get_local $9)
    )
   )
   (block $label$2
    (br_if $label$2
     (i32.eq
      (tee_local $8
       (i32.load
        (i32.add
         (tee_local $2
          (i32.load
           (i32.load
            (get_local $0)
           )
          )
         )
         (i32.const 28)
        )
       )
      )
      (tee_local $4
       (i32.load offset=24
        (get_local $2)
       )
      )
     )
    )
    (set_local $7
     (i32.add
      (get_local $8)
      (i32.const -24)
     )
    )
    (set_local $5
     (i32.sub
      (i32.const 0)
      (get_local $4)
     )
    )
    (loop $label$3
     (br_if $label$2
      (i64.eq
       (i64.load
        (i32.load
         (get_local $7)
        )
       )
       (get_local $3)
      )
     )
     (set_local $8
      (get_local $7)
     )
     (set_local $7
      (tee_local $6
       (i32.add
        (get_local $7)
        (i32.const -24)
       )
      )
     )
     (br_if $label$3
      (i32.ne
       (i32.add
        (get_local $6)
        (get_local $5)
       )
       (i32.const -24)
      )
     )
    )
   )
   (block $label$4
    (block $label$5
     (br_if $label$5
      (i32.eq
       (get_local $8)
       (get_local $4)
      )
     )
     (call $eosio_assert
      (i32.eq
       (i32.load
        (i32.add
         (tee_local $7
          (i32.load
           (i32.add
            (get_local $8)
            (i32.const -24)
           )
          )
         )
         (i32.const 92)
        )
       )
       (get_local $2)
      )
      (i32.const 32)
     )
     (br $label$4)
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=92
       (tee_local $7
        (call $_ZNK5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE31load_object_by_primary_iteratorEl
         (get_local $2)
         (call $db_find_i64
          (i64.load
           (get_local $2)
          )
          (i64.load offset=8
           (get_local $2)
          )
          (i64.const -5915305344019464192)
          (get_local $3)
         )
        )
       )
      )
      (get_local $2)
     )
     (i32.const 32)
    )
   )
   (i32.store offset=100
    (get_local $7)
    (get_local $1)
   )
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
   (get_local $7)
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $9)
    (i32.const 16)
   )
  )
  (get_local $0)
 )
 (func $_ZNSt3__16__sortIRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEvT0_S9_T_ (param $0 i32) (param $1 i32) (param $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i64)
  (local $10 i64)
  (local $11 i32)
  (local $12 i64)
  (local $13 i32)
  (local $14 i32)
  (local $15 i32)
  (local $16 i32)
  (local $17 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $17
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (loop $label$0
   (set_local $7
    (i32.sub
     (i32.const 0)
     (get_local $1)
    )
   )
   (set_local $6
    (i32.add
     (get_local $1)
     (i32.const -8)
    )
   )
   (set_local $5
    (i32.add
     (get_local $1)
     (i32.const -112)
    )
   )
   (set_local $4
    (i32.add
     (get_local $1)
     (i32.const -56)
    )
   )
   (block $label$1
    (block $label$2
     (loop $label$3
      (set_local $8
       (get_local $0)
      )
      (block $label$4
       (block $label$5
        (loop $label$6
         (block $label$7
          (block $label$8
           (block $label$9
            (br_if $label$9
             (i32.le_u
              (tee_local $0
               (i32.div_s
                (tee_local $11
                 (i32.sub
                  (get_local $1)
                  (get_local $8)
                 )
                )
                (i32.const 56)
               )
              )
              (i32.const 5)
             )
            )
            (block $label$10
             (br_if $label$10
              (i32.le_s
               (get_local $11)
               (i32.const 391)
              )
             )
             (set_local $13
              (i32.add
               (get_local $8)
               (tee_local $0
                (i32.mul
                 (i32.div_u
                  (get_local $11)
                  (i32.const 112)
                 )
                 (i32.const 56)
                )
               )
              )
             )
             (block $label$11
              (block $label$12
               (br_if $label$12
                (i32.lt_s
                 (get_local $11)
                 (i32.const 55945)
                )
               )
               (set_local $15
                (call $_ZNSt3__17__sort5IRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEjT0_S9_S9_S9_S9_T_
                 (get_local $8)
                 (i32.add
                  (get_local $8)
                  (tee_local $11
                   (i32.mul
                    (i32.div_u
                     (get_local $11)
                     (i32.const 224)
                    )
                    (i32.const 56)
                   )
                  )
                 )
                 (get_local $13)
                 (i32.add
                  (get_local $13)
                  (get_local $11)
                 )
                 (get_local $4)
                 (get_local $2)
                )
               )
               (br $label$11)
              )
              (set_local $15
               (call $_ZNSt3__17__sort3IRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEjT0_S9_S9_T_
                (get_local $8)
                (get_local $13)
                (get_local $4)
                (get_local $2)
               )
              )
             )
             (br_if $label$5
              (i64.lt_u
               (tee_local $9
                (i64.load
                 (get_local $8)
                )
               )
               (tee_local $10
                (i64.load
                 (get_local $13)
                )
               )
              )
             )
             (block $label$13
              (br_if $label$13
               (i64.lt_u
                (get_local $10)
                (get_local $9)
               )
              )
              (br_if $label$5
               (i32.lt_u
                (i32.load16_u offset=48
                 (get_local $8)
                )
                (i32.load16_u offset=48
                 (i32.add
                  (get_local $8)
                  (get_local $0)
                 )
                )
               )
              )
             )
             (block $label$14
              (br_if $label$14
               (i32.eq
                (get_local $8)
                (get_local $5)
               )
              )
              (set_local $11
               (i32.add
                (i32.add
                 (get_local $8)
                 (get_local $0)
                )
                (i32.const 48)
               )
              )
              (set_local $16
               (get_local $5)
              )
              (loop $label$15
               (br_if $label$8
                (i64.lt_u
                 (tee_local $12
                  (i64.load
                   (get_local $16)
                  )
                 )
                 (get_local $10)
                )
               )
               (block $label$16
                (br_if $label$16
                 (i64.lt_u
                  (get_local $10)
                  (get_local $12)
                 )
                )
                (br_if $label$8
                 (i32.lt_u
                  (i32.load16_u
                   (i32.add
                    (get_local $16)
                    (i32.const 48)
                   )
                  )
                  (i32.load16_u
                   (get_local $11)
                  )
                 )
                )
               )
               (br_if $label$15
                (i32.ne
                 (get_local $8)
                 (tee_local $16
                  (i32.add
                   (get_local $16)
                   (i32.const -56)
                  )
                 )
                )
               )
              )
             )
             (set_local $0
              (i32.add
               (get_local $8)
               (i32.const 56)
              )
             )
             (block $label$17
              (br_if $label$17
               (i64.lt_u
                (get_local $9)
                (tee_local $10
                 (i64.load
                  (get_local $4)
                 )
                )
               )
              )
              (block $label$18
               (br_if $label$18
                (i64.lt_u
                 (get_local $10)
                 (get_local $9)
                )
               )
               (br_if $label$17
                (i32.lt_u
                 (i32.load16_u offset=48
                  (get_local $8)
                 )
                 (i32.load16_u
                  (get_local $6)
                 )
                )
               )
              )
              (br_if $label$2
               (i32.eq
                (get_local $0)
                (get_local $4)
               )
              )
              (block $label$19
               (loop $label$20
                (br_if $label$19
                 (i64.lt_u
                  (get_local $9)
                  (tee_local $10
                   (i64.load
                    (get_local $0)
                   )
                  )
                 )
                )
                (block $label$21
                 (br_if $label$21
                  (i64.lt_u
                   (get_local $10)
                   (get_local $9)
                  )
                 )
                 (br_if $label$19
                  (i32.lt_u
                   (i32.load16_u
                    (i32.add
                     (get_local $8)
                     (i32.const 48)
                    )
                   )
                   (i32.load16_u
                    (i32.add
                     (get_local $0)
                     (i32.const 48)
                    )
                   )
                  )
                 )
                )
                (br_if $label$20
                 (i32.ne
                  (i32.add
                   (tee_local $0
                    (i32.add
                     (get_local $0)
                     (i32.const 56)
                    )
                   )
                   (get_local $7)
                  )
                  (i32.const -56)
                 )
                )
                (br $label$2)
               )
              )
              (set_local $13
               (call $memcpy
                (get_local $17)
                (get_local $0)
                (i32.const 48)
               )
              )
              (set_local $11
               (call $memcpy
                (get_local $0)
                (get_local $4)
                (i32.const 48)
               )
              )
              (drop
               (call $memcpy
                (get_local $4)
                (get_local $13)
                (i32.const 48)
               )
              )
              (set_local $13
               (i32.load16_u
                (tee_local $0
                 (i32.add
                  (get_local $11)
                  (i32.const 48)
                 )
                )
               )
              )
              (i32.store16
               (get_local $0)
               (i32.load16_u
                (get_local $6)
               )
              )
              (i32.store16
               (get_local $6)
               (get_local $13)
              )
              (set_local $0
               (i32.add
                (get_local $11)
                (i32.const 56)
               )
              )
             )
             (br_if $label$2
              (i32.eq
               (get_local $0)
               (get_local $4)
              )
             )
             (set_local $11
              (get_local $4)
             )
             (loop $label$22
              (block $label$23
               (br_if $label$23
                (i64.lt_u
                 (tee_local $10
                  (i64.load
                   (get_local $8)
                  )
                 )
                 (tee_local $12
                  (i64.load
                   (get_local $0)
                  )
                 )
                )
               )
               (loop $label$24
                (block $label$25
                 (br_if $label$25
                  (i64.lt_u
                   (get_local $12)
                   (get_local $10)
                  )
                 )
                 (br_if $label$23
                  (i32.lt_u
                   (i32.load16_u
                    (i32.add
                     (get_local $8)
                     (i32.const 48)
                    )
                   )
                   (i32.load16_u
                    (i32.add
                     (get_local $0)
                     (i32.const 48)
                    )
                   )
                  )
                 )
                )
                (br_if $label$24
                 (i64.ge_u
                  (get_local $10)
                  (tee_local $12
                   (i64.load
                    (tee_local $0
                     (i32.add
                      (get_local $0)
                      (i32.const 56)
                     )
                    )
                   )
                  )
                 )
                )
               )
              )
              (loop $label$26
               (br_if $label$26
                (i64.lt_u
                 (get_local $10)
                 (tee_local $12
                  (i64.load
                   (tee_local $11
                    (i32.add
                     (get_local $11)
                     (i32.const -56)
                    )
                   )
                  )
                 )
                )
               )
               (block $label$27
                (br_if $label$27
                 (i64.lt_u
                  (get_local $12)
                  (get_local $10)
                 )
                )
                (br_if $label$26
                 (i32.lt_u
                  (i32.load16_u
                   (i32.add
                    (get_local $8)
                    (i32.const 48)
                   )
                  )
                  (i32.load16_u
                   (i32.add
                    (get_local $11)
                    (i32.const 48)
                   )
                  )
                 )
                )
               )
              )
              (br_if $label$7
               (i32.ge_u
                (get_local $0)
                (get_local $11)
               )
              )
              (set_local $13
               (call $memcpy
                (get_local $17)
                (get_local $0)
                (i32.const 48)
               )
              )
              (drop
               (call $memcpy
                (get_local $0)
                (get_local $11)
                (i32.const 48)
               )
              )
              (set_local $13
               (call $memcpy
                (get_local $11)
                (get_local $13)
                (i32.const 48)
               )
              )
              (set_local $16
               (i32.load16_u offset=48
                (get_local $0)
               )
              )
              (i32.store16 offset=48
               (get_local $0)
               (i32.load16_u
                (tee_local $13
                 (i32.add
                  (get_local $13)
                  (i32.const 48)
                 )
                )
               )
              )
              (i32.store16
               (get_local $13)
               (get_local $16)
              )
              (set_local $0
               (i32.add
                (get_local $0)
                (i32.const 56)
               )
              )
              (br $label$22)
             )
            )
            (drop
             (call $_ZNSt3__17__sort3IRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEjT0_S9_S9_T_
              (get_local $8)
              (i32.add
               (get_local $8)
               (i32.const 56)
              )
              (tee_local $14
               (i32.add
                (get_local $8)
                (i32.const 112)
               )
              )
              (get_local $2)
             )
            )
            (br_if $label$2
             (i32.eq
              (tee_local $11
               (i32.add
                (get_local $8)
                (i32.const 168)
               )
              )
              (get_local $1)
             )
            )
            (set_local $7
             (i32.const 0)
            )
            (loop $label$28
             (set_local $0
              (get_local $14)
             )
             (block $label$29
              (block $label$30
               (block $label$31
                (br_if $label$31
                 (i64.ge_u
                  (tee_local $10
                   (i64.load
                    (tee_local $14
                     (get_local $11)
                    )
                   )
                  )
                  (tee_local $12
                   (i64.load
                    (get_local $0)
                   )
                  )
                 )
                )
                (set_local $3
                 (i32.add
                  (get_local $0)
                  (i32.const 48)
                 )
                )
                (set_local $4
                 (i32.load16_u offset=48
                  (get_local $14)
                 )
                )
                (br $label$30)
               )
               (br_if $label$29
                (i64.lt_u
                 (get_local $12)
                 (get_local $10)
                )
               )
               (br_if $label$29
                (i32.ge_u
                 (tee_local $4
                  (i32.load16_u offset=48
                   (get_local $14)
                  )
                 )
                 (i32.load16_u offset=48
                  (get_local $0)
                 )
                )
               )
               (set_local $3
                (i32.add
                 (get_local $0)
                 (i32.const 48)
                )
               )
              )
              (set_local $2
               (call $memcpy
                (get_local $17)
                (i32.add
                 (get_local $14)
                 (i32.const 8)
                )
                (i32.const 40)
               )
              )
              (i32.store16
               (i32.add
                (call $memcpy
                 (get_local $14)
                 (get_local $0)
                 (i32.const 48)
                )
                (i32.const 48)
               )
               (i32.load16_u
                (i32.add
                 (get_local $0)
                 (i32.const 48)
                )
               )
              )
              (block $label$32
               (block $label$33
                (block $label$34
                 (br_if $label$34
                  (i32.eq
                   (get_local $0)
                   (get_local $8)
                  )
                 )
                 (set_local $13
                  (get_local $7)
                 )
                 (loop $label$35
                  (block $label$36
                   (block $label$37
                    (br_if $label$37
                     (i64.ge_u
                      (get_local $10)
                      (tee_local $12
                       (i64.load
                        (tee_local $16
                         (i32.add
                          (tee_local $11
                           (i32.add
                            (get_local $8)
                            (get_local $13)
                           )
                          )
                          (i32.const 56)
                         )
                        )
                       )
                      )
                     )
                    )
                    (set_local $15
                     (i32.load16_u
                      (tee_local $3
                       (i32.add
                        (get_local $11)
                        (i32.const 104)
                       )
                      )
                     )
                    )
                    (br $label$36)
                   )
                   (br_if $label$32
                    (i64.lt_u
                     (get_local $12)
                     (get_local $10)
                    )
                   )
                   (br_if $label$33
                    (i32.ge_u
                     (i32.and
                      (get_local $4)
                      (i32.const 65535)
                     )
                     (tee_local $15
                      (i32.load16_u
                       (i32.add
                        (get_local $11)
                        (i32.const 104)
                       )
                      )
                     )
                    )
                   )
                   (set_local $3
                    (i32.add
                     (get_local $0)
                     (i32.const -8)
                    )
                   )
                  )
                  (set_local $0
                   (i32.add
                    (get_local $0)
                    (i32.const -56)
                   )
                  )
                  (drop
                   (call $memcpy
                    (i32.add
                     (get_local $11)
                     (i32.const 112)
                    )
                    (get_local $16)
                    (i32.const 48)
                   )
                  )
                  (i32.store16
                   (i32.add
                    (get_local $11)
                    (i32.const 160)
                   )
                   (get_local $15)
                  )
                  (br_if $label$35
                   (i32.ne
                    (tee_local $13
                     (i32.add
                      (get_local $13)
                      (i32.const -56)
                     )
                    )
                    (i32.const -112)
                   )
                  )
                 )
                 (set_local $0
                  (get_local $8)
                 )
                 (br $label$32)
                )
                (set_local $0
                 (get_local $8)
                )
                (br $label$32)
               )
               (set_local $0
                (i32.add
                 (get_local $11)
                 (i32.const 112)
                )
               )
              )
              (i64.store
               (get_local $0)
               (get_local $10)
              )
              (drop
               (call $memcpy
                (i32.add
                 (get_local $0)
                 (i32.const 8)
                )
                (get_local $2)
                (i32.const 40)
               )
              )
              (i32.store16
               (get_local $3)
               (get_local $4)
              )
             )
             (set_local $7
              (i32.add
               (get_local $7)
               (i32.const 56)
              )
             )
             (br_if $label$28
              (i32.ne
               (tee_local $11
                (i32.add
                 (get_local $14)
                 (i32.const 56)
                )
               )
               (get_local $1)
              )
             )
             (br $label$2)
            )
           )
           (block $label$38
            (block $label$39
             (block $label$40
              (block $label$41
               (br_table $label$2 $label$2 $label$41 $label$40 $label$39 $label$38 $label$2
                (get_local $0)
               )
              )
              (block $label$42
               (br_if $label$42
                (i64.lt_u
                 (tee_local $10
                  (i64.load
                   (get_local $4)
                  )
                 )
                 (tee_local $12
                  (i64.load
                   (get_local $8)
                  )
                 )
                )
               )
               (br_if $label$2
                (i64.lt_u
                 (get_local $12)
                 (get_local $10)
                )
               )
               (br_if $label$2
                (i32.ge_u
                 (i32.load16_u
                  (get_local $6)
                 )
                 (i32.load16_u offset=48
                  (get_local $8)
                 )
                )
               )
              )
              (set_local $11
               (call $memcpy
                (get_local $17)
                (get_local $8)
                (i32.const 48)
               )
              )
              (set_local $0
               (call $memcpy
                (get_local $8)
                (get_local $4)
                (i32.const 48)
               )
              )
              (drop
               (call $memcpy
                (get_local $4)
                (get_local $11)
                (i32.const 48)
               )
              )
              (set_local $0
               (i32.load16_u
                (tee_local $11
                 (i32.add
                  (get_local $0)
                  (i32.const 48)
                 )
                )
               )
              )
              (i32.store16
               (get_local $11)
               (i32.load16_u
                (get_local $6)
               )
              )
              (i32.store16
               (get_local $6)
               (get_local $0)
              )
              (br $label$2)
             )
             (drop
              (call $_ZNSt3__17__sort3IRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEjT0_S9_S9_T_
               (get_local $8)
               (i32.add
                (get_local $8)
                (i32.const 56)
               )
               (get_local $4)
               (get_local $2)
              )
             )
             (br $label$2)
            )
            (drop
             (call $_ZNSt3__17__sort4IRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEjT0_S9_S9_S9_T_
              (get_local $8)
              (i32.add
               (get_local $8)
               (i32.const 56)
              )
              (i32.add
               (get_local $8)
               (i32.const 112)
              )
              (get_local $4)
              (get_local $2)
             )
            )
            (br $label$2)
           )
           (drop
            (call $_ZNSt3__17__sort5IRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEjT0_S9_S9_S9_S9_T_
             (get_local $8)
             (i32.add
              (get_local $8)
              (i32.const 56)
             )
             (i32.add
              (get_local $8)
              (i32.const 112)
             )
             (i32.add
              (get_local $8)
              (i32.const 168)
             )
             (get_local $4)
             (get_local $2)
            )
           )
           (br $label$2)
          )
          (set_local $0
           (call $memcpy
            (get_local $17)
            (get_local $8)
            (i32.const 48)
           )
          )
          (set_local $11
           (call $memcpy
            (get_local $8)
            (get_local $16)
            (i32.const 48)
           )
          )
          (set_local $0
           (call $memcpy
            (get_local $16)
            (get_local $0)
            (i32.const 48)
           )
          )
          (set_local $3
           (i32.load16_u offset=48
            (get_local $11)
           )
          )
          (i32.store16 offset=48
           (get_local $11)
           (i32.load16_u
            (tee_local $0
             (i32.add
              (get_local $0)
              (i32.const 48)
             )
            )
           )
          )
          (i32.store16
           (get_local $0)
           (get_local $3)
          )
          (set_local $15
           (i32.add
            (get_local $15)
            (i32.const 1)
           )
          )
          (br $label$4)
         )
         (set_local $8
          (get_local $0)
         )
         (br $label$6)
        )
       )
       (set_local $16
        (get_local $4)
       )
      )
      (block $label$43
       (br_if $label$43
        (i32.ge_u
         (tee_local $11
          (i32.add
           (get_local $8)
           (i32.const 56)
          )
         )
         (get_local $16)
        )
       )
       (loop $label$44
        (set_local $10
         (i64.load
          (get_local $13)
         )
        )
        (block $label$45
         (loop $label$46
          (block $label$47
           (br_if $label$47
            (i64.lt_u
             (tee_local $12
              (i64.load
               (get_local $11)
              )
             )
             (get_local $10)
            )
           )
           (br_if $label$45
            (i64.lt_u
             (get_local $10)
             (get_local $12)
            )
           )
           (br_if $label$45
            (i32.ge_u
             (i32.load16_u
              (i32.add
               (get_local $11)
               (i32.const 48)
              )
             )
             (i32.load16_u
              (i32.add
               (get_local $13)
               (i32.const 48)
              )
             )
            )
           )
          )
          (set_local $11
           (i32.add
            (get_local $11)
            (i32.const 56)
           )
          )
          (br $label$46)
         )
        )
        (block $label$48
         (br_if $label$48
          (i64.lt_u
           (tee_local $12
            (i64.load
             (tee_local $0
              (i32.add
               (get_local $16)
               (i32.const -56)
              )
             )
            )
           )
           (get_local $10)
          )
         )
         (block $label$49
          (loop $label$50
           (block $label$51
            (br_if $label$51
             (i64.lt_u
              (get_local $10)
              (get_local $12)
             )
            )
            (br_if $label$49
             (i32.lt_u
              (i32.load16_u
               (i32.add
                (get_local $0)
                (i32.const 48)
               )
              )
              (i32.load16_u
               (i32.add
                (get_local $13)
                (i32.const 48)
               )
              )
             )
            )
           )
           (br_if $label$50
            (i64.ge_u
             (tee_local $12
              (i64.load
               (tee_local $0
                (i32.add
                 (get_local $0)
                 (i32.const -56)
                )
               )
              )
             )
             (get_local $10)
            )
           )
          )
         )
         (set_local $16
          (i32.add
           (get_local $0)
           (i32.const 56)
          )
         )
        )
        (br_if $label$43
         (i32.gt_u
          (get_local $11)
          (get_local $0)
         )
        )
        (set_local $3
         (call $memcpy
          (get_local $17)
          (get_local $11)
          (i32.const 48)
         )
        )
        (drop
         (call $memcpy
          (get_local $11)
          (get_local $0)
          (i32.const 48)
         )
        )
        (drop
         (call $memcpy
          (get_local $0)
          (get_local $3)
          (i32.const 48)
         )
        )
        (set_local $14
         (i32.load16_u
          (tee_local $3
           (i32.add
            (get_local $11)
            (i32.const 48)
           )
          )
         )
        )
        (i32.store16
         (get_local $3)
         (i32.load16_u
          (tee_local $16
           (i32.add
            (get_local $16)
            (i32.const -8)
           )
          )
         )
        )
        (i32.store16
         (get_local $16)
         (get_local $14)
        )
        (set_local $13
         (select
          (get_local $0)
          (get_local $13)
          (i32.eq
           (get_local $13)
           (get_local $11)
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 56)
         )
        )
        (set_local $15
         (i32.add
          (get_local $15)
          (i32.const 1)
         )
        )
        (set_local $16
         (get_local $0)
        )
        (br $label$44)
       )
      )
      (block $label$52
       (br_if $label$52
        (i32.eq
         (get_local $11)
         (get_local $13)
        )
       )
       (block $label$53
        (br_if $label$53
         (i64.lt_u
          (tee_local $10
           (i64.load
            (get_local $13)
           )
          )
          (tee_local $12
           (i64.load
            (get_local $11)
           )
          )
         )
        )
        (br_if $label$52
         (i64.lt_u
          (get_local $12)
          (get_local $10)
         )
        )
        (br_if $label$52
         (i32.ge_u
          (i32.load16_u offset=48
           (get_local $13)
          )
          (i32.load16_u offset=48
           (get_local $11)
          )
         )
        )
       )
       (set_local $0
        (call $memcpy
         (get_local $17)
         (get_local $11)
         (i32.const 48)
        )
       )
       (set_local $16
        (call $memcpy
         (get_local $11)
         (get_local $13)
         (i32.const 48)
        )
       )
       (set_local $0
        (call $memcpy
         (get_local $13)
         (get_local $0)
         (i32.const 48)
        )
       )
       (set_local $16
        (i32.load16_u
         (tee_local $13
          (i32.add
           (get_local $16)
           (i32.const 48)
          )
         )
        )
       )
       (i32.store16
        (get_local $13)
        (i32.load16_u
         (tee_local $0
          (i32.add
           (get_local $0)
           (i32.const 48)
          )
         )
        )
       )
       (i32.store16
        (get_local $0)
        (get_local $16)
       )
       (set_local $15
        (i32.add
         (get_local $15)
         (i32.const 1)
        )
       )
      )
      (block $label$54
       (block $label$55
        (br_if $label$55
         (get_local $15)
        )
        (set_local $13
         (call $_ZNSt3__127__insertion_sort_incompleteIRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEbT0_S9_T_
          (get_local $8)
          (get_local $11)
          (get_local $2)
         )
        )
        (br_if $label$54
         (call $_ZNSt3__127__insertion_sort_incompleteIRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEbT0_S9_T_
          (tee_local $0
           (i32.add
            (get_local $11)
            (i32.const 56)
           )
          )
          (get_local $1)
          (get_local $2)
         )
        )
        (br_if $label$3
         (get_local $13)
        )
       )
       (br_if $label$1
        (i32.ge_s
         (i32.sub
          (get_local $11)
          (get_local $8)
         )
         (i32.sub
          (get_local $1)
          (get_local $11)
         )
        )
       )
       (call $_ZNSt3__16__sortIRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEvT0_S9_T_
        (get_local $8)
        (get_local $11)
        (get_local $2)
       )
       (set_local $0
        (i32.add
         (get_local $11)
         (i32.const 56)
        )
       )
       (br $label$3)
      )
     )
     (set_local $1
      (get_local $11)
     )
     (set_local $0
      (get_local $8)
     )
     (br_if $label$0
      (i32.eqz
       (get_local $13)
      )
     )
    )
    (i32.store offset=4
     (i32.const 0)
     (i32.add
      (get_local $17)
      (i32.const 48)
     )
    )
    (return)
   )
   (call $_ZNSt3__16__sortIRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEvT0_S9_T_
    (i32.add
     (get_local $11)
     (i32.const 56)
    )
    (get_local $1)
    (get_local $2)
   )
   (set_local $1
    (get_local $11)
   )
   (set_local $0
    (get_local $8)
   )
   (br $label$0)
  )
 )
 (func $_ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (block $label$0
   (block $label$1
    (block $label$2
     (block $label$3
      (block $label$4
       (br_if $label$4
        (i32.ge_u
         (i32.sub
          (tee_local $2
           (i32.load offset=8
            (get_local $0)
           )
          )
          (tee_local $6
           (i32.load offset=4
            (get_local $0)
           )
          )
         )
         (get_local $1)
        )
       )
       (br_if $label$2
        (i32.le_s
         (tee_local $4
          (i32.add
           (tee_local $3
            (i32.sub
             (get_local $6)
             (tee_local $5
              (i32.load
               (get_local $0)
              )
             )
            )
           )
           (get_local $1)
          )
         )
         (i32.const -1)
        )
       )
       (set_local $6
        (i32.const 2147483647)
       )
       (block $label$5
        (br_if $label$5
         (i32.gt_u
          (tee_local $2
           (i32.sub
            (get_local $2)
            (get_local $5)
           )
          )
          (i32.const 1073741822)
         )
        )
        (br_if $label$3
         (i32.eqz
          (tee_local $6
           (select
            (get_local $4)
            (tee_local $6
             (i32.shl
              (get_local $2)
              (i32.const 1)
             )
            )
            (i32.lt_u
             (get_local $6)
             (get_local $4)
            )
           )
          )
         )
        )
       )
       (set_local $2
        (call $_Znwj
         (get_local $6)
        )
       )
       (br $label$1)
      )
      (set_local $0
       (i32.add
        (get_local $0)
        (i32.const 4)
       )
      )
      (loop $label$6
       (i32.store8
        (get_local $6)
        (i32.const 0)
       )
       (i32.store
        (get_local $0)
        (tee_local $6
         (i32.add
          (i32.load
           (get_local $0)
          )
          (i32.const 1)
         )
        )
       )
       (br_if $label$6
        (tee_local $1
         (i32.add
          (get_local $1)
          (i32.const -1)
         )
        )
       )
       (br $label$0)
      )
     )
     (set_local $6
      (i32.const 0)
     )
     (set_local $2
      (i32.const 0)
     )
     (br $label$1)
    )
    (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
     (get_local $0)
    )
    (unreachable)
   )
   (set_local $4
    (i32.add
     (get_local $2)
     (get_local $6)
    )
   )
   (set_local $6
    (tee_local $5
     (i32.add
      (get_local $2)
      (get_local $3)
     )
    )
   )
   (loop $label$7
    (i32.store8
     (get_local $6)
     (i32.const 0)
    )
    (set_local $6
     (i32.add
      (get_local $6)
      (i32.const 1)
     )
    )
    (br_if $label$7
     (tee_local $1
      (i32.add
       (get_local $1)
       (i32.const -1)
      )
     )
    )
   )
   (set_local $5
    (i32.sub
     (get_local $5)
     (tee_local $2
      (i32.sub
       (i32.load
        (tee_local $3
         (i32.add
          (get_local $0)
          (i32.const 4)
         )
        )
       )
       (tee_local $1
        (i32.load
         (get_local $0)
        )
       )
      )
     )
    )
   )
   (block $label$8
    (br_if $label$8
     (i32.lt_s
      (get_local $2)
      (i32.const 1)
     )
    )
    (drop
     (call $memcpy
      (get_local $5)
      (get_local $1)
      (get_local $2)
     )
    )
    (set_local $1
     (i32.load
      (get_local $0)
     )
    )
   )
   (i32.store
    (get_local $0)
    (get_local $5)
   )
   (i32.store
    (get_local $3)
    (get_local $6)
   )
   (i32.store
    (i32.add
     (get_local $0)
     (i32.const 8)
    )
    (get_local $4)
   )
   (br_if $label$0
    (i32.eqz
     (get_local $1)
    )
   )
   (call $_ZdlPv
    (get_local $1)
   )
   (return)
  )
 )
 (func $_ZN5eosiolsINS_10datastreamIPcEENS_12producer_keyEEERT_S6_RKNSt3__16vectorIT0_NS7_9allocatorIS9_EEEE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i64)
  (local $7 i32)
  (local $8 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $8
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (set_local $6
   (i64.extend_u/i32
    (i32.div_s
     (i32.sub
      (i32.load offset=4
       (get_local $1)
      )
      (i32.load
       (get_local $1)
      )
     )
     (i32.const 48)
    )
   )
  )
  (set_local $7
   (i32.load offset=4
    (get_local $0)
   )
  )
  (set_local $3
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
  )
  (set_local $4
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
  )
  (loop $label$0
   (set_local $5
    (i32.wrap/i64
     (get_local $6)
    )
   )
   (i32.store8 offset=15
    (get_local $8)
    (i32.or
     (i32.shl
      (tee_local $2
       (i64.ne
        (tee_local $6
         (i64.shr_u
          (get_local $6)
          (i64.const 7)
         )
        )
        (i64.const 0)
       )
      )
      (i32.const 7)
     )
     (i32.and
      (get_local $5)
      (i32.const 127)
     )
    )
   )
   (call $eosio_assert
    (i32.gt_s
     (i32.sub
      (i32.load
       (get_local $3)
      )
      (get_local $7)
     )
     (i32.const 0)
    )
    (i32.const 320)
   )
   (drop
    (call $memcpy
     (i32.load
      (get_local $4)
     )
     (i32.add
      (get_local $8)
      (i32.const 15)
     )
     (i32.const 1)
    )
   )
   (i32.store
    (get_local $4)
    (tee_local $7
     (i32.add
      (i32.load
       (get_local $4)
      )
      (i32.const 1)
     )
    )
   )
   (br_if $label$0
    (get_local $2)
   )
  )
  (block $label$1
   (br_if $label$1
    (i32.eq
     (tee_local $4
      (i32.load
       (get_local $1)
      )
     )
     (tee_local $2
      (i32.load
       (i32.add
        (get_local $1)
        (i32.const 4)
       )
      )
     )
    )
   )
   (set_local $5
    (i32.add
     (get_local $0)
     (i32.const 4)
    )
   )
   (loop $label$2
    (call $eosio_assert
     (i32.gt_s
      (i32.sub
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 8)
        )
       )
       (get_local $7)
      )
      (i32.const 7)
     )
     (i32.const 320)
    )
    (drop
     (call $memcpy
      (i32.load
       (get_local $5)
      )
      (get_local $4)
      (i32.const 8)
     )
    )
    (i32.store
     (get_local $5)
     (i32.add
      (i32.load
       (get_local $5)
      )
      (i32.const 8)
     )
    )
    (drop
     (call $_ZN5eosiolsINS_10datastreamIPcEEEERT_S5_RKNS_10public_keyE
      (get_local $0)
      (i32.add
       (get_local $4)
       (i32.const 8)
      )
     )
    )
    (br_if $label$1
     (i32.eq
      (tee_local $4
       (i32.add
        (get_local $4)
        (i32.const 48)
       )
      )
      (get_local $2)
     )
    )
    (set_local $7
     (i32.load
      (get_local $5)
     )
    )
    (br $label$2)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
  (get_local $0)
 )
 (func $_ZNSt3__16vectorIN5eosio12producer_keyENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.ge_u
      (tee_local $7
       (i32.add
        (tee_local $2
         (i32.div_s
          (i32.sub
           (tee_local $5
            (i32.load offset=4
             (get_local $0)
            )
           )
           (tee_local $4
            (i32.load
             (get_local $0)
            )
           )
          )
          (i32.const 48)
         )
        )
        (i32.const 1)
       )
      )
      (i32.const 89478486)
     )
    )
    (set_local $6
     (i32.const 89478485)
    )
    (block $label$2
     (block $label$3
      (br_if $label$3
       (i32.gt_u
        (tee_local $3
         (i32.div_s
          (i32.sub
           (i32.load offset=8
            (get_local $0)
           )
           (get_local $4)
          )
          (i32.const 48)
         )
        )
        (i32.const 44739241)
       )
      )
      (br_if $label$2
       (i32.eqz
        (tee_local $6
         (select
          (get_local $7)
          (tee_local $6
           (i32.shl
            (get_local $3)
            (i32.const 1)
           )
          )
          (i32.lt_u
           (get_local $6)
           (get_local $7)
          )
         )
        )
       )
      )
     )
     (set_local $7
      (call $_Znwj
       (i32.mul
        (get_local $6)
        (i32.const 48)
       )
      )
     )
     (set_local $5
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 4)
       )
      )
     )
     (set_local $4
      (i32.load
       (get_local $0)
      )
     )
     (br $label$0)
    )
    (set_local $6
     (i32.const 0)
    )
    (set_local $7
     (i32.const 0)
    )
    (br $label$0)
   )
   (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
    (get_local $0)
   )
   (unreachable)
  )
  (set_local $1
   (i32.add
    (tee_local $2
     (call $memcpy
      (i32.add
       (get_local $7)
       (i32.mul
        (get_local $2)
        (i32.const 48)
       )
      )
      (get_local $1)
      (i32.const 48)
     )
    )
    (i32.mul
     (i32.div_s
      (tee_local $5
       (i32.sub
        (get_local $5)
        (get_local $4)
       )
      )
      (i32.const -48)
     )
     (i32.const 48)
    )
   )
  )
  (set_local $6
   (i32.add
    (get_local $7)
    (i32.mul
     (get_local $6)
     (i32.const 48)
    )
   )
  )
  (set_local $7
   (i32.add
    (get_local $2)
    (i32.const 48)
   )
  )
  (block $label$4
   (br_if $label$4
    (i32.lt_s
     (get_local $5)
     (i32.const 1)
    )
   )
   (drop
    (call $memcpy
     (get_local $1)
     (get_local $4)
     (get_local $5)
    )
   )
   (set_local $4
    (i32.load
     (get_local $0)
    )
   )
  )
  (i32.store
   (get_local $0)
   (get_local $1)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
   (get_local $7)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
   (get_local $6)
  )
  (block $label$5
   (br_if $label$5
    (i32.eqz
     (get_local $4)
    )
   )
   (call $_ZdlPv
    (get_local $4)
   )
  )
 )
 (func $_ZN5eosiolsINS_10datastreamIPcEEEERT_S5_RKNS_10public_keyE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i64)
  (local $7 i32)
  (local $8 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $8
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (set_local $7
   (i32.load offset=4
    (get_local $0)
   )
  )
  (set_local $6
   (i64.load32_u
    (get_local $1)
   )
  )
  (set_local $3
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
  )
  (set_local $4
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
  )
  (loop $label$0
   (set_local $5
    (i32.wrap/i64
     (get_local $6)
    )
   )
   (i32.store8 offset=15
    (get_local $8)
    (i32.or
     (i32.shl
      (tee_local $2
       (i64.ne
        (tee_local $6
         (i64.shr_u
          (get_local $6)
          (i64.const 7)
         )
        )
        (i64.const 0)
       )
      )
      (i32.const 7)
     )
     (i32.and
      (get_local $5)
      (i32.const 127)
     )
    )
   )
   (call $eosio_assert
    (i32.gt_s
     (i32.sub
      (i32.load
       (get_local $3)
      )
      (get_local $7)
     )
     (i32.const 0)
    )
    (i32.const 320)
   )
   (drop
    (call $memcpy
     (i32.load
      (get_local $4)
     )
     (i32.add
      (get_local $8)
      (i32.const 15)
     )
     (i32.const 1)
    )
   )
   (i32.store
    (get_local $4)
    (tee_local $7
     (i32.add
      (i32.load
       (get_local $4)
      )
      (i32.const 1)
     )
    )
   )
   (br_if $label$0
    (get_local $2)
   )
  )
  (set_local $2
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
  )
  (set_local $4
   (i32.const 4)
  )
  (loop $label$1
   (call $eosio_assert
    (i32.gt_s
     (i32.sub
      (i32.load
       (get_local $2)
      )
      (get_local $7)
     )
     (i32.const 0)
    )
    (i32.const 320)
   )
   (drop
    (call $memcpy
     (i32.load
      (tee_local $5
       (i32.add
        (get_local $0)
        (i32.const 4)
       )
      )
     )
     (i32.add
      (get_local $1)
      (get_local $4)
     )
     (i32.const 1)
    )
   )
   (i32.store
    (get_local $5)
    (tee_local $7
     (i32.add
      (i32.load
       (get_local $5)
      )
      (i32.const 1)
     )
    )
   )
   (br_if $label$1
    (i32.ne
     (tee_local $4
      (i32.add
       (get_local $4)
       (i32.const 1)
      )
     )
     (i32.const 37)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
  (get_local $0)
 )
 (func $_ZNSt3__17__sort3IRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEjT0_S9_S9_T_ (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32) (result i32)
  (local $4 i32)
  (local $5 i64)
  (local $6 i64)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (set_local $8
   (i32.const 1)
  )
  (set_local $7
   (i32.const 1)
  )
  (block $label$0
   (br_if $label$0
    (i64.lt_u
     (tee_local $5
      (i64.load
       (get_local $1)
      )
     )
     (tee_local $6
      (i64.load
       (get_local $0)
      )
     )
    )
   )
   (set_local $7
    (i32.const 0)
   )
   (br_if $label$0
    (i64.lt_u
     (get_local $6)
     (get_local $5)
    )
   )
   (set_local $7
    (i32.lt_u
     (i32.load16_u offset=48
      (get_local $1)
     )
     (i32.load16_u offset=48
      (get_local $0)
     )
    )
   )
  )
  (block $label$1
   (br_if $label$1
    (i64.lt_u
     (tee_local $6
      (i64.load
       (get_local $2)
      )
     )
     (get_local $5)
    )
   )
   (set_local $8
    (i32.const 0)
   )
   (br_if $label$1
    (i64.lt_u
     (get_local $5)
     (get_local $6)
    )
   )
   (set_local $8
    (i32.lt_u
     (i32.load16_u offset=48
      (get_local $2)
     )
     (i32.load16_u offset=48
      (get_local $1)
     )
    )
   )
  )
  (block $label$2
   (block $label$3
    (block $label$4
     (block $label$5
      (br_if $label$5
       (i32.eqz
        (get_local $7)
       )
      )
      (br_if $label$4
       (i32.eqz
        (get_local $8)
       )
      )
      (set_local $1
       (call $memcpy
        (get_local $9)
        (get_local $0)
        (i32.const 48)
       )
      )
      (drop
       (call $memcpy
        (get_local $0)
        (get_local $2)
        (i32.const 48)
       )
      )
      (drop
       (call $memcpy
        (get_local $2)
        (get_local $1)
        (i32.const 48)
       )
      )
      (set_local $1
       (i32.load16_u offset=48
        (get_local $0)
       )
      )
      (i32.store16 offset=48
       (get_local $0)
       (i32.load16_u offset=48
        (get_local $2)
       )
      )
      (i32.store16 offset=48
       (get_local $2)
       (get_local $1)
      )
      (set_local $7
       (i32.const 1)
      )
      (br $label$2)
     )
     (set_local $7
      (i32.const 0)
     )
     (br_if $label$2
      (i32.eqz
       (get_local $8)
      )
     )
     (set_local $8
      (call $memcpy
       (get_local $9)
       (get_local $1)
       (i32.const 48)
      )
     )
     (drop
      (call $memcpy
       (get_local $1)
       (get_local $2)
       (i32.const 48)
      )
     )
     (drop
      (call $memcpy
       (get_local $2)
       (get_local $8)
       (i32.const 48)
      )
     )
     (set_local $7
      (i32.load16_u offset=48
       (get_local $1)
      )
     )
     (i32.store16 offset=48
      (get_local $1)
      (i32.load16_u offset=48
       (get_local $2)
      )
     )
     (i32.store16 offset=48
      (get_local $2)
      (get_local $7)
     )
     (block $label$6
      (br_if $label$6
       (i64.lt_u
        (tee_local $5
         (i64.load
          (get_local $1)
         )
        )
        (tee_local $6
         (i64.load
          (get_local $0)
         )
        )
       )
      )
      (set_local $7
       (i32.const 1)
      )
      (br_if $label$2
       (i64.lt_u
        (get_local $6)
        (get_local $5)
       )
      )
      (br_if $label$2
       (i32.ge_u
        (i32.load16_u
         (i32.add
          (get_local $1)
          (i32.const 48)
         )
        )
        (i32.load16_u offset=48
         (get_local $0)
        )
       )
      )
     )
     (set_local $2
      (call $memcpy
       (get_local $8)
       (get_local $0)
       (i32.const 48)
      )
     )
     (drop
      (call $memcpy
       (get_local $0)
       (get_local $1)
       (i32.const 48)
      )
     )
     (set_local $2
      (call $memcpy
       (get_local $1)
       (get_local $2)
       (i32.const 48)
      )
     )
     (set_local $1
      (i32.load16_u
       (tee_local $0
        (i32.add
         (get_local $0)
         (i32.const 48)
        )
       )
      )
     )
     (i32.store16
      (get_local $0)
      (i32.load16_u
       (tee_local $2
        (i32.add
         (get_local $2)
         (i32.const 48)
        )
       )
      )
     )
     (i32.store16
      (get_local $2)
      (get_local $1)
     )
     (br $label$3)
    )
    (set_local $4
     (call $memcpy
      (get_local $9)
      (get_local $0)
      (i32.const 48)
     )
    )
    (set_local $8
     (call $memcpy
      (get_local $0)
      (get_local $1)
      (i32.const 48)
     )
    )
    (set_local $0
     (call $memcpy
      (get_local $1)
      (get_local $4)
      (i32.const 48)
     )
    )
    (set_local $1
     (i32.load16_u offset=48
      (get_local $8)
     )
    )
    (i32.store16 offset=48
     (get_local $8)
     (i32.load16_u offset=48
      (get_local $0)
     )
    )
    (i32.store16 offset=48
     (get_local $0)
     (get_local $1)
    )
    (block $label$7
     (br_if $label$7
      (i64.lt_u
       (tee_local $5
        (i64.load
         (get_local $2)
        )
       )
       (tee_local $6
        (i64.load
         (get_local $0)
        )
       )
      )
     )
     (set_local $7
      (i32.const 1)
     )
     (br_if $label$2
      (i64.lt_u
       (get_local $6)
       (get_local $5)
      )
     )
     (br_if $label$2
      (i32.ge_u
       (i32.load16_u offset=48
        (get_local $2)
       )
       (i32.and
        (get_local $1)
        (i32.const 65535)
       )
      )
     )
    )
    (set_local $1
     (call $memcpy
      (get_local $4)
      (get_local $0)
      (i32.const 48)
     )
    )
    (drop
     (call $memcpy
      (get_local $0)
      (get_local $2)
      (i32.const 48)
     )
    )
    (drop
     (call $memcpy
      (get_local $2)
      (get_local $1)
      (i32.const 48)
     )
    )
    (set_local $1
     (i32.load16_u
      (tee_local $0
       (i32.add
        (get_local $0)
        (i32.const 48)
       )
      )
     )
    )
    (i32.store16
     (get_local $0)
     (i32.load16_u
      (tee_local $2
       (i32.add
        (get_local $2)
        (i32.const 48)
       )
      )
     )
    )
    (i32.store16
     (get_local $2)
     (get_local $1)
    )
   )
   (set_local $7
    (i32.const 2)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $9)
    (i32.const 48)
   )
  )
  (get_local $7)
 )
 (func $_ZNSt3__17__sort4IRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEjT0_S9_S9_S9_T_ (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32) (param $4 i32) (result i32)
  (local $5 i32)
  (local $6 i64)
  (local $7 i64)
  (local $8 i32)
  (local $9 i32)
  (local $10 i32)
  (local $11 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $11
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (set_local $4
   (call $_ZNSt3__17__sort3IRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEjT0_S9_S9_T_
    (get_local $0)
    (get_local $1)
    (get_local $2)
    (get_local $4)
   )
  )
  (block $label$0
   (block $label$1
    (block $label$2
     (br_if $label$2
      (i64.ge_u
       (tee_local $6
        (i64.load
         (get_local $3)
        )
       )
       (tee_local $7
        (i64.load
         (get_local $2)
        )
       )
      )
     )
     (set_local $8
      (i32.add
       (get_local $2)
       (i32.const 48)
      )
     )
     (br $label$1)
    )
    (block $label$3
     (br_if $label$3
      (i64.lt_u
       (get_local $7)
       (get_local $6)
      )
     )
     (br_if $label$3
      (i32.ge_u
       (i32.load16_u offset=48
        (get_local $3)
       )
       (i32.load16_u offset=48
        (get_local $2)
       )
      )
     )
     (set_local $8
      (i32.add
       (get_local $2)
       (i32.const 48)
      )
     )
     (br $label$1)
    )
    (set_local $3
     (get_local $4)
    )
    (br $label$0)
   )
   (set_local $5
    (call $memcpy
     (get_local $11)
     (get_local $2)
     (i32.const 48)
    )
   )
   (drop
    (call $memcpy
     (get_local $2)
     (get_local $3)
     (i32.const 48)
    )
   )
   (drop
    (call $memcpy
     (get_local $3)
     (get_local $5)
     (i32.const 48)
    )
   )
   (set_local $10
    (i32.load16_u
     (tee_local $9
      (i32.add
       (get_local $2)
       (i32.const 48)
      )
     )
    )
   )
   (i32.store16
    (get_local $9)
    (i32.load16_u
     (tee_local $3
      (i32.add
       (get_local $3)
       (i32.const 48)
      )
     )
    )
   )
   (i32.store16
    (get_local $3)
    (get_local $10)
   )
   (block $label$4
    (block $label$5
     (br_if $label$5
      (i64.ge_u
       (tee_local $6
        (i64.load
         (get_local $2)
        )
       )
       (tee_local $7
        (i64.load
         (get_local $1)
        )
       )
      )
     )
     (set_local $10
      (i32.add
       (get_local $1)
       (i32.const 48)
      )
     )
     (br $label$4)
    )
    (set_local $3
     (i32.add
      (get_local $4)
      (i32.const 1)
     )
    )
    (br_if $label$0
     (i64.lt_u
      (get_local $7)
      (get_local $6)
     )
    )
    (br_if $label$0
     (i32.ge_u
      (i32.load16_u
       (get_local $8)
      )
      (i32.load16_u offset=48
       (get_local $1)
      )
     )
    )
    (set_local $10
     (i32.add
      (get_local $1)
      (i32.const 48)
     )
    )
   )
   (drop
    (call $memcpy
     (get_local $5)
     (get_local $1)
     (i32.const 48)
    )
   )
   (drop
    (call $memcpy
     (get_local $1)
     (get_local $2)
     (i32.const 48)
    )
   )
   (set_local $3
    (call $memcpy
     (get_local $2)
     (get_local $5)
     (i32.const 48)
    )
   )
   (set_local $9
    (i32.load16_u
     (tee_local $2
      (i32.add
       (get_local $1)
       (i32.const 48)
      )
     )
    )
   )
   (i32.store16
    (get_local $2)
    (i32.load16_u
     (tee_local $3
      (i32.add
       (get_local $3)
       (i32.const 48)
      )
     )
    )
   )
   (i32.store16
    (get_local $3)
    (get_local $9)
   )
   (block $label$6
    (br_if $label$6
     (i64.lt_u
      (tee_local $6
       (i64.load
        (get_local $1)
       )
      )
      (tee_local $7
       (i64.load
        (get_local $0)
       )
      )
     )
    )
    (set_local $3
     (i32.add
      (get_local $4)
      (i32.const 2)
     )
    )
    (br_if $label$0
     (i64.lt_u
      (get_local $7)
      (get_local $6)
     )
    )
    (br_if $label$0
     (i32.ge_u
      (i32.load16_u
       (get_local $10)
      )
      (i32.load16_u offset=48
       (get_local $0)
      )
     )
    )
   )
   (set_local $3
    (call $memcpy
     (get_local $5)
     (get_local $0)
     (i32.const 48)
    )
   )
   (drop
    (call $memcpy
     (get_local $0)
     (get_local $1)
     (i32.const 48)
    )
   )
   (drop
    (call $memcpy
     (get_local $1)
     (get_local $3)
     (i32.const 48)
    )
   )
   (set_local $3
    (i32.load16_u
     (tee_local $1
      (i32.add
       (get_local $0)
       (i32.const 48)
      )
     )
    )
   )
   (i32.store16
    (get_local $1)
    (i32.load16_u
     (get_local $2)
    )
   )
   (i32.store16
    (get_local $2)
    (get_local $3)
   )
   (set_local $3
    (i32.add
     (get_local $4)
     (i32.const 3)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $11)
    (i32.const 48)
   )
  )
  (get_local $3)
 )
 (func $_ZNSt3__17__sort5IRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEjT0_S9_S9_S9_S9_T_ (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32) (param $4 i32) (param $5 i32) (result i32)
  (local $6 i32)
  (local $7 i64)
  (local $8 i64)
  (local $9 i32)
  (local $10 i32)
  (local $11 i32)
  (local $12 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $12
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (set_local $5
   (call $_ZNSt3__17__sort4IRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEjT0_S9_S9_S9_T_
    (get_local $0)
    (get_local $1)
    (get_local $2)
    (get_local $3)
    (get_local $5)
   )
  )
  (block $label$0
   (block $label$1
    (block $label$2
     (br_if $label$2
      (i64.ge_u
       (tee_local $7
        (i64.load
         (get_local $4)
        )
       )
       (tee_local $8
        (i64.load
         (get_local $3)
        )
       )
      )
     )
     (set_local $9
      (i32.add
       (get_local $3)
       (i32.const 48)
      )
     )
     (br $label$1)
    )
    (block $label$3
     (br_if $label$3
      (i64.lt_u
       (get_local $8)
       (get_local $7)
      )
     )
     (br_if $label$3
      (i32.ge_u
       (i32.load16_u offset=48
        (get_local $4)
       )
       (i32.load16_u offset=48
        (get_local $3)
       )
      )
     )
     (set_local $9
      (i32.add
       (get_local $3)
       (i32.const 48)
      )
     )
     (br $label$1)
    )
    (set_local $4
     (get_local $5)
    )
    (br $label$0)
   )
   (set_local $6
    (call $memcpy
     (get_local $12)
     (get_local $3)
     (i32.const 48)
    )
   )
   (drop
    (call $memcpy
     (get_local $3)
     (get_local $4)
     (i32.const 48)
    )
   )
   (drop
    (call $memcpy
     (get_local $4)
     (get_local $6)
     (i32.const 48)
    )
   )
   (set_local $11
    (i32.load16_u
     (tee_local $10
      (i32.add
       (get_local $3)
       (i32.const 48)
      )
     )
    )
   )
   (i32.store16
    (get_local $10)
    (i32.load16_u
     (tee_local $4
      (i32.add
       (get_local $4)
       (i32.const 48)
      )
     )
    )
   )
   (i32.store16
    (get_local $4)
    (get_local $11)
   )
   (block $label$4
    (block $label$5
     (br_if $label$5
      (i64.ge_u
       (tee_local $7
        (i64.load
         (get_local $3)
        )
       )
       (tee_local $8
        (i64.load
         (get_local $2)
        )
       )
      )
     )
     (set_local $11
      (i32.add
       (get_local $2)
       (i32.const 48)
      )
     )
     (br $label$4)
    )
    (set_local $4
     (i32.add
      (get_local $5)
      (i32.const 1)
     )
    )
    (br_if $label$0
     (i64.lt_u
      (get_local $8)
      (get_local $7)
     )
    )
    (br_if $label$0
     (i32.ge_u
      (i32.load16_u
       (get_local $9)
      )
      (i32.load16_u offset=48
       (get_local $2)
      )
     )
    )
    (set_local $11
     (i32.add
      (get_local $2)
      (i32.const 48)
     )
    )
   )
   (drop
    (call $memcpy
     (get_local $6)
     (get_local $2)
     (i32.const 48)
    )
   )
   (drop
    (call $memcpy
     (get_local $2)
     (get_local $3)
     (i32.const 48)
    )
   )
   (drop
    (call $memcpy
     (get_local $3)
     (get_local $6)
     (i32.const 48)
    )
   )
   (set_local $10
    (i32.load16_u
     (tee_local $4
      (i32.add
       (get_local $2)
       (i32.const 48)
      )
     )
    )
   )
   (i32.store16
    (get_local $4)
    (i32.load16_u
     (tee_local $3
      (i32.add
       (get_local $3)
       (i32.const 48)
      )
     )
    )
   )
   (i32.store16
    (get_local $3)
    (get_local $10)
   )
   (block $label$6
    (block $label$7
     (br_if $label$7
      (i64.ge_u
       (tee_local $7
        (i64.load
         (get_local $2)
        )
       )
       (tee_local $8
        (i64.load
         (get_local $1)
        )
       )
      )
     )
     (set_local $10
      (i32.add
       (get_local $1)
       (i32.const 48)
      )
     )
     (br $label$6)
    )
    (set_local $4
     (i32.add
      (get_local $5)
      (i32.const 2)
     )
    )
    (br_if $label$0
     (i64.lt_u
      (get_local $8)
      (get_local $7)
     )
    )
    (br_if $label$0
     (i32.ge_u
      (i32.load16_u
       (get_local $11)
      )
      (i32.load16_u offset=48
       (get_local $1)
      )
     )
    )
    (set_local $10
     (i32.add
      (get_local $1)
      (i32.const 48)
     )
    )
   )
   (drop
    (call $memcpy
     (get_local $6)
     (get_local $1)
     (i32.const 48)
    )
   )
   (set_local $3
    (call $memcpy
     (get_local $1)
     (get_local $2)
     (i32.const 48)
    )
   )
   (set_local $4
    (call $memcpy
     (get_local $2)
     (get_local $6)
     (i32.const 48)
    )
   )
   (set_local $1
    (i32.load16_u
     (tee_local $2
      (i32.add
       (get_local $3)
       (i32.const 48)
      )
     )
    )
   )
   (i32.store16
    (get_local $2)
    (i32.load16_u
     (tee_local $4
      (i32.add
       (get_local $4)
       (i32.const 48)
      )
     )
    )
   )
   (i32.store16
    (get_local $4)
    (get_local $1)
   )
   (block $label$8
    (br_if $label$8
     (i64.lt_u
      (tee_local $7
       (i64.load
        (get_local $3)
       )
      )
      (tee_local $8
       (i64.load
        (get_local $0)
       )
      )
     )
    )
    (set_local $4
     (i32.add
      (get_local $5)
      (i32.const 3)
     )
    )
    (br_if $label$0
     (i64.lt_u
      (get_local $8)
      (get_local $7)
     )
    )
    (br_if $label$0
     (i32.ge_u
      (i32.load16_u
       (get_local $10)
      )
      (i32.load16_u offset=48
       (get_local $0)
      )
     )
    )
   )
   (set_local $4
    (call $memcpy
     (get_local $6)
     (get_local $0)
     (i32.const 48)
    )
   )
   (set_local $1
    (call $memcpy
     (get_local $0)
     (get_local $3)
     (i32.const 48)
    )
   )
   (drop
    (call $memcpy
     (get_local $3)
     (get_local $4)
     (i32.const 48)
    )
   )
   (set_local $4
    (i32.load16_u
     (tee_local $3
      (i32.add
       (get_local $1)
       (i32.const 48)
      )
     )
    )
   )
   (i32.store16
    (get_local $3)
    (i32.load16_u
     (get_local $2)
    )
   )
   (i32.store16
    (get_local $2)
    (get_local $4)
   )
   (set_local $4
    (i32.add
     (get_local $5)
     (i32.const 4)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $12)
    (i32.const 48)
   )
  )
  (get_local $4)
 )
 (func $_ZNSt3__127__insertion_sort_incompleteIRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEbT0_S9_T_ (param $0 i32) (param $1 i32) (param $2 i32) (result i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i64)
  (local $8 i32)
  (local $9 i32)
  (local $10 i32)
  (local $11 i32)
  (local $12 i32)
  (local $13 i32)
  (local $14 i32)
  (local $15 i32)
  (local $16 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $16
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (block $label$0
   (block $label$1
    (block $label$2
     (block $label$3
      (block $label$4
       (block $label$5
        (block $label$6
         (br_if $label$6
          (i32.gt_u
           (tee_local $13
            (i32.div_s
             (i32.sub
              (get_local $1)
              (get_local $0)
             )
             (i32.const 56)
            )
           )
           (i32.const 5)
          )
         )
         (set_local $8
          (i32.const 1)
         )
         (block $label$7
          (br_table $label$0 $label$0 $label$7 $label$1 $label$2 $label$3 $label$0
           (get_local $13)
          )
         )
         (br_if $label$5
          (i64.ge_u
           (tee_local $5
            (i64.load
             (tee_local $13
              (i32.add
               (get_local $1)
               (i32.const -56)
              )
             )
            )
           )
           (tee_local $7
            (i64.load
             (get_local $0)
            )
           )
          )
         )
         (set_local $2
          (i32.add
           (get_local $1)
           (i32.const -8)
          )
         )
         (br $label$4)
        )
        (drop
         (call $_ZNSt3__17__sort3IRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEjT0_S9_S9_T_
          (get_local $0)
          (i32.add
           (get_local $0)
           (i32.const 56)
          )
          (tee_local $11
           (i32.add
            (get_local $0)
            (i32.const 112)
           )
          )
          (get_local $2)
         )
        )
        (block $label$8
         (block $label$9
          (block $label$10
           (br_if $label$10
            (i32.eq
             (tee_local $8
              (i32.add
               (get_local $0)
               (i32.const 168)
              )
             )
             (get_local $1)
            )
           )
           (set_local $10
            (i32.const 0)
           )
           (set_local $15
            (i32.const 0)
           )
           (loop $label$11
            (set_local $13
             (get_local $11)
            )
            (block $label$12
             (block $label$13
              (block $label$14
               (br_if $label$14
                (i64.ge_u
                 (tee_local $5
                  (i64.load
                   (tee_local $11
                    (get_local $8)
                   )
                  )
                 )
                 (tee_local $7
                  (i64.load
                   (get_local $13)
                  )
                 )
                )
               )
               (set_local $6
                (i32.add
                 (get_local $13)
                 (i32.const 48)
                )
               )
               (set_local $12
                (i32.load16_u offset=48
                 (get_local $11)
                )
               )
               (br $label$13)
              )
              (br_if $label$12
               (i64.lt_u
                (get_local $7)
                (get_local $5)
               )
              )
              (br_if $label$12
               (i32.ge_u
                (tee_local $12
                 (i32.load16_u offset=48
                  (get_local $11)
                 )
                )
                (i32.load16_u offset=48
                 (get_local $13)
                )
               )
              )
              (set_local $6
               (i32.add
                (get_local $13)
                (i32.const 48)
               )
              )
             )
             (set_local $3
              (call $memcpy
               (get_local $16)
               (i32.add
                (get_local $11)
                (i32.const 8)
               )
               (i32.const 40)
              )
             )
             (i32.store16
              (i32.add
               (tee_local $4
                (call $memcpy
                 (get_local $11)
                 (get_local $13)
                 (i32.const 48)
                )
               )
               (i32.const 48)
              )
              (i32.load16_u
               (i32.add
                (get_local $13)
                (i32.const 48)
               )
              )
             )
             (block $label$15
              (block $label$16
               (block $label$17
                (br_if $label$17
                 (i32.eq
                  (get_local $13)
                  (get_local $0)
                 )
                )
                (set_local $2
                 (get_local $10)
                )
                (loop $label$18
                 (block $label$19
                  (block $label$20
                   (br_if $label$20
                    (i64.ge_u
                     (get_local $5)
                     (tee_local $7
                      (i64.load
                       (tee_local $9
                        (i32.add
                         (tee_local $8
                          (i32.add
                           (get_local $0)
                           (get_local $2)
                          )
                         )
                         (i32.const 56)
                        )
                       )
                      )
                     )
                    )
                   )
                   (set_local $14
                    (i32.load16_u
                     (tee_local $6
                      (i32.add
                       (get_local $8)
                       (i32.const 104)
                      )
                     )
                    )
                   )
                   (br $label$19)
                  )
                  (br_if $label$16
                   (i64.lt_u
                    (get_local $7)
                    (get_local $5)
                   )
                  )
                  (br_if $label$15
                   (i32.ge_u
                    (i32.and
                     (get_local $12)
                     (i32.const 65535)
                    )
                    (tee_local $14
                     (i32.load16_u
                      (i32.add
                       (get_local $8)
                       (i32.const 104)
                      )
                     )
                    )
                   )
                  )
                  (set_local $6
                   (i32.add
                    (get_local $13)
                    (i32.const -8)
                   )
                  )
                 )
                 (set_local $13
                  (i32.add
                   (get_local $13)
                   (i32.const -56)
                  )
                 )
                 (drop
                  (call $memcpy
                   (i32.add
                    (get_local $8)
                    (i32.const 112)
                   )
                   (get_local $9)
                   (i32.const 48)
                  )
                 )
                 (i32.store16
                  (i32.add
                   (get_local $8)
                   (i32.const 160)
                  )
                  (get_local $14)
                 )
                 (br_if $label$18
                  (i32.ne
                   (tee_local $2
                    (i32.add
                     (get_local $2)
                     (i32.const -56)
                    )
                   )
                   (i32.const -112)
                  )
                 )
                )
               )
               (set_local $13
                (get_local $0)
               )
               (br $label$15)
              )
              (set_local $13
               (i32.add
                (get_local $8)
                (i32.const 112)
               )
              )
             )
             (i64.store
              (get_local $13)
              (get_local $5)
             )
             (drop
              (call $memcpy
               (i32.add
                (get_local $13)
                (i32.const 8)
               )
               (get_local $3)
               (i32.const 40)
              )
             )
             (i32.store16
              (get_local $6)
              (get_local $12)
             )
             (br_if $label$9
              (i32.eq
               (tee_local $15
                (i32.add
                 (get_local $15)
                 (i32.const 1)
                )
               )
               (i32.const 8)
              )
             )
            )
            (set_local $10
             (i32.add
              (get_local $10)
              (i32.const 56)
             )
            )
            (br_if $label$11
             (i32.ne
              (tee_local $8
               (i32.add
                (get_local $11)
                (i32.const 56)
               )
              )
              (get_local $1)
             )
            )
           )
          )
          (set_local $8
           (i32.const 1)
          )
          (br $label$8)
         )
         (set_local $13
          (i32.eq
           (i32.add
            (get_local $4)
            (i32.const 56)
           )
           (get_local $1)
          )
         )
         (set_local $8
          (i32.const 0)
         )
        )
        (set_local $8
         (i32.or
          (get_local $13)
          (get_local $8)
         )
        )
        (br $label$0)
       )
       (br_if $label$0
        (i64.lt_u
         (get_local $7)
         (get_local $5)
        )
       )
       (br_if $label$0
        (i32.ge_u
         (i32.load16_u
          (tee_local $2
           (i32.add
            (get_local $1)
            (i32.const -8)
           )
          )
         )
         (i32.load16_u offset=48
          (get_local $0)
         )
        )
       )
      )
      (set_local $9
       (call $memcpy
        (get_local $16)
        (get_local $0)
        (i32.const 48)
       )
      )
      (set_local $14
       (call $memcpy
        (get_local $0)
        (get_local $13)
        (i32.const 48)
       )
      )
      (drop
       (call $memcpy
        (get_local $13)
        (get_local $9)
        (i32.const 48)
       )
      )
      (set_local $9
       (i32.load16_u
        (tee_local $13
         (i32.add
          (get_local $14)
          (i32.const 48)
         )
        )
       )
      )
      (i32.store16
       (get_local $13)
       (i32.load16_u
        (get_local $2)
       )
      )
      (i32.store16
       (get_local $2)
       (get_local $9)
      )
      (br $label$0)
     )
     (drop
      (call $_ZNSt3__17__sort5IRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEjT0_S9_S9_S9_S9_T_
       (get_local $0)
       (i32.add
        (get_local $0)
        (i32.const 56)
       )
       (i32.add
        (get_local $0)
        (i32.const 112)
       )
       (i32.add
        (get_local $0)
        (i32.const 168)
       )
       (i32.add
        (get_local $1)
        (i32.const -56)
       )
       (get_local $2)
      )
     )
     (br $label$0)
    )
    (drop
     (call $_ZNSt3__17__sort4IRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEjT0_S9_S9_S9_T_
      (get_local $0)
      (i32.add
       (get_local $0)
       (i32.const 56)
      )
      (i32.add
       (get_local $0)
       (i32.const 112)
      )
      (i32.add
       (get_local $1)
       (i32.const -56)
      )
      (get_local $2)
     )
    )
    (br $label$0)
   )
   (drop
    (call $_ZNSt3__17__sort3IRNS_6__lessINS_4pairIN5eosio12producer_keyEtEES5_EEPS5_EEjT0_S9_S9_T_
     (get_local $0)
     (i32.add
      (get_local $0)
      (i32.const 56)
     )
     (i32.add
      (get_local $1)
      (i32.const -56)
     )
     (get_local $2)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $16)
    (i32.const 48)
   )
  )
  (i32.and
   (get_local $8)
   (i32.const 1)
  )
 )
 (func $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_13producer_infoE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $3
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (get_local $1)
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (set_local $0
   (call $_ZN5eosiolsINS_10datastreamIPcEEEERT_S5_RKNS_10public_keyE
    (get_local $0)
    (i32.add
     (get_local $1)
     (i32.const 16)
    )
   )
  )
  (i32.store8 offset=15
   (get_local $3)
   (i32.load8_u offset=56
    (get_local $1)
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 0)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $3)
     (i32.const 15)
    )
    (i32.const 1)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 1)
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (tee_local $0
       (call $_ZN5eosiolsINS_10datastreamIPcEEEERT_S5_RKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE
        (get_local $0)
        (i32.add
         (get_local $1)
         (i32.const 60)
        )
       )
      )
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 3)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 72)
    )
    (i32.const 4)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 4)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 80)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 1)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 88)
    )
    (i32.const 2)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 2)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $3)
    (i32.const 16)
   )
  )
  (get_local $0)
 )
 (func $_ZN5eosiolsINS_10datastreamIPcEEEERT_S5_RKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i64)
  (local $8 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $8
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (set_local $7
   (i64.extend_u/i32
    (select
     (i32.load offset=4
      (get_local $1)
     )
     (i32.shr_u
      (tee_local $5
       (i32.load8_u
        (get_local $1)
       )
      )
      (i32.const 1)
     )
     (i32.and
      (get_local $5)
      (i32.const 1)
     )
    )
   )
  )
  (set_local $6
   (i32.load offset=4
    (get_local $0)
   )
  )
  (set_local $4
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
  )
  (set_local $5
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
  )
  (loop $label$0
   (set_local $2
    (i32.wrap/i64
     (get_local $7)
    )
   )
   (i32.store8 offset=15
    (get_local $8)
    (i32.or
     (i32.shl
      (tee_local $3
       (i64.ne
        (tee_local $7
         (i64.shr_u
          (get_local $7)
          (i64.const 7)
         )
        )
        (i64.const 0)
       )
      )
      (i32.const 7)
     )
     (i32.and
      (get_local $2)
      (i32.const 127)
     )
    )
   )
   (call $eosio_assert
    (i32.gt_s
     (i32.sub
      (i32.load
       (get_local $4)
      )
      (get_local $6)
     )
     (i32.const 0)
    )
    (i32.const 320)
   )
   (drop
    (call $memcpy
     (i32.load
      (get_local $5)
     )
     (i32.add
      (get_local $8)
      (i32.const 15)
     )
     (i32.const 1)
    )
   )
   (i32.store
    (get_local $5)
    (tee_local $6
     (i32.add
      (i32.load
       (get_local $5)
      )
      (i32.const 1)
     )
    )
   )
   (br_if $label$0
    (get_local $3)
   )
  )
  (block $label$1
   (br_if $label$1
    (i32.eqz
     (tee_local $5
      (select
       (i32.load
        (i32.add
         (get_local $1)
         (i32.const 4)
        )
       )
       (i32.shr_u
        (tee_local $5
         (i32.load8_u
          (get_local $1)
         )
        )
        (i32.const 1)
       )
       (tee_local $2
        (i32.and
         (get_local $5)
         (i32.const 1)
        )
       )
      )
     )
    )
   )
   (set_local $3
    (i32.load offset=8
     (get_local $1)
    )
   )
   (call $eosio_assert
    (i32.ge_s
     (i32.sub
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 8)
       )
      )
      (get_local $6)
     )
     (get_local $5)
    )
    (i32.const 320)
   )
   (drop
    (call $memcpy
     (i32.load
      (tee_local $6
       (i32.add
        (get_local $0)
        (i32.const 4)
       )
      )
     )
     (select
      (get_local $3)
      (i32.add
       (get_local $1)
       (i32.const 1)
      )
      (get_local $2)
     )
     (get_local $5)
    )
   )
   (i32.store
    (get_local $6)
    (i32.add
     (i32.load
      (get_local $6)
     )
     (get_local $5)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
  (get_local $0)
 )
 (func $_ZN11eosiosystemrsIN5eosio10datastreamIPKcEEEERT_S7_RNS_13producer_infoE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i64)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $7
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (get_local $1)
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $6
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $6)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $6
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (set_local $3
   (i32.const 0)
  )
  (set_local $4
   (i64.const 0)
  )
  (set_local $2
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
  )
  (loop $label$0
   (call $eosio_assert
    (i32.lt_u
     (get_local $6)
     (i32.load
      (i32.add
       (get_local $0)
       (i32.const 8)
      )
     )
    )
    (i32.const 416)
   )
   (set_local $5
    (i32.load8_u
     (tee_local $6
      (i32.load
       (get_local $2)
      )
     )
    )
   )
   (i32.store
    (get_local $2)
    (tee_local $6
     (i32.add
      (get_local $6)
      (i32.const 1)
     )
    )
   )
   (set_local $4
    (i64.or
     (i64.extend_u/i32
      (i32.shl
       (i32.and
        (get_local $5)
        (i32.const 127)
       )
       (tee_local $3
        (i32.and
         (get_local $3)
         (i32.const 255)
        )
       )
      )
     )
     (get_local $4)
    )
   )
   (set_local $3
    (i32.add
     (get_local $3)
     (i32.const 7)
    )
   )
   (br_if $label$0
    (i32.shr_u
     (get_local $5)
     (i32.const 7)
    )
   )
  )
  (i64.store32 offset=16
   (get_local $1)
   (get_local $4)
  )
  (set_local $5
   (i32.const 20)
  )
  (set_local $2
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
  )
  (set_local $3
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
  )
  (loop $label$1
   (call $eosio_assert
    (i32.ne
     (i32.load
      (get_local $2)
     )
     (get_local $6)
    )
    (i32.const 368)
   )
   (drop
    (call $memcpy
     (i32.add
      (get_local $1)
      (get_local $5)
     )
     (i32.load
      (get_local $3)
     )
     (i32.const 1)
    )
   )
   (i32.store
    (get_local $3)
    (tee_local $6
     (i32.add
      (i32.load
       (get_local $3)
      )
      (i32.const 1)
     )
    )
   )
   (br_if $label$1
    (i32.ne
     (tee_local $5
      (i32.add
       (get_local $5)
       (i32.const 1)
      )
     )
     (i32.const 53)
    )
   )
  )
  (call $eosio_assert
   (i32.ne
    (i32.load
     (i32.add
      (get_local $0)
      (i32.const 8)
     )
    )
    (get_local $6)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $7)
     (i32.const 15)
    )
    (i32.load
     (tee_local $6
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (i32.const 1)
   )
  )
  (i32.store
   (get_local $6)
   (i32.add
    (i32.load
     (get_local $6)
    )
    (i32.const 1)
   )
  )
  (i32.store8 offset=56
   (get_local $1)
   (i32.ne
    (i32.load8_u offset=15
     (get_local $7)
    )
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (tee_local $6
       (call $_ZN5eosiorsINS_10datastreamIPKcEEEERT_S6_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE
        (get_local $0)
        (i32.add
         (get_local $1)
         (i32.const 60)
        )
       )
      )
     )
     (i32.load offset=4
      (get_local $6)
     )
    )
    (i32.const 3)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 72)
    )
    (i32.load offset=4
     (get_local $6)
    )
    (i32.const 4)
   )
  )
  (i32.store offset=4
   (get_local $6)
   (tee_local $5
    (i32.add
     (i32.load offset=4
      (get_local $6)
     )
     (i32.const 4)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $6)
     )
     (get_local $5)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 80)
    )
    (i32.load offset=4
     (get_local $6)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $6)
   (tee_local $5
    (i32.add
     (i32.load offset=4
      (get_local $6)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $6)
     )
     (get_local $5)
    )
    (i32.const 1)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 88)
    )
    (i32.load offset=4
     (get_local $6)
    )
    (i32.const 2)
   )
  )
  (i32.store offset=4
   (get_local $6)
   (i32.add
    (i32.load offset=4
     (get_local $6)
    )
    (i32.const 2)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $7)
    (i32.const 16)
   )
  )
  (get_local $6)
 )
 (func $_ZNSt3__16vectorIN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS1_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS4_dXadL_ZNKS4_8by_votesEvEEEEEEEE8item_ptrENS_9allocatorISC_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINSB_4itemENS_14default_deleteISI_EEEERyRlEEEvDpOT_ (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.ge_u
      (tee_local $5
       (i32.add
        (tee_local $4
         (i32.div_s
          (i32.sub
           (i32.load offset=4
            (get_local $0)
           )
           (tee_local $6
            (i32.load
             (get_local $0)
            )
           )
          )
          (i32.const 24)
         )
        )
        (i32.const 1)
       )
      )
      (i32.const 178956971)
     )
    )
    (set_local $7
     (i32.const 178956970)
    )
    (block $label$2
     (block $label$3
      (br_if $label$3
       (i32.gt_u
        (tee_local $6
         (i32.div_s
          (i32.sub
           (i32.load offset=8
            (get_local $0)
           )
           (get_local $6)
          )
          (i32.const 24)
         )
        )
        (i32.const 89478484)
       )
      )
      (br_if $label$2
       (i32.eqz
        (tee_local $7
         (select
          (get_local $5)
          (tee_local $7
           (i32.shl
            (get_local $6)
            (i32.const 1)
           )
          )
          (i32.lt_u
           (get_local $7)
           (get_local $5)
          )
         )
        )
       )
      )
     )
     (set_local $6
      (call $_Znwj
       (i32.mul
        (get_local $7)
        (i32.const 24)
       )
      )
     )
     (br $label$0)
    )
    (set_local $7
     (i32.const 0)
    )
    (set_local $6
     (i32.const 0)
    )
    (br $label$0)
   )
   (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
    (get_local $0)
   )
   (unreachable)
  )
  (set_local $5
   (i32.load
    (get_local $1)
   )
  )
  (i32.store
   (get_local $1)
   (i32.const 0)
  )
  (i32.store
   (tee_local $1
    (i32.add
     (get_local $6)
     (i32.mul
      (get_local $4)
      (i32.const 24)
     )
    )
   )
   (get_local $5)
  )
  (i64.store offset=8
   (get_local $1)
   (i64.load
    (get_local $2)
   )
  )
  (i32.store offset=16
   (get_local $1)
   (i32.load
    (get_local $3)
   )
  )
  (set_local $4
   (i32.add
    (get_local $6)
    (i32.mul
     (get_local $7)
     (i32.const 24)
    )
   )
  )
  (set_local $5
   (i32.add
    (get_local $1)
    (i32.const 24)
   )
  )
  (block $label$4
   (block $label$5
    (br_if $label$5
     (i32.eq
      (tee_local $6
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 4)
        )
       )
      )
      (tee_local $7
       (i32.load
        (get_local $0)
       )
      )
     )
    )
    (loop $label$6
     (set_local $3
      (i32.load
       (tee_local $2
        (i32.add
         (get_local $6)
         (i32.const -24)
        )
       )
      )
     )
     (i32.store
      (get_local $2)
      (i32.const 0)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
      (get_local $3)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -8)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -8)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -12)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -12)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -16)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -16)
       )
      )
     )
     (set_local $1
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
     )
     (set_local $6
      (get_local $2)
     )
     (br_if $label$6
      (i32.ne
       (get_local $7)
       (get_local $2)
      )
     )
    )
    (set_local $7
     (i32.load
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (set_local $6
     (i32.load
      (get_local $0)
     )
    )
    (br $label$4)
   )
   (set_local $6
    (get_local $7)
   )
  )
  (i32.store
   (get_local $0)
   (get_local $1)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
   (get_local $5)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
   (get_local $4)
  )
  (block $label$7
   (br_if $label$7
    (i32.eq
     (get_local $7)
     (get_local $6)
    )
   )
   (loop $label$8
    (set_local $1
     (i32.load
      (tee_local $7
       (i32.add
        (get_local $7)
        (i32.const -24)
       )
      )
     )
    )
    (i32.store
     (get_local $7)
     (i32.const 0)
    )
    (block $label$9
     (br_if $label$9
      (i32.eqz
       (get_local $1)
      )
     )
     (block $label$10
      (br_if $label$10
       (i32.eqz
        (i32.and
         (i32.load8_u offset=60
          (get_local $1)
         )
         (i32.const 1)
        )
       )
      )
      (call $_ZdlPv
       (i32.load
        (i32.add
         (get_local $1)
         (i32.const 68)
        )
       )
      )
     )
     (call $_ZdlPv
      (get_local $1)
     )
    )
    (br_if $label$8
     (i32.ne
      (get_local $6)
      (get_local $7)
     )
    )
   )
  )
  (block $label$11
   (br_if $label$11
    (i32.eqz
     (get_local $6)
    )
   )
   (call $_ZdlPv
    (get_local $6)
   )
  )
 )
 (func $_ZN5eosiorsINS_10datastreamIPKcEEEERT_S6_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $7
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 32)
    )
   )
  )
  (i32.store offset=24
   (get_local $7)
   (i32.const 0)
  )
  (i64.store offset=16
   (get_local $7)
   (i64.const 0)
  )
  (drop
   (call $_ZN5eosiorsINS_10datastreamIPKcEEEERT_S6_RNSt3__16vectorIcNS7_9allocatorIcEEEE
    (get_local $0)
    (i32.add
     (get_local $7)
     (i32.const 16)
    )
   )
  )
  (block $label$0
   (block $label$1
    (block $label$2
     (block $label$3
      (block $label$4
       (block $label$5
        (block $label$6
         (block $label$7
          (block $label$8
           (br_if $label$8
            (i32.ne
             (tee_local $5
              (i32.load offset=20
               (get_local $7)
              )
             )
             (tee_local $4
              (i32.load offset=16
               (get_local $7)
              )
             )
            )
           )
           (br_if $label$7
            (i32.and
             (i32.load8_u
              (get_local $1)
             )
             (i32.const 1)
            )
           )
           (i32.store16
            (get_local $1)
            (i32.const 0)
           )
           (set_local $4
            (i32.add
             (get_local $1)
             (i32.const 8)
            )
           )
           (br $label$6)
          )
          (i32.store
           (i32.add
            (get_local $7)
            (i32.const 8)
           )
           (i32.const 0)
          )
          (i64.store
           (get_local $7)
           (i64.const 0)
          )
          (br_if $label$0
           (i32.ge_u
            (tee_local $2
             (i32.sub
              (get_local $5)
              (get_local $4)
             )
            )
            (i32.const -16)
           )
          )
          (br_if $label$5
           (i32.ge_u
            (get_local $2)
            (i32.const 11)
           )
          )
          (i32.store8
           (get_local $7)
           (i32.shl
            (get_local $2)
            (i32.const 1)
           )
          )
          (set_local $6
           (i32.or
            (get_local $7)
            (i32.const 1)
           )
          )
          (br_if $label$4
           (get_local $2)
          )
          (br $label$3)
         )
         (i32.store8
          (i32.load offset=8
           (get_local $1)
          )
          (i32.const 0)
         )
         (i32.store offset=4
          (get_local $1)
          (i32.const 0)
         )
         (set_local $4
          (i32.add
           (get_local $1)
           (i32.const 8)
          )
         )
        )
        (call $_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEj
         (get_local $1)
         (i32.const 0)
        )
        (i32.store
         (get_local $4)
         (i32.const 0)
        )
        (i64.store align=4
         (get_local $1)
         (i64.const 0)
        )
        (br_if $label$2
         (tee_local $4
          (i32.load offset=16
           (get_local $7)
          )
         )
        )
        (br $label$1)
       )
       (set_local $6
        (call $_Znwj
         (tee_local $5
          (i32.and
           (i32.add
            (get_local $2)
            (i32.const 16)
           )
           (i32.const -16)
          )
         )
        )
       )
       (i32.store
        (get_local $7)
        (i32.or
         (get_local $5)
         (i32.const 1)
        )
       )
       (i32.store offset=8
        (get_local $7)
        (get_local $6)
       )
       (i32.store offset=4
        (get_local $7)
        (get_local $2)
       )
      )
      (set_local $3
       (get_local $2)
      )
      (set_local $5
       (get_local $6)
      )
      (loop $label$9
       (i32.store8
        (get_local $5)
        (i32.load8_u
         (get_local $4)
        )
       )
       (set_local $5
        (i32.add
         (get_local $5)
         (i32.const 1)
        )
       )
       (set_local $4
        (i32.add
         (get_local $4)
         (i32.const 1)
        )
       )
       (br_if $label$9
        (tee_local $3
         (i32.add
          (get_local $3)
          (i32.const -1)
         )
        )
       )
      )
      (set_local $6
       (i32.add
        (get_local $6)
        (get_local $2)
       )
      )
     )
     (i32.store8
      (get_local $6)
      (i32.const 0)
     )
     (block $label$10
      (block $label$11
       (br_if $label$11
        (i32.and
         (i32.load8_u
          (get_local $1)
         )
         (i32.const 1)
        )
       )
       (i32.store16
        (get_local $1)
        (i32.const 0)
       )
       (br $label$10)
      )
      (i32.store8
       (i32.load offset=8
        (get_local $1)
       )
       (i32.const 0)
      )
      (i32.store offset=4
       (get_local $1)
       (i32.const 0)
      )
     )
     (call $_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEj
      (get_local $1)
      (i32.const 0)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const 8)
      )
      (i32.load
       (i32.add
        (get_local $7)
        (i32.const 8)
       )
      )
     )
     (i64.store align=4
      (get_local $1)
      (i64.load
       (get_local $7)
      )
     )
     (br_if $label$1
      (i32.eqz
       (tee_local $4
        (i32.load offset=16
         (get_local $7)
        )
       )
      )
     )
    )
    (i32.store offset=20
     (get_local $7)
     (get_local $4)
    )
    (call $_ZdlPv
     (get_local $4)
    )
   )
   (i32.store offset=4
    (i32.const 0)
    (i32.add
     (get_local $7)
     (i32.const 32)
    )
   )
   (return
    (get_local $0)
   )
  )
  (call $_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv
   (get_local $7)
  )
  (unreachable)
 )
 (func $_ZN5eosiorsINS_10datastreamIPKcEEEERT_S6_RNSt3__16vectorIcNS7_9allocatorIcEEEE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i64)
  (local $7 i32)
  (set_local $5
   (i32.load offset=4
    (get_local $0)
   )
  )
  (set_local $7
   (i32.const 0)
  )
  (set_local $6
   (i64.const 0)
  )
  (set_local $2
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
  )
  (set_local $3
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
  )
  (loop $label$0
   (call $eosio_assert
    (i32.lt_u
     (get_local $5)
     (i32.load
      (get_local $2)
     )
    )
    (i32.const 416)
   )
   (set_local $4
    (i32.load8_u
     (tee_local $5
      (i32.load
       (get_local $3)
      )
     )
    )
   )
   (i32.store
    (get_local $3)
    (tee_local $5
     (i32.add
      (get_local $5)
      (i32.const 1)
     )
    )
   )
   (set_local $6
    (i64.or
     (i64.extend_u/i32
      (i32.shl
       (i32.and
        (get_local $4)
        (i32.const 127)
       )
       (tee_local $7
        (i32.and
         (get_local $7)
         (i32.const 255)
        )
       )
      )
     )
     (get_local $6)
    )
   )
   (set_local $7
    (i32.add
     (get_local $7)
     (i32.const 7)
    )
   )
   (br_if $label$0
    (i32.shr_u
     (get_local $4)
     (i32.const 7)
    )
   )
  )
  (block $label$1
   (block $label$2
    (br_if $label$2
     (i32.le_u
      (tee_local $3
       (i32.wrap/i64
        (get_local $6)
       )
      )
      (tee_local $2
       (i32.sub
        (tee_local $7
         (i32.load offset=4
          (get_local $1)
         )
        )
        (tee_local $4
         (i32.load
          (get_local $1)
         )
        )
       )
      )
     )
    )
    (call $_ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj
     (get_local $1)
     (i32.sub
      (get_local $3)
      (get_local $2)
     )
    )
    (set_local $5
     (i32.load
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (set_local $7
     (i32.load
      (i32.add
       (get_local $1)
       (i32.const 4)
      )
     )
    )
    (set_local $4
     (i32.load
      (get_local $1)
     )
    )
    (br $label$1)
   )
   (br_if $label$1
    (i32.ge_u
     (get_local $3)
     (get_local $2)
    )
   )
   (i32.store
    (i32.add
     (get_local $1)
     (i32.const 4)
    )
    (tee_local $7
     (i32.add
      (get_local $4)
      (get_local $3)
     )
    )
   )
  )
  (call $eosio_assert
   (i32.ge_u
    (i32.sub
     (i32.load
      (i32.add
       (get_local $0)
       (i32.const 8)
      )
     )
     (get_local $5)
    )
    (tee_local $5
     (i32.sub
      (get_local $7)
      (get_local $4)
     )
    )
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (get_local $4)
    (i32.load
     (tee_local $7
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (get_local $5)
   )
  )
  (i32.store
   (get_local $7)
   (i32.add
    (i32.load
     (get_local $7)
    )
    (get_local $5)
   )
  )
  (get_local $0)
 )
 (func $_ZN11eosiosystem15system_contract12claimrewardsERKy (type $FUNCSIG$vii) (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i64)
  (local $7 i64)
  (local $8 f64)
  (local $9 i64)
  (local $10 i32)
  (local $11 i32)
  (local $12 i64)
  (local $13 i64)
  (local $14 i64)
  (local $15 i64)
  (local $16 i64)
  (local $17 i64)
  (local $18 i64)
  (local $19 i64)
  (local $20 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $20
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 272)
    )
   )
  )
  (call $require_auth
   (i64.load
    (get_local $1)
   )
  )
  (call $eosio_assert
   (i32.load8_u offset=56
    (tee_local $3
     (call $_ZNK5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE3getEyPKc
      (tee_local $2
       (i32.add
        (get_local $0)
        (i32.const 48)
       )
      )
      (i64.load
       (get_local $1)
      )
      (i32.const 432)
     )
    )
   )
   (i32.const 464)
  )
  (call $eosio_assert
   (i64.gt_s
    (i64.load
     (i32.add
      (get_local $0)
      (i32.const 264)
     )
    )
    (i64.const 1499999999999)
   )
   (i32.const 512)
  )
  (i64.store offset=200
   (get_local $20)
   (tee_local $13
    (call $current_time)
   )
  )
  (call $eosio_assert
   (i64.gt_u
    (i64.sub
     (get_local $13)
     (i64.load offset=80
      (get_local $3)
     )
    )
    (i64.const 86400000000)
   )
   (i32.const 624)
  )
  (set_local $13
   (i64.const 0)
  )
  (set_local $12
   (i64.const 59)
  )
  (set_local $11
   (i32.const 672)
  )
  (set_local $14
   (i64.const 0)
  )
  (loop $label$0
   (block $label$1
    (block $label$2
     (block $label$3
      (block $label$4
       (block $label$5
        (br_if $label$5
         (i64.gt_u
          (get_local $13)
          (i64.const 10)
         )
        )
        (br_if $label$4
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $4
             (i32.load8_s
              (get_local $11)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $4
         (i32.add
          (get_local $4)
          (i32.const 165)
         )
        )
        (br $label$3)
       )
       (set_local $15
        (i64.const 0)
       )
       (br_if $label$2
        (i64.eq
         (get_local $13)
         (i64.const 11)
        )
       )
       (br $label$1)
      )
      (set_local $4
       (select
        (i32.add
         (get_local $4)
         (i32.const 208)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $4)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $15
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $4)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $15
     (i64.shl
      (i64.and
       (get_local $15)
       (i64.const 31)
      )
      (i64.and
       (get_local $12)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $11
    (i32.add
     (get_local $11)
     (i32.const 1)
    )
   )
   (set_local $12
    (i64.add
     (get_local $12)
     (i64.const -5)
    )
   )
   (set_local $14
    (i64.or
     (get_local $15)
     (get_local $14)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $13
      (i64.add
       (get_local $13)
       (i64.const 1)
      )
     )
     (i64.const 13)
    )
   )
  )
  (i32.store
   (i32.add
    (get_local $20)
    (i32.const 256)
   )
   (i32.const 0)
  )
  (i64.store offset=224
   (get_local $20)
   (get_local $14)
  )
  (i64.store offset=240
   (get_local $20)
   (i64.const -1)
  )
  (i64.store offset=248
   (get_local $20)
   (i64.const 0)
  )
  (i64.store offset=232
   (get_local $20)
   (i64.const 5459781)
  )
  (set_local $15
   (i64.load
    (call $_ZNK5eosio11multi_indexILy14289235522390851584ENS_5token14currency_statsEJEE3getEyPKc
     (i32.add
      (get_local $20)
      (i32.const 224)
     )
     (i64.const 5459781)
     (i32.const 432)
    )
   )
  )
  (block $label$6
   (br_if $label$6
    (i32.eqz
     (tee_local $5
      (i32.load offset=248
       (get_local $20)
      )
     )
    )
   )
   (block $label$7
    (block $label$8
     (br_if $label$8
      (i32.eq
       (tee_local $11
        (i32.load
         (tee_local $10
          (i32.add
           (get_local $20)
           (i32.const 252)
          )
         )
        )
       )
       (get_local $5)
      )
     )
     (loop $label$9
      (set_local $4
       (i32.load
        (tee_local $11
         (i32.add
          (get_local $11)
          (i32.const -24)
         )
        )
       )
      )
      (i32.store
       (get_local $11)
       (i32.const 0)
      )
      (block $label$10
       (br_if $label$10
        (i32.eqz
         (get_local $4)
        )
       )
       (call $_ZdlPv
        (get_local $4)
       )
      )
      (br_if $label$9
       (i32.ne
        (get_local $5)
        (get_local $11)
       )
      )
     )
     (set_local $11
      (i32.load
       (i32.add
        (get_local $20)
        (i32.const 248)
       )
      )
     )
     (br $label$7)
    )
    (set_local $11
     (get_local $5)
    )
   )
   (i32.store
    (get_local $10)
    (get_local $5)
   )
   (call $_ZdlPv
    (get_local $11)
   )
  )
  (block $label$11
   (block $label$12
    (block $label$13
     (block $label$14
      (block $label$15
       (br_if $label$15
        (i64.eqz
         (tee_local $13
          (i64.load
           (i32.add
            (get_local $0)
            (i32.const 232)
           )
          )
         )
        )
       )
       (br_if $label$15
        (i64.eqz
         (tee_local $13
          (i64.sub
           (i64.load offset=200
            (get_local $20)
           )
           (get_local $13)
          )
         )
        )
       )
       (set_local $7
        (i64.sub
         (tee_local $13
          (i64.div_s
           (tee_local $19
            (i64.trunc_s/f64
             (f64.div
              (f64.mul
               (f64.mul
                (f64.convert_s/i64
                 (get_local $15)
                )
                (f64.const 0.04879)
               )
               (f64.convert_u/i64
                (get_local $13)
               )
              )
              (f64.const 314496e8)
             )
            )
           )
           (i64.const 5)
          )
         )
         (tee_local $9
          (i64.div_s
           (get_local $19)
           (i64.const 20)
          )
         )
        )
       )
       (set_local $6
        (i64.sub
         (get_local $19)
         (get_local $13)
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 672)
       )
       (set_local $14
        (i64.const 0)
       )
       (loop $label$16
        (block $label$17
         (block $label$18
          (block $label$19
           (block $label$20
            (block $label$21
             (br_if $label$21
              (i64.gt_u
               (get_local $13)
               (i64.const 10)
              )
             )
             (br_if $label$20
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$19)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$18
             (i64.eq
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$17)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $12
         (i64.add
          (get_local $12)
          (i64.const -5)
         )
        )
        (set_local $14
         (i64.or
          (get_local $15)
          (get_local $14)
         )
        )
        (br_if $label$16
         (i64.ne
          (tee_local $13
           (i64.add
            (get_local $13)
            (i64.const 1)
           )
          )
          (i64.const 13)
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 16)
       )
       (set_local $17
        (i64.const 0)
       )
       (loop $label$22
        (block $label$23
         (block $label$24
          (block $label$25
           (block $label$26
            (block $label$27
             (br_if $label$27
              (i64.gt_u
               (get_local $13)
               (i64.const 4)
              )
             )
             (br_if $label$26
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$25)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$24
             (i64.le_u
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$23)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $13
         (i64.add
          (get_local $13)
          (i64.const 1)
         )
        )
        (set_local $17
         (i64.or
          (get_local $15)
          (get_local $17)
         )
        )
        (br_if $label$22
         (i64.ne
          (tee_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (i64.const -6)
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 688)
       )
       (set_local $18
        (i64.const 0)
       )
       (loop $label$28
        (block $label$29
         (block $label$30
          (block $label$31
           (block $label$32
            (block $label$33
             (br_if $label$33
              (i64.gt_u
               (get_local $13)
               (i64.const 5)
              )
             )
             (br_if $label$32
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$31)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$30
             (i64.le_u
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$29)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $13
         (i64.add
          (get_local $13)
          (i64.const 1)
         )
        )
        (set_local $18
         (i64.or
          (get_local $15)
          (get_local $18)
         )
        )
        (br_if $label$28
         (i64.ne
          (tee_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (i64.const -6)
         )
        )
       )
       (i64.store offset=176
        (get_local $20)
        (get_local $18)
       )
       (i64.store offset=168
        (get_local $20)
        (get_local $17)
       )
       (i32.store
        (i32.add
         (tee_local $11
          (call $_Znwj
           (i32.const 16)
          )
         )
         (i32.const 12)
        )
        (i32.load
         (i32.add
          (i32.add
           (get_local $20)
           (i32.const 168)
          )
          (i32.const 12)
         )
        )
       )
       (i32.store
        (i32.add
         (get_local $11)
         (i32.const 4)
        )
        (i32.load offset=172
         (get_local $20)
        )
       )
       (i32.store offset=184
        (get_local $20)
        (get_local $11)
       )
       (i32.store
        (get_local $11)
        (i32.load offset=168
         (get_local $20)
        )
       )
       (i32.store offset=192
        (get_local $20)
        (tee_local $4
         (i32.add
          (get_local $11)
          (i32.const 16)
         )
        )
       )
       (i32.store
        (i32.add
         (get_local $11)
         (i32.const 8)
        )
        (i32.load offset=176
         (get_local $20)
        )
       )
       (i32.store offset=188
        (get_local $20)
        (get_local $4)
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 16)
       )
       (set_local $17
        (i64.const 0)
       )
       (loop $label$34
        (block $label$35
         (block $label$36
          (block $label$37
           (block $label$38
            (block $label$39
             (br_if $label$39
              (i64.gt_u
               (get_local $13)
               (i64.const 4)
              )
             )
             (br_if $label$38
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$37)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$36
             (i64.le_u
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$35)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $13
         (i64.add
          (get_local $13)
          (i64.const 1)
         )
        )
        (set_local $17
         (i64.or
          (get_local $15)
          (get_local $17)
         )
        )
        (br_if $label$34
         (i64.ne
          (tee_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (i64.const -6)
         )
        )
       )
       (call $eosio_assert
        (i64.lt_u
         (i64.add
          (get_local $19)
          (i64.const 4611686018427387903)
         )
         (i64.const 9223372036854775807)
        )
        (i32.const 992)
       )
       (set_local $13
        (i64.const 5459781)
       )
       (set_local $11
        (i32.const 0)
       )
       (block $label$40
        (block $label$41
         (loop $label$42
          (br_if $label$41
           (i32.gt_u
            (i32.add
             (i32.shl
              (i32.wrap/i64
               (get_local $13)
              )
              (i32.const 24)
             )
             (i32.const -1073741825)
            )
            (i32.const 452984830)
           )
          )
          (block $label$43
           (br_if $label$43
            (i64.ne
             (i64.and
              (tee_local $13
               (i64.shr_u
                (get_local $13)
                (i64.const 8)
               )
              )
              (i64.const 255)
             )
             (i64.const 0)
            )
           )
           (loop $label$44
            (br_if $label$41
             (i64.ne
              (i64.and
               (tee_local $13
                (i64.shr_u
                 (get_local $13)
                 (i64.const 8)
                )
               )
               (i64.const 255)
              )
              (i64.const 0)
             )
            )
            (br_if $label$44
             (i32.lt_s
              (tee_local $11
               (i32.add
                (get_local $11)
                (i32.const 1)
               )
              )
              (i32.const 7)
             )
            )
           )
          )
          (set_local $4
           (i32.const 1)
          )
          (br_if $label$42
           (i32.lt_s
            (tee_local $11
             (i32.add
              (get_local $11)
              (i32.const 1)
             )
            )
            (i32.const 7)
           )
          )
          (br $label$40)
         )
        )
        (set_local $4
         (i32.const 0)
        )
       )
       (call $eosio_assert
        (get_local $4)
        (i32.const 704)
       )
       (i32.store
        (i32.add
         (get_local $20)
         (i32.const 160)
        )
        (i32.const 0)
       )
       (i64.store offset=152
        (get_local $20)
        (i64.const 0)
       )
       (br_if $label$14
        (i32.ge_u
         (tee_local $11
          (call $strlen
           (i32.const 736)
          )
         )
         (i32.const -16)
        )
       )
       (block $label$45
        (block $label$46
         (block $label$47
          (br_if $label$47
           (i32.ge_u
            (get_local $11)
            (i32.const 11)
           )
          )
          (i32.store8 offset=152
           (get_local $20)
           (i32.shl
            (get_local $11)
            (i32.const 1)
           )
          )
          (set_local $4
           (i32.or
            (i32.add
             (get_local $20)
             (i32.const 152)
            )
            (i32.const 1)
           )
          )
          (br_if $label$46
           (get_local $11)
          )
          (br $label$45)
         )
         (set_local $4
          (call $_Znwj
           (tee_local $5
            (i32.and
             (i32.add
              (get_local $11)
              (i32.const 16)
             )
             (i32.const -16)
            )
           )
          )
         )
         (i32.store offset=152
          (get_local $20)
          (i32.or
           (get_local $5)
           (i32.const 1)
          )
         )
         (i32.store offset=160
          (get_local $20)
          (get_local $4)
         )
         (i32.store offset=156
          (get_local $20)
          (get_local $11)
         )
        )
        (drop
         (call $memcpy
          (get_local $4)
          (i32.const 736)
          (get_local $11)
         )
        )
       )
       (i32.store8
        (i32.add
         (get_local $4)
         (get_local $11)
        )
        (i32.const 0)
       )
       (set_local $11
        (i32.load offset=152
         (get_local $20)
        )
       )
       (i32.store offset=152
        (get_local $20)
        (i32.const 0)
       )
       (set_local $4
        (i32.load offset=156
         (get_local $20)
        )
       )
       (i32.store offset=156
        (get_local $20)
        (i32.const 0)
       )
       (set_local $5
        (i32.load offset=160
         (get_local $20)
        )
       )
       (i32.store offset=160
        (get_local $20)
        (i32.const 0)
       )
       (i32.store offset=216
        (get_local $20)
        (i32.load
         (tee_local $10
          (i32.add
           (get_local $20)
           (i32.const 192)
          )
         )
        )
       )
       (i32.store
        (get_local $10)
        (i32.const 0)
       )
       (i32.store offset=208
        (get_local $20)
        (i32.load offset=184
         (get_local $20)
        )
       )
       (i32.store offset=212
        (get_local $20)
        (i32.load offset=188
         (get_local $20)
        )
       )
       (i32.store offset=188
        (get_local $20)
        (i32.const 0)
       )
       (i32.store offset=184
        (get_local $20)
        (i32.const 0)
       )
       (i64.store offset=232
        (get_local $20)
        (get_local $19)
       )
       (i64.store offset=224
        (get_local $20)
        (get_local $17)
       )
       (i64.store
        (i32.add
         (get_local $20)
         (i32.const 240)
        )
        (i64.const 1397703940)
       )
       (i32.store offset=248
        (get_local $20)
        (get_local $11)
       )
       (i32.store
        (i32.add
         (get_local $20)
         (i32.const 252)
        )
        (get_local $4)
       )
       (i32.store
        (tee_local $11
         (i32.add
          (get_local $20)
          (i32.const 256)
         )
        )
        (get_local $5)
       )
       (call $_ZN5eosio15dispatch_inlineIJyNS_5assetENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEEEvyyNS2_6vectorINS_16permission_levelENS6_ISA_EEEENS2_5tupleIJDpT_EEE
        (get_local $14)
        (i64.const 8516769789752901632)
        (i32.add
         (get_local $20)
         (i32.const 208)
        )
        (i32.add
         (get_local $20)
         (i32.const 224)
        )
       )
       (block $label$48
        (br_if $label$48
         (i32.eqz
          (i32.and
           (i32.load8_u offset=248
            (get_local $20)
           )
           (i32.const 1)
          )
         )
        )
        (call $_ZdlPv
         (i32.load
          (get_local $11)
         )
        )
       )
       (block $label$49
        (br_if $label$49
         (i32.eqz
          (tee_local $11
           (i32.load offset=208
            (get_local $20)
           )
          )
         )
        )
        (i32.store offset=212
         (get_local $20)
         (get_local $11)
        )
        (call $_ZdlPv
         (get_local $11)
        )
       )
       (block $label$50
        (br_if $label$50
         (i32.eqz
          (i32.and
           (i32.load8_u offset=152
            (get_local $20)
           )
           (i32.const 1)
          )
         )
        )
        (call $_ZdlPv
         (i32.load
          (i32.add
           (get_local $20)
           (i32.const 160)
          )
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 672)
       )
       (set_local $14
        (i64.const 0)
       )
       (loop $label$51
        (block $label$52
         (block $label$53
          (block $label$54
           (block $label$55
            (block $label$56
             (br_if $label$56
              (i64.gt_u
               (get_local $13)
               (i64.const 10)
              )
             )
             (br_if $label$55
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$54)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$53
             (i64.eq
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$52)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $12
         (i64.add
          (get_local $12)
          (i64.const -5)
         )
        )
        (set_local $14
         (i64.or
          (get_local $15)
          (get_local $14)
         )
        )
        (br_if $label$51
         (i64.ne
          (tee_local $13
           (i64.add
            (get_local $13)
            (i64.const 1)
           )
          )
          (i64.const 13)
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 16)
       )
       (set_local $17
        (i64.const 0)
       )
       (loop $label$57
        (block $label$58
         (block $label$59
          (block $label$60
           (block $label$61
            (block $label$62
             (br_if $label$62
              (i64.gt_u
               (get_local $13)
               (i64.const 4)
              )
             )
             (br_if $label$61
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$60)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$59
             (i64.le_u
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$58)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $13
         (i64.add
          (get_local $13)
          (i64.const 1)
         )
        )
        (set_local $17
         (i64.or
          (get_local $15)
          (get_local $17)
         )
        )
        (br_if $label$57
         (i64.ne
          (tee_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (i64.const -6)
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 688)
       )
       (set_local $18
        (i64.const 0)
       )
       (loop $label$63
        (block $label$64
         (block $label$65
          (block $label$66
           (block $label$67
            (block $label$68
             (br_if $label$68
              (i64.gt_u
               (get_local $13)
               (i64.const 5)
              )
             )
             (br_if $label$67
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$66)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$65
             (i64.le_u
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$64)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $13
         (i64.add
          (get_local $13)
          (i64.const 1)
         )
        )
        (set_local $18
         (i64.or
          (get_local $15)
          (get_local $18)
         )
        )
        (br_if $label$63
         (i64.ne
          (tee_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (i64.const -6)
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 16)
       )
       (set_local $19
        (i64.const 0)
       )
       (loop $label$69
        (block $label$70
         (block $label$71
          (block $label$72
           (block $label$73
            (block $label$74
             (br_if $label$74
              (i64.gt_u
               (get_local $13)
               (i64.const 4)
              )
             )
             (br_if $label$73
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$72)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$71
             (i64.le_u
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$70)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $13
         (i64.add
          (get_local $13)
          (i64.const 1)
         )
        )
        (set_local $19
         (i64.or
          (get_local $15)
          (get_local $19)
         )
        )
        (br_if $label$69
         (i64.ne
          (tee_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (i64.const -6)
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $15
        (i64.const 59)
       )
       (set_local $11
        (i32.const 784)
       )
       (set_local $16
        (i64.const 0)
       )
       (loop $label$75
        (set_local $12
         (i64.const 0)
        )
        (block $label$76
         (br_if $label$76
          (i64.gt_u
           (get_local $13)
           (i64.const 11)
          )
         )
         (block $label$77
          (block $label$78
           (br_if $label$78
            (i32.gt_u
             (i32.and
              (i32.add
               (tee_local $4
                (i32.load8_s
                 (get_local $11)
                )
               )
               (i32.const -97)
              )
              (i32.const 255)
             )
             (i32.const 25)
            )
           )
           (set_local $4
            (i32.add
             (get_local $4)
             (i32.const 165)
            )
           )
           (br $label$77)
          )
          (set_local $4
           (select
            (i32.add
             (get_local $4)
             (i32.const 208)
            )
            (i32.const 0)
            (i32.lt_u
             (i32.and
              (i32.add
               (get_local $4)
               (i32.const -49)
              )
              (i32.const 255)
             )
             (i32.const 5)
            )
           )
          )
         )
         (set_local $12
          (i64.shl
           (i64.extend_u/i32
            (i32.and
             (get_local $4)
             (i32.const 31)
            )
           )
           (i64.and
            (get_local $15)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $13
         (i64.add
          (get_local $13)
          (i64.const 1)
         )
        )
        (set_local $16
         (i64.or
          (get_local $12)
          (get_local $16)
         )
        )
        (br_if $label$75
         (i64.ne
          (tee_local $15
           (i64.add
            (get_local $15)
            (i64.const -5)
           )
          )
          (i64.const -6)
         )
        )
       )
       (call $eosio_assert
        (i64.lt_u
         (i64.add
          (get_local $6)
          (i64.const 4611686018427387903)
         )
         (i64.const 9223372036854775807)
        )
        (i32.const 992)
       )
       (set_local $13
        (i64.const 5459781)
       )
       (set_local $11
        (i32.const 0)
       )
       (block $label$79
        (block $label$80
         (loop $label$81
          (br_if $label$80
           (i32.gt_u
            (i32.add
             (i32.shl
              (i32.wrap/i64
               (get_local $13)
              )
              (i32.const 24)
             )
             (i32.const -1073741825)
            )
            (i32.const 452984830)
           )
          )
          (block $label$82
           (br_if $label$82
            (i64.ne
             (i64.and
              (tee_local $13
               (i64.shr_u
                (get_local $13)
                (i64.const 8)
               )
              )
              (i64.const 255)
             )
             (i64.const 0)
            )
           )
           (loop $label$83
            (br_if $label$80
             (i64.ne
              (i64.and
               (tee_local $13
                (i64.shr_u
                 (get_local $13)
                 (i64.const 8)
                )
               )
               (i64.const 255)
              )
              (i64.const 0)
             )
            )
            (br_if $label$83
             (i32.lt_s
              (tee_local $11
               (i32.add
                (get_local $11)
                (i32.const 1)
               )
              )
              (i32.const 7)
             )
            )
           )
          )
          (set_local $4
           (i32.const 1)
          )
          (br_if $label$81
           (i32.lt_s
            (tee_local $11
             (i32.add
              (get_local $11)
              (i32.const 1)
             )
            )
            (i32.const 7)
           )
          )
          (br $label$79)
         )
        )
        (set_local $4
         (i32.const 0)
        )
       )
       (call $eosio_assert
        (get_local $4)
        (i32.const 704)
       )
       (i64.store
        (i32.add
         (get_local $20)
         (i32.const 128)
        )
        (i64.const 1397703940)
       )
       (i64.store align=4
        (i32.add
         (get_local $20)
         (i32.const 140)
        )
        (i64.const 0)
       )
       (i64.store offset=112
        (get_local $20)
        (get_local $16)
       )
       (i64.store offset=104
        (get_local $20)
        (get_local $19)
       )
       (i64.store offset=120
        (get_local $20)
        (get_local $6)
       )
       (i32.store offset=136
        (get_local $20)
        (i32.const 0)
       )
       (set_local $4
        (i32.add
         (get_local $20)
         (i32.const 136)
        )
       )
       (br_if $label$13
        (i32.ge_u
         (tee_local $11
          (call $strlen
           (i32.const 800)
          )
         )
         (i32.const -16)
        )
       )
       (block $label$84
        (block $label$85
         (block $label$86
          (br_if $label$86
           (i32.ge_u
            (get_local $11)
            (i32.const 11)
           )
          )
          (i32.store8
           (i32.add
            (get_local $20)
            (i32.const 136)
           )
           (i32.shl
            (get_local $11)
            (i32.const 1)
           )
          )
          (set_local $5
           (i32.add
            (get_local $4)
            (i32.const 1)
           )
          )
          (br_if $label$85
           (get_local $11)
          )
          (br $label$84)
         )
         (set_local $5
          (call $_Znwj
           (tee_local $10
            (i32.and
             (i32.add
              (get_local $11)
              (i32.const 16)
             )
             (i32.const -16)
            )
           )
          )
         )
         (i32.store
          (i32.add
           (get_local $20)
           (i32.const 136)
          )
          (i32.or
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.store
          (i32.add
           (get_local $20)
           (i32.const 144)
          )
          (get_local $5)
         )
         (i32.store
          (i32.add
           (get_local $20)
           (i32.const 140)
          )
          (get_local $11)
         )
        )
        (drop
         (call $memcpy
          (get_local $5)
          (i32.const 800)
          (get_local $11)
         )
        )
       )
       (i32.store8
        (i32.add
         (get_local $5)
         (get_local $11)
        )
        (i32.const 0)
       )
       (i64.store
        (tee_local $11
         (call $_Znwj
          (i32.const 16)
         )
        )
        (get_local $17)
       )
       (i64.store offset=8
        (get_local $11)
        (get_local $18)
       )
       (i32.store offset=168
        (get_local $20)
        (get_local $11)
       )
       (i32.store offset=176
        (get_local $20)
        (tee_local $11
         (i32.add
          (get_local $11)
          (i32.const 16)
         )
        )
       )
       (i32.store offset=172
        (get_local $20)
        (get_local $11)
       )
       (i64.store offset=224
        (get_local $20)
        (i64.load offset=104
         (get_local $20)
        )
       )
       (i64.store offset=232
        (get_local $20)
        (i64.load
         (i32.add
          (i32.add
           (get_local $20)
           (i32.const 104)
          )
          (i32.const 8)
         )
        )
       )
       (i64.store
        (i32.add
         (i32.add
          (get_local $20)
          (i32.const 224)
         )
         (i32.const 24)
        )
        (i64.load
         (i32.add
          (i32.add
           (get_local $20)
           (i32.const 104)
          )
          (i32.const 24)
         )
        )
       )
       (i64.store offset=240
        (get_local $20)
        (i64.load offset=120
         (get_local $20)
        )
       )
       (i32.store
        (tee_local $11
         (i32.add
          (i32.add
           (get_local $20)
           (i32.const 224)
          )
          (i32.const 40)
         )
        )
        (i32.load
         (i32.add
          (get_local $4)
          (i32.const 8)
         )
        )
       )
       (i64.store offset=256
        (get_local $20)
        (i64.load
         (get_local $4)
        )
       )
       (i32.store
        (i32.add
         (get_local $20)
         (i32.const 136)
        )
        (i32.const 0)
       )
       (i32.store
        (i32.add
         (get_local $20)
         (i32.const 140)
        )
        (i32.const 0)
       )
       (i32.store
        (i32.add
         (i32.add
          (get_local $20)
          (i32.const 104)
         )
         (i32.const 40)
        )
        (i32.const 0)
       )
       (call $_ZN5eosio15dispatch_inlineIJyyNS_5assetENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEEEvyyNS2_6vectorINS_16permission_levelENS6_ISA_EEEENS2_5tupleIJDpT_EEE
        (get_local $14)
        (i64.const -3617168760277827584)
        (i32.add
         (get_local $20)
         (i32.const 168)
        )
        (i32.add
         (get_local $20)
         (i32.const 224)
        )
       )
       (block $label$87
        (br_if $label$87
         (i32.eqz
          (i32.and
           (i32.load8_u offset=256
            (get_local $20)
           )
           (i32.const 1)
          )
         )
        )
        (call $_ZdlPv
         (i32.load
          (get_local $11)
         )
        )
       )
       (block $label$88
        (br_if $label$88
         (i32.eqz
          (tee_local $11
           (i32.load offset=168
            (get_local $20)
           )
          )
         )
        )
        (i32.store offset=172
         (get_local $20)
         (get_local $11)
        )
        (call $_ZdlPv
         (get_local $11)
        )
       )
       (block $label$89
        (br_if $label$89
         (i32.eqz
          (i32.and
           (i32.load8_u
            (i32.add
             (get_local $20)
             (i32.const 136)
            )
           )
           (i32.const 1)
          )
         )
        )
        (call $_ZdlPv
         (i32.load
          (i32.add
           (get_local $20)
           (i32.const 144)
          )
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 672)
       )
       (set_local $14
        (i64.const 0)
       )
       (loop $label$90
        (block $label$91
         (block $label$92
          (block $label$93
           (block $label$94
            (block $label$95
             (br_if $label$95
              (i64.gt_u
               (get_local $13)
               (i64.const 10)
              )
             )
             (br_if $label$94
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$93)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$92
             (i64.eq
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$91)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $12
         (i64.add
          (get_local $12)
          (i64.const -5)
         )
        )
        (set_local $14
         (i64.or
          (get_local $15)
          (get_local $14)
         )
        )
        (br_if $label$90
         (i64.ne
          (tee_local $13
           (i64.add
            (get_local $13)
            (i64.const 1)
           )
          )
          (i64.const 13)
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 16)
       )
       (set_local $17
        (i64.const 0)
       )
       (loop $label$96
        (block $label$97
         (block $label$98
          (block $label$99
           (block $label$100
            (block $label$101
             (br_if $label$101
              (i64.gt_u
               (get_local $13)
               (i64.const 4)
              )
             )
             (br_if $label$100
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$99)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$98
             (i64.le_u
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$97)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $13
         (i64.add
          (get_local $13)
          (i64.const 1)
         )
        )
        (set_local $17
         (i64.or
          (get_local $15)
          (get_local $17)
         )
        )
        (br_if $label$96
         (i64.ne
          (tee_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (i64.const -6)
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 688)
       )
       (set_local $18
        (i64.const 0)
       )
       (loop $label$102
        (block $label$103
         (block $label$104
          (block $label$105
           (block $label$106
            (block $label$107
             (br_if $label$107
              (i64.gt_u
               (get_local $13)
               (i64.const 5)
              )
             )
             (br_if $label$106
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$105)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$104
             (i64.le_u
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$103)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $13
         (i64.add
          (get_local $13)
          (i64.const 1)
         )
        )
        (set_local $18
         (i64.or
          (get_local $15)
          (get_local $18)
         )
        )
        (br_if $label$102
         (i64.ne
          (tee_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (i64.const -6)
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 16)
       )
       (set_local $19
        (i64.const 0)
       )
       (loop $label$108
        (block $label$109
         (block $label$110
          (block $label$111
           (block $label$112
            (block $label$113
             (br_if $label$113
              (i64.gt_u
               (get_local $13)
               (i64.const 4)
              )
             )
             (br_if $label$112
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$111)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$110
             (i64.le_u
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$109)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $13
         (i64.add
          (get_local $13)
          (i64.const 1)
         )
        )
        (set_local $19
         (i64.or
          (get_local $15)
          (get_local $19)
         )
        )
        (br_if $label$108
         (i64.ne
          (tee_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (i64.const -6)
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 832)
       )
       (set_local $16
        (i64.const 0)
       )
       (loop $label$114
        (block $label$115
         (block $label$116
          (block $label$117
           (block $label$118
            (block $label$119
             (br_if $label$119
              (i64.gt_u
               (get_local $13)
               (i64.const 9)
              )
             )
             (br_if $label$118
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$117)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$116
             (i64.le_u
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$115)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $13
         (i64.add
          (get_local $13)
          (i64.const 1)
         )
        )
        (set_local $16
         (i64.or
          (get_local $15)
          (get_local $16)
         )
        )
        (br_if $label$114
         (i64.ne
          (tee_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (i64.const -6)
         )
        )
       )
       (call $eosio_assert
        (i64.lt_u
         (i64.add
          (get_local $9)
          (i64.const 4611686018427387903)
         )
         (i64.const 9223372036854775807)
        )
        (i32.const 992)
       )
       (set_local $13
        (i64.const 5459781)
       )
       (set_local $11
        (i32.const 0)
       )
       (block $label$120
        (block $label$121
         (loop $label$122
          (br_if $label$121
           (i32.gt_u
            (i32.add
             (i32.shl
              (i32.wrap/i64
               (get_local $13)
              )
              (i32.const 24)
             )
             (i32.const -1073741825)
            )
            (i32.const 452984830)
           )
          )
          (block $label$123
           (br_if $label$123
            (i64.ne
             (i64.and
              (tee_local $13
               (i64.shr_u
                (get_local $13)
                (i64.const 8)
               )
              )
              (i64.const 255)
             )
             (i64.const 0)
            )
           )
           (loop $label$124
            (br_if $label$121
             (i64.ne
              (i64.and
               (tee_local $13
                (i64.shr_u
                 (get_local $13)
                 (i64.const 8)
                )
               )
               (i64.const 255)
              )
              (i64.const 0)
             )
            )
            (br_if $label$124
             (i32.lt_s
              (tee_local $11
               (i32.add
                (get_local $11)
                (i32.const 1)
               )
              )
              (i32.const 7)
             )
            )
           )
          )
          (set_local $4
           (i32.const 1)
          )
          (br_if $label$122
           (i32.lt_s
            (tee_local $11
             (i32.add
              (get_local $11)
              (i32.const 1)
             )
            )
            (i32.const 7)
           )
          )
          (br $label$120)
         )
        )
        (set_local $4
         (i32.const 0)
        )
       )
       (call $eosio_assert
        (get_local $4)
        (i32.const 704)
       )
       (i64.store
        (i32.add
         (get_local $20)
         (i32.const 80)
        )
        (i64.const 1397703940)
       )
       (i64.store align=4
        (i32.add
         (get_local $20)
         (i32.const 92)
        )
        (i64.const 0)
       )
       (i64.store offset=64
        (get_local $20)
        (get_local $16)
       )
       (i64.store offset=56
        (get_local $20)
        (get_local $19)
       )
       (i64.store offset=72
        (get_local $20)
        (get_local $9)
       )
       (i32.store offset=88
        (get_local $20)
        (i32.const 0)
       )
       (set_local $4
        (i32.add
         (get_local $20)
         (i32.const 88)
        )
       )
       (br_if $label$12
        (i32.ge_u
         (tee_local $11
          (call $strlen
           (i32.const 848)
          )
         )
         (i32.const -16)
        )
       )
       (block $label$125
        (block $label$126
         (block $label$127
          (br_if $label$127
           (i32.ge_u
            (get_local $11)
            (i32.const 11)
           )
          )
          (i32.store8
           (i32.add
            (get_local $20)
            (i32.const 88)
           )
           (i32.shl
            (get_local $11)
            (i32.const 1)
           )
          )
          (set_local $5
           (i32.add
            (get_local $4)
            (i32.const 1)
           )
          )
          (br_if $label$126
           (get_local $11)
          )
          (br $label$125)
         )
         (set_local $5
          (call $_Znwj
           (tee_local $10
            (i32.and
             (i32.add
              (get_local $11)
              (i32.const 16)
             )
             (i32.const -16)
            )
           )
          )
         )
         (i32.store
          (i32.add
           (get_local $20)
           (i32.const 88)
          )
          (i32.or
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.store
          (i32.add
           (get_local $20)
           (i32.const 96)
          )
          (get_local $5)
         )
         (i32.store
          (i32.add
           (get_local $20)
           (i32.const 92)
          )
          (get_local $11)
         )
        )
        (drop
         (call $memcpy
          (get_local $5)
          (i32.const 848)
          (get_local $11)
         )
        )
       )
       (i32.store8
        (i32.add
         (get_local $5)
         (get_local $11)
        )
        (i32.const 0)
       )
       (i64.store
        (tee_local $11
         (call $_Znwj
          (i32.const 16)
         )
        )
        (get_local $17)
       )
       (i64.store offset=8
        (get_local $11)
        (get_local $18)
       )
       (i32.store offset=168
        (get_local $20)
        (get_local $11)
       )
       (i32.store offset=176
        (get_local $20)
        (tee_local $11
         (i32.add
          (get_local $11)
          (i32.const 16)
         )
        )
       )
       (i32.store offset=172
        (get_local $20)
        (get_local $11)
       )
       (i64.store offset=224
        (get_local $20)
        (i64.load offset=56
         (get_local $20)
        )
       )
       (i64.store offset=232
        (get_local $20)
        (i64.load
         (i32.add
          (i32.add
           (get_local $20)
           (i32.const 56)
          )
          (i32.const 8)
         )
        )
       )
       (i64.store
        (i32.add
         (i32.add
          (get_local $20)
          (i32.const 224)
         )
         (i32.const 24)
        )
        (i64.load
         (i32.add
          (i32.add
           (get_local $20)
           (i32.const 56)
          )
          (i32.const 24)
         )
        )
       )
       (i64.store offset=240
        (get_local $20)
        (i64.load offset=72
         (get_local $20)
        )
       )
       (i32.store
        (tee_local $11
         (i32.add
          (i32.add
           (get_local $20)
           (i32.const 224)
          )
          (i32.const 40)
         )
        )
        (i32.load
         (i32.add
          (get_local $4)
          (i32.const 8)
         )
        )
       )
       (i64.store offset=256
        (get_local $20)
        (i64.load
         (get_local $4)
        )
       )
       (i32.store
        (i32.add
         (get_local $20)
         (i32.const 88)
        )
        (i32.const 0)
       )
       (i32.store
        (i32.add
         (get_local $20)
         (i32.const 92)
        )
        (i32.const 0)
       )
       (i32.store
        (i32.add
         (i32.add
          (get_local $20)
          (i32.const 56)
         )
         (i32.const 40)
        )
        (i32.const 0)
       )
       (call $_ZN5eosio15dispatch_inlineIJyyNS_5assetENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEEEvyyNS2_6vectorINS_16permission_levelENS6_ISA_EEEENS2_5tupleIJDpT_EEE
        (get_local $14)
        (i64.const -3617168760277827584)
        (i32.add
         (get_local $20)
         (i32.const 168)
        )
        (i32.add
         (get_local $20)
         (i32.const 224)
        )
       )
       (block $label$128
        (br_if $label$128
         (i32.eqz
          (i32.and
           (i32.load8_u offset=256
            (get_local $20)
           )
           (i32.const 1)
          )
         )
        )
        (call $_ZdlPv
         (i32.load
          (get_local $11)
         )
        )
       )
       (block $label$129
        (br_if $label$129
         (i32.eqz
          (tee_local $11
           (i32.load offset=168
            (get_local $20)
           )
          )
         )
        )
        (i32.store offset=172
         (get_local $20)
         (get_local $11)
        )
        (call $_ZdlPv
         (get_local $11)
        )
       )
       (block $label$130
        (br_if $label$130
         (i32.eqz
          (i32.and
           (i32.load8_u
            (i32.add
             (get_local $20)
             (i32.const 88)
            )
           )
           (i32.const 1)
          )
         )
        )
        (call $_ZdlPv
         (i32.load
          (i32.add
           (get_local $20)
           (i32.const 96)
          )
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 672)
       )
       (set_local $18
        (i64.const 0)
       )
       (loop $label$131
        (block $label$132
         (block $label$133
          (block $label$134
           (block $label$135
            (block $label$136
             (br_if $label$136
              (i64.gt_u
               (get_local $13)
               (i64.const 10)
              )
             )
             (br_if $label$135
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$134)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$133
             (i64.eq
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$132)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $12
         (i64.add
          (get_local $12)
          (i64.const -5)
         )
        )
        (set_local $18
         (i64.or
          (get_local $15)
          (get_local $18)
         )
        )
        (br_if $label$131
         (i64.ne
          (tee_local $13
           (i64.add
            (get_local $13)
            (i64.const 1)
           )
          )
          (i64.const 13)
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 16)
       )
       (set_local $19
        (i64.const 0)
       )
       (loop $label$137
        (block $label$138
         (block $label$139
          (block $label$140
           (block $label$141
            (block $label$142
             (br_if $label$142
              (i64.gt_u
               (get_local $13)
               (i64.const 4)
              )
             )
             (br_if $label$141
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$140)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$139
             (i64.le_u
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$138)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $13
         (i64.add
          (get_local $13)
          (i64.const 1)
         )
        )
        (set_local $19
         (i64.or
          (get_local $15)
          (get_local $19)
         )
        )
        (br_if $label$137
         (i64.ne
          (tee_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (i64.const -6)
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 688)
       )
       (set_local $16
        (i64.const 0)
       )
       (loop $label$143
        (block $label$144
         (block $label$145
          (block $label$146
           (block $label$147
            (block $label$148
             (br_if $label$148
              (i64.gt_u
               (get_local $13)
               (i64.const 5)
              )
             )
             (br_if $label$147
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$146)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$145
             (i64.le_u
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$144)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $13
         (i64.add
          (get_local $13)
          (i64.const 1)
         )
        )
        (set_local $16
         (i64.or
          (get_local $15)
          (get_local $16)
         )
        )
        (br_if $label$143
         (i64.ne
          (tee_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (i64.const -6)
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 16)
       )
       (set_local $14
        (i64.const 0)
       )
       (loop $label$149
        (block $label$150
         (block $label$151
          (block $label$152
           (block $label$153
            (block $label$154
             (br_if $label$154
              (i64.gt_u
               (get_local $13)
               (i64.const 4)
              )
             )
             (br_if $label$153
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$152)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$151
             (i64.le_u
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$150)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $13
         (i64.add
          (get_local $13)
          (i64.const 1)
         )
        )
        (set_local $14
         (i64.or
          (get_local $15)
          (get_local $14)
         )
        )
        (br_if $label$149
         (i64.ne
          (tee_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (i64.const -6)
         )
        )
       )
       (set_local $13
        (i64.const 0)
       )
       (set_local $12
        (i64.const 59)
       )
       (set_local $11
        (i32.const 880)
       )
       (set_local $17
        (i64.const 0)
       )
       (loop $label$155
        (block $label$156
         (block $label$157
          (block $label$158
           (block $label$159
            (block $label$160
             (br_if $label$160
              (i64.gt_u
               (get_local $13)
               (i64.const 9)
              )
             )
             (br_if $label$159
              (i32.gt_u
               (i32.and
                (i32.add
                 (tee_local $4
                  (i32.load8_s
                   (get_local $11)
                  )
                 )
                 (i32.const -97)
                )
                (i32.const 255)
               )
               (i32.const 25)
              )
             )
             (set_local $4
              (i32.add
               (get_local $4)
               (i32.const 165)
              )
             )
             (br $label$158)
            )
            (set_local $15
             (i64.const 0)
            )
            (br_if $label$157
             (i64.le_u
              (get_local $13)
              (i64.const 11)
             )
            )
            (br $label$156)
           )
           (set_local $4
            (select
             (i32.add
              (get_local $4)
              (i32.const 208)
             )
             (i32.const 0)
             (i32.lt_u
              (i32.and
               (i32.add
                (get_local $4)
                (i32.const -49)
               )
               (i32.const 255)
              )
              (i32.const 5)
             )
            )
           )
          )
          (set_local $15
           (i64.shr_s
            (i64.shl
             (i64.extend_u/i32
              (get_local $4)
             )
             (i64.const 56)
            )
            (i64.const 56)
           )
          )
         )
         (set_local $15
          (i64.shl
           (i64.and
            (get_local $15)
            (i64.const 31)
           )
           (i64.and
            (get_local $12)
            (i64.const 4294967295)
           )
          )
         )
        )
        (set_local $11
         (i32.add
          (get_local $11)
          (i32.const 1)
         )
        )
        (set_local $13
         (i64.add
          (get_local $13)
          (i64.const 1)
         )
        )
        (set_local $17
         (i64.or
          (get_local $15)
          (get_local $17)
         )
        )
        (br_if $label$155
         (i64.ne
          (tee_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (i64.const -6)
         )
        )
       )
       (call $eosio_assert
        (i64.lt_u
         (i64.add
          (get_local $7)
          (i64.const 4611686018427387903)
         )
         (i64.const 9223372036854775807)
        )
        (i32.const 992)
       )
       (set_local $13
        (i64.const 5459781)
       )
       (set_local $11
        (i32.const 0)
       )
       (block $label$161
        (block $label$162
         (loop $label$163
          (br_if $label$162
           (i32.gt_u
            (i32.add
             (i32.shl
              (i32.wrap/i64
               (get_local $13)
              )
              (i32.const 24)
             )
             (i32.const -1073741825)
            )
            (i32.const 452984830)
           )
          )
          (block $label$164
           (br_if $label$164
            (i64.ne
             (i64.and
              (tee_local $13
               (i64.shr_u
                (get_local $13)
                (i64.const 8)
               )
              )
              (i64.const 255)
             )
             (i64.const 0)
            )
           )
           (loop $label$165
            (br_if $label$162
             (i64.ne
              (i64.and
               (tee_local $13
                (i64.shr_u
                 (get_local $13)
                 (i64.const 8)
                )
               )
               (i64.const 255)
              )
              (i64.const 0)
             )
            )
            (br_if $label$165
             (i32.lt_s
              (tee_local $11
               (i32.add
                (get_local $11)
                (i32.const 1)
               )
              )
              (i32.const 7)
             )
            )
           )
          )
          (set_local $4
           (i32.const 1)
          )
          (br_if $label$163
           (i32.lt_s
            (tee_local $11
             (i32.add
              (get_local $11)
              (i32.const 1)
             )
            )
            (i32.const 7)
           )
          )
          (br $label$161)
         )
        )
        (set_local $4
         (i32.const 0)
        )
       )
       (call $eosio_assert
        (get_local $4)
        (i32.const 704)
       )
       (i64.store
        (i32.add
         (get_local $20)
         (i32.const 32)
        )
        (i64.const 1397703940)
       )
       (i64.store align=4
        (i32.add
         (get_local $20)
         (i32.const 44)
        )
        (i64.const 0)
       )
       (i64.store offset=16
        (get_local $20)
        (get_local $17)
       )
       (i64.store offset=8
        (get_local $20)
        (get_local $14)
       )
       (i64.store offset=24
        (get_local $20)
        (get_local $7)
       )
       (i32.store offset=40
        (get_local $20)
        (i32.const 0)
       )
       (set_local $4
        (i32.add
         (get_local $20)
         (i32.const 40)
        )
       )
       (br_if $label$11
        (i32.ge_u
         (tee_local $11
          (call $strlen
           (i32.const 896)
          )
         )
         (i32.const -16)
        )
       )
       (block $label$166
        (block $label$167
         (block $label$168
          (br_if $label$168
           (i32.ge_u
            (get_local $11)
            (i32.const 11)
           )
          )
          (i32.store8
           (i32.add
            (get_local $20)
            (i32.const 40)
           )
           (i32.shl
            (get_local $11)
            (i32.const 1)
           )
          )
          (set_local $5
           (i32.add
            (get_local $4)
            (i32.const 1)
           )
          )
          (br_if $label$167
           (get_local $11)
          )
          (br $label$166)
         )
         (set_local $5
          (call $_Znwj
           (tee_local $10
            (i32.and
             (i32.add
              (get_local $11)
              (i32.const 16)
             )
             (i32.const -16)
            )
           )
          )
         )
         (i32.store
          (i32.add
           (get_local $20)
           (i32.const 40)
          )
          (i32.or
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.store
          (i32.add
           (get_local $20)
           (i32.const 48)
          )
          (get_local $5)
         )
         (i32.store
          (i32.add
           (get_local $20)
           (i32.const 44)
          )
          (get_local $11)
         )
        )
        (drop
         (call $memcpy
          (get_local $5)
          (i32.const 896)
          (get_local $11)
         )
        )
       )
       (i32.store8
        (i32.add
         (get_local $5)
         (get_local $11)
        )
        (i32.const 0)
       )
       (i64.store
        (tee_local $11
         (call $_Znwj
          (i32.const 16)
         )
        )
        (get_local $19)
       )
       (i64.store offset=8
        (get_local $11)
        (get_local $16)
       )
       (i32.store offset=168
        (get_local $20)
        (get_local $11)
       )
       (i32.store offset=176
        (get_local $20)
        (tee_local $11
         (i32.add
          (get_local $11)
          (i32.const 16)
         )
        )
       )
       (i32.store offset=172
        (get_local $20)
        (get_local $11)
       )
       (i64.store offset=224
        (get_local $20)
        (i64.load offset=8
         (get_local $20)
        )
       )
       (i64.store offset=232
        (get_local $20)
        (i64.load
         (i32.add
          (i32.add
           (get_local $20)
           (i32.const 8)
          )
          (i32.const 8)
         )
        )
       )
       (i64.store
        (i32.add
         (i32.add
          (get_local $20)
          (i32.const 224)
         )
         (i32.const 24)
        )
        (i64.load
         (i32.add
          (i32.add
           (get_local $20)
           (i32.const 8)
          )
          (i32.const 24)
         )
        )
       )
       (i64.store offset=240
        (get_local $20)
        (i64.load offset=24
         (get_local $20)
        )
       )
       (i32.store
        (tee_local $11
         (i32.add
          (i32.add
           (get_local $20)
           (i32.const 224)
          )
          (i32.const 40)
         )
        )
        (i32.load
         (i32.add
          (get_local $4)
          (i32.const 8)
         )
        )
       )
       (i64.store offset=256
        (get_local $20)
        (i64.load
         (get_local $4)
        )
       )
       (i32.store
        (i32.add
         (get_local $20)
         (i32.const 40)
        )
        (i32.const 0)
       )
       (i32.store
        (i32.add
         (get_local $20)
         (i32.const 44)
        )
        (i32.const 0)
       )
       (i32.store
        (i32.add
         (i32.add
          (get_local $20)
          (i32.const 8)
         )
         (i32.const 40)
        )
        (i32.const 0)
       )
       (call $_ZN5eosio15dispatch_inlineIJyyNS_5assetENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEEEvyyNS2_6vectorINS_16permission_levelENS6_ISA_EEEENS2_5tupleIJDpT_EEE
        (get_local $18)
        (i64.const -3617168760277827584)
        (i32.add
         (get_local $20)
         (i32.const 168)
        )
        (i32.add
         (get_local $20)
         (i32.const 224)
        )
       )
       (block $label$169
        (br_if $label$169
         (i32.eqz
          (i32.and
           (i32.load8_u offset=256
            (get_local $20)
           )
           (i32.const 1)
          )
         )
        )
        (call $_ZdlPv
         (i32.load
          (get_local $11)
         )
        )
       )
       (block $label$170
        (br_if $label$170
         (i32.eqz
          (tee_local $11
           (i32.load offset=168
            (get_local $20)
           )
          )
         )
        )
        (i32.store offset=172
         (get_local $20)
         (get_local $11)
        )
        (call $_ZdlPv
         (get_local $11)
        )
       )
       (block $label$171
        (br_if $label$171
         (i32.eqz
          (i32.and
           (i32.load8_u
            (i32.add
             (get_local $20)
             (i32.const 40)
            )
           )
           (i32.const 1)
          )
         )
        )
        (call $_ZdlPv
         (i32.load
          (i32.add
           (get_local $20)
           (i32.const 48)
          )
         )
        )
       )
       (i64.store
        (i32.add
         (get_local $0)
         (i32.const 232)
        )
        (i64.load offset=200
         (get_local $20)
        )
       )
       (i64.store
        (tee_local $11
         (i32.add
          (get_local $0)
          (i32.const 240)
         )
        )
        (i64.add
         (i64.load
          (get_local $11)
         )
         (get_local $7)
        )
       )
       (i64.store
        (tee_local $11
         (i32.add
          (get_local $0)
          (i32.const 248)
         )
        )
        (i64.add
         (i64.load
          (get_local $11)
         )
         (get_local $9)
        )
       )
      )
      (set_local $15
       (i64.const 0)
      )
      (set_local $16
       (i64.const 0)
      )
      (block $label$172
       (br_if $label$172
        (i32.eqz
         (tee_local $11
          (i32.load
           (i32.add
            (get_local $0)
            (i32.const 256)
           )
          )
         )
        )
       )
       (set_local $16
        (i64.div_s
         (i64.mul
          (i64.load32_u offset=72
           (get_local $3)
          )
          (i64.load
           (i32.add
            (get_local $0)
            (i32.const 248)
           )
          )
         )
         (i64.extend_u/i32
          (get_local $11)
         )
        )
       )
      )
      (set_local $12
       (i64.load
        (tee_local $4
         (i32.add
          (get_local $0)
          (i32.const 240)
         )
        )
       )
      )
      (block $label$173
       (br_if $label$173
        (i32.or
         (f64.le
          (tee_local $8
           (f64.load
            (i32.add
             (get_local $0)
             (i32.const 288)
            )
           )
          )
          (f64.const 0)
         )
         (f64.ne
          (get_local $8)
          (get_local $8)
         )
        )
       )
       (set_local $15
        (i64.trunc_s/f64
         (f64.div
          (f64.mul
           (f64.convert_s/i64
            (get_local $12)
           )
           (f64.load offset=8
            (get_local $3)
           )
          )
          (get_local $8)
         )
        )
       )
      )
      (i32.store
       (i32.add
        (get_local $0)
        (i32.const 256)
       )
       (i32.sub
        (get_local $11)
        (i32.load offset=72
         (get_local $3)
        )
       )
      )
      (set_local $13
       (i64.const 0)
      )
      (i64.store
       (get_local $4)
       (i64.sub
        (get_local $12)
        (tee_local $9
         (select
          (i64.const 0)
          (get_local $15)
          (i64.lt_s
           (get_local $15)
           (i64.const 1000000)
          )
         )
        )
       )
      )
      (i64.store
       (tee_local $11
        (i32.add
         (get_local $0)
         (i32.const 248)
        )
       )
       (i64.sub
        (i64.load
         (get_local $11)
        )
        (get_local $16)
       )
      )
      (i32.store offset=224
       (get_local $20)
       (i32.add
        (get_local $20)
        (i32.const 200)
       )
      )
      (call $_ZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE6modifyIZNS1_15system_contract12claimrewardsERKyE3$_2EEvRKS2_yOT_
       (get_local $2)
       (get_local $3)
       (i32.add
        (get_local $20)
        (i32.const 224)
       )
      )
      (block $label$174
       (block $label$175
        (block $label$176
         (br_if $label$176
          (i64.lt_s
           (get_local $16)
           (i64.const 1)
          )
         )
         (set_local $12
          (i64.const 59)
         )
         (set_local $11
          (i32.const 672)
         )
         (set_local $14
          (i64.const 0)
         )
         (loop $label$177
          (block $label$178
           (block $label$179
            (block $label$180
             (block $label$181
              (block $label$182
               (br_if $label$182
                (i64.gt_u
                 (get_local $13)
                 (i64.const 10)
                )
               )
               (br_if $label$181
                (i32.gt_u
                 (i32.and
                  (i32.add
                   (tee_local $4
                    (i32.load8_s
                     (get_local $11)
                    )
                   )
                   (i32.const -97)
                  )
                  (i32.const 255)
                 )
                 (i32.const 25)
                )
               )
               (set_local $4
                (i32.add
                 (get_local $4)
                 (i32.const 165)
                )
               )
               (br $label$180)
              )
              (set_local $15
               (i64.const 0)
              )
              (br_if $label$179
               (i64.eq
                (get_local $13)
                (i64.const 11)
               )
              )
              (br $label$178)
             )
             (set_local $4
              (select
               (i32.add
                (get_local $4)
                (i32.const 208)
               )
               (i32.const 0)
               (i32.lt_u
                (i32.and
                 (i32.add
                  (get_local $4)
                  (i32.const -49)
                 )
                 (i32.const 255)
                )
                (i32.const 5)
               )
              )
             )
            )
            (set_local $15
             (i64.shr_s
              (i64.shl
               (i64.extend_u/i32
                (get_local $4)
               )
               (i64.const 56)
              )
              (i64.const 56)
             )
            )
           )
           (set_local $15
            (i64.shl
             (i64.and
              (get_local $15)
              (i64.const 31)
             )
             (i64.and
              (get_local $12)
              (i64.const 4294967295)
             )
            )
           )
          )
          (set_local $11
           (i32.add
            (get_local $11)
            (i32.const 1)
           )
          )
          (set_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (set_local $14
           (i64.or
            (get_local $15)
            (get_local $14)
           )
          )
          (br_if $label$177
           (i64.ne
            (tee_local $13
             (i64.add
              (get_local $13)
              (i64.const 1)
             )
            )
            (i64.const 13)
           )
          )
         )
         (set_local $13
          (i64.const 0)
         )
         (set_local $12
          (i64.const 59)
         )
         (set_local $11
          (i32.const 832)
         )
         (set_local $17
          (i64.const 0)
         )
         (loop $label$183
          (block $label$184
           (block $label$185
            (block $label$186
             (block $label$187
              (block $label$188
               (br_if $label$188
                (i64.gt_u
                 (get_local $13)
                 (i64.const 9)
                )
               )
               (br_if $label$187
                (i32.gt_u
                 (i32.and
                  (i32.add
                   (tee_local $4
                    (i32.load8_s
                     (get_local $11)
                    )
                   )
                   (i32.const -97)
                  )
                  (i32.const 255)
                 )
                 (i32.const 25)
                )
               )
               (set_local $4
                (i32.add
                 (get_local $4)
                 (i32.const 165)
                )
               )
               (br $label$186)
              )
              (set_local $15
               (i64.const 0)
              )
              (br_if $label$185
               (i64.le_u
                (get_local $13)
                (i64.const 11)
               )
              )
              (br $label$184)
             )
             (set_local $4
              (select
               (i32.add
                (get_local $4)
                (i32.const 208)
               )
               (i32.const 0)
               (i32.lt_u
                (i32.and
                 (i32.add
                  (get_local $4)
                  (i32.const -49)
                 )
                 (i32.const 255)
                )
                (i32.const 5)
               )
              )
             )
            )
            (set_local $15
             (i64.shr_s
              (i64.shl
               (i64.extend_u/i32
                (get_local $4)
               )
               (i64.const 56)
              )
              (i64.const 56)
             )
            )
           )
           (set_local $15
            (i64.shl
             (i64.and
              (get_local $15)
              (i64.const 31)
             )
             (i64.and
              (get_local $12)
              (i64.const 4294967295)
             )
            )
           )
          )
          (set_local $11
           (i32.add
            (get_local $11)
            (i32.const 1)
           )
          )
          (set_local $13
           (i64.add
            (get_local $13)
            (i64.const 1)
           )
          )
          (set_local $17
           (i64.or
            (get_local $15)
            (get_local $17)
           )
          )
          (br_if $label$183
           (i64.ne
            (tee_local $12
             (i64.add
              (get_local $12)
              (i64.const -5)
             )
            )
            (i64.const -6)
           )
          )
         )
         (set_local $13
          (i64.const 0)
         )
         (set_local $12
          (i64.const 59)
         )
         (set_local $11
          (i32.const 688)
         )
         (set_local $18
          (i64.const 0)
         )
         (loop $label$189
          (block $label$190
           (block $label$191
            (block $label$192
             (block $label$193
              (block $label$194
               (br_if $label$194
                (i64.gt_u
                 (get_local $13)
                 (i64.const 5)
                )
               )
               (br_if $label$193
                (i32.gt_u
                 (i32.and
                  (i32.add
                   (tee_local $4
                    (i32.load8_s
                     (get_local $11)
                    )
                   )
                   (i32.const -97)
                  )
                  (i32.const 255)
                 )
                 (i32.const 25)
                )
               )
               (set_local $4
                (i32.add
                 (get_local $4)
                 (i32.const 165)
                )
               )
               (br $label$192)
              )
              (set_local $15
               (i64.const 0)
              )
              (br_if $label$191
               (i64.le_u
                (get_local $13)
                (i64.const 11)
               )
              )
              (br $label$190)
             )
             (set_local $4
              (select
               (i32.add
                (get_local $4)
                (i32.const 208)
               )
               (i32.const 0)
               (i32.lt_u
                (i32.and
                 (i32.add
                  (get_local $4)
                  (i32.const -49)
                 )
                 (i32.const 255)
                )
                (i32.const 5)
               )
              )
             )
            )
            (set_local $15
             (i64.shr_s
              (i64.shl
               (i64.extend_u/i32
                (get_local $4)
               )
               (i64.const 56)
              )
              (i64.const 56)
             )
            )
           )
           (set_local $15
            (i64.shl
             (i64.and
              (get_local $15)
              (i64.const 31)
             )
             (i64.and
              (get_local $12)
              (i64.const 4294967295)
             )
            )
           )
          )
          (set_local $11
           (i32.add
            (get_local $11)
            (i32.const 1)
           )
          )
          (set_local $13
           (i64.add
            (get_local $13)
            (i64.const 1)
           )
          )
          (set_local $18
           (i64.or
            (get_local $15)
            (get_local $18)
           )
          )
          (br_if $label$189
           (i64.ne
            (tee_local $12
             (i64.add
              (get_local $12)
              (i64.const -5)
             )
            )
            (i64.const -6)
           )
          )
         )
         (set_local $13
          (i64.const 0)
         )
         (set_local $12
          (i64.const 59)
         )
         (set_local $11
          (i32.const 832)
         )
         (set_local $19
          (i64.const 0)
         )
         (loop $label$195
          (block $label$196
           (block $label$197
            (block $label$198
             (block $label$199
              (block $label$200
               (br_if $label$200
                (i64.gt_u
                 (get_local $13)
                 (i64.const 9)
                )
               )
               (br_if $label$199
                (i32.gt_u
                 (i32.and
                  (i32.add
                   (tee_local $4
                    (i32.load8_s
                     (get_local $11)
                    )
                   )
                   (i32.const -97)
                  )
                  (i32.const 255)
                 )
                 (i32.const 25)
                )
               )
               (set_local $4
                (i32.add
                 (get_local $4)
                 (i32.const 165)
                )
               )
               (br $label$198)
              )
              (set_local $15
               (i64.const 0)
              )
              (br_if $label$197
               (i64.le_u
                (get_local $13)
                (i64.const 11)
               )
              )
              (br $label$196)
             )
             (set_local $4
              (select
               (i32.add
                (get_local $4)
                (i32.const 208)
               )
               (i32.const 0)
               (i32.lt_u
                (i32.and
                 (i32.add
                  (get_local $4)
                  (i32.const -49)
                 )
                 (i32.const 255)
                )
                (i32.const 5)
               )
              )
             )
            )
            (set_local $15
             (i64.shr_s
              (i64.shl
               (i64.extend_u/i32
                (get_local $4)
               )
               (i64.const 56)
              )
              (i64.const 56)
             )
            )
           )
           (set_local $15
            (i64.shl
             (i64.and
              (get_local $15)
              (i64.const 31)
             )
             (i64.and
              (get_local $12)
              (i64.const 4294967295)
             )
            )
           )
          )
          (set_local $11
           (i32.add
            (get_local $11)
            (i32.const 1)
           )
          )
          (set_local $13
           (i64.add
            (get_local $13)
            (i64.const 1)
           )
          )
          (set_local $19
           (i64.or
            (get_local $15)
            (get_local $19)
           )
          )
          (br_if $label$195
           (i64.ne
            (tee_local $12
             (i64.add
              (get_local $12)
              (i64.const -5)
             )
            )
            (i64.const -6)
           )
          )
         )
         (call $eosio_assert
          (i64.lt_u
           (i64.add
            (get_local $16)
            (i64.const 4611686018427387903)
           )
           (i64.const 9223372036854775807)
          )
          (i32.const 992)
         )
         (set_local $13
          (i64.const 5459781)
         )
         (set_local $11
          (i32.const 0)
         )
         (block $label$201
          (block $label$202
           (loop $label$203
            (br_if $label$202
             (i32.gt_u
              (i32.add
               (i32.shl
                (i32.wrap/i64
                 (get_local $13)
                )
                (i32.const 24)
               )
               (i32.const -1073741825)
              )
              (i32.const 452984830)
             )
            )
            (block $label$204
             (br_if $label$204
              (i64.ne
               (i64.and
                (tee_local $13
                 (i64.shr_u
                  (get_local $13)
                  (i64.const 8)
                 )
                )
                (i64.const 255)
               )
               (i64.const 0)
              )
             )
             (loop $label$205
              (br_if $label$202
               (i64.ne
                (i64.and
                 (tee_local $13
                  (i64.shr_u
                   (get_local $13)
                   (i64.const 8)
                  )
                 )
                 (i64.const 255)
                )
                (i64.const 0)
               )
              )
              (br_if $label$205
               (i32.lt_s
                (tee_local $11
                 (i32.add
                  (get_local $11)
                  (i32.const 1)
                 )
                )
                (i32.const 7)
               )
              )
             )
            )
            (set_local $4
             (i32.const 1)
            )
            (br_if $label$203
             (i32.lt_s
              (tee_local $11
               (i32.add
                (get_local $11)
                (i32.const 1)
               )
              )
              (i32.const 7)
             )
            )
            (br $label$201)
           )
          )
          (set_local $4
           (i32.const 0)
          )
         )
         (call $eosio_assert
          (get_local $4)
          (i32.const 704)
         )
         (i32.store
          (i32.add
           (get_local $20)
           (i32.const 216)
          )
          (i32.const 0)
         )
         (i64.store offset=208
          (get_local $20)
          (i64.const 0)
         )
         (br_if $label$175
          (i32.ge_u
           (tee_local $11
            (call $strlen
             (i32.const 928)
            )
           )
           (i32.const -16)
          )
         )
         (block $label$206
          (block $label$207
           (block $label$208
            (br_if $label$208
             (i32.ge_u
              (get_local $11)
              (i32.const 11)
             )
            )
            (i32.store8 offset=208
             (get_local $20)
             (i32.shl
              (get_local $11)
              (i32.const 1)
             )
            )
            (set_local $4
             (i32.or
              (i32.add
               (get_local $20)
               (i32.const 208)
              )
              (i32.const 1)
             )
            )
            (br_if $label$207
             (get_local $11)
            )
            (br $label$206)
           )
           (set_local $4
            (call $_Znwj
             (tee_local $5
              (i32.and
               (i32.add
                (get_local $11)
                (i32.const 16)
               )
               (i32.const -16)
              )
             )
            )
           )
           (i32.store offset=208
            (get_local $20)
            (i32.or
             (get_local $5)
             (i32.const 1)
            )
           )
           (i32.store offset=216
            (get_local $20)
            (get_local $4)
           )
           (i32.store offset=212
            (get_local $20)
            (get_local $11)
           )
          )
          (drop
           (call $memcpy
            (get_local $4)
            (i32.const 928)
            (get_local $11)
           )
          )
         )
         (i32.store8
          (i32.add
           (get_local $4)
           (get_local $11)
          )
          (i32.const 0)
         )
         (set_local $4
          (i32.load offset=208
           (get_local $20)
          )
         )
         (i32.store offset=208
          (get_local $20)
          (i32.const 0)
         )
         (set_local $5
          (i32.load offset=212
           (get_local $20)
          )
         )
         (i32.store offset=212
          (get_local $20)
          (i32.const 0)
         )
         (set_local $0
          (i32.load offset=216
           (get_local $20)
          )
         )
         (i32.store offset=216
          (get_local $20)
          (i32.const 0)
         )
         (set_local $13
          (i64.load
           (get_local $1)
          )
         )
         (i64.store
          (tee_local $11
           (call $_Znwj
            (i32.const 16)
           )
          )
          (get_local $17)
         )
         (i64.store offset=8
          (get_local $11)
          (get_local $18)
         )
         (i32.store offset=168
          (get_local $20)
          (get_local $11)
         )
         (i32.store offset=176
          (get_local $20)
          (tee_local $11
           (i32.add
            (get_local $11)
            (i32.const 16)
           )
          )
         )
         (i64.store offset=224
          (get_local $20)
          (get_local $19)
         )
         (i32.store offset=172
          (get_local $20)
          (get_local $11)
         )
         (i64.store offset=232
          (get_local $20)
          (get_local $13)
         )
         (i64.store offset=240
          (get_local $20)
          (get_local $16)
         )
         (i64.store
          (i32.add
           (get_local $20)
           (i32.const 248)
          )
          (i64.const 1397703940)
         )
         (i32.store offset=256
          (get_local $20)
          (get_local $4)
         )
         (i32.store
          (i32.add
           (get_local $20)
           (i32.const 260)
          )
          (get_local $5)
         )
         (i32.store
          (tee_local $11
           (i32.add
            (get_local $20)
            (i32.const 264)
           )
          )
          (get_local $0)
         )
         (call $_ZN5eosio15dispatch_inlineIJyyNS_5assetENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEEEvyyNS2_6vectorINS_16permission_levelENS6_ISA_EEEENS2_5tupleIJDpT_EEE
          (get_local $14)
          (i64.const -3617168760277827584)
          (i32.add
           (get_local $20)
           (i32.const 168)
          )
          (i32.add
           (get_local $20)
           (i32.const 224)
          )
         )
         (block $label$209
          (br_if $label$209
           (i32.eqz
            (i32.and
             (i32.load8_u offset=256
              (get_local $20)
             )
             (i32.const 1)
            )
           )
          )
          (call $_ZdlPv
           (i32.load
            (get_local $11)
           )
          )
         )
         (block $label$210
          (br_if $label$210
           (i32.eqz
            (tee_local $11
             (i32.load offset=168
              (get_local $20)
             )
            )
           )
          )
          (i32.store offset=172
           (get_local $20)
           (get_local $11)
          )
          (call $_ZdlPv
           (get_local $11)
          )
         )
         (br_if $label$176
          (i32.eqz
           (i32.and
            (i32.load8_u offset=208
             (get_local $20)
            )
            (i32.const 1)
           )
          )
         )
         (call $_ZdlPv
          (i32.load
           (i32.add
            (get_local $20)
            (i32.const 216)
           )
          )
         )
        )
        (block $label$211
         (br_if $label$211
          (i64.lt_s
           (get_local $9)
           (i64.const 1)
          )
         )
         (set_local $13
          (i64.const 0)
         )
         (set_local $12
          (i64.const 59)
         )
         (set_local $11
          (i32.const 672)
         )
         (set_local $14
          (i64.const 0)
         )
         (loop $label$212
          (block $label$213
           (block $label$214
            (block $label$215
             (block $label$216
              (block $label$217
               (br_if $label$217
                (i64.gt_u
                 (get_local $13)
                 (i64.const 10)
                )
               )
               (br_if $label$216
                (i32.gt_u
                 (i32.and
                  (i32.add
                   (tee_local $4
                    (i32.load8_s
                     (get_local $11)
                    )
                   )
                   (i32.const -97)
                  )
                  (i32.const 255)
                 )
                 (i32.const 25)
                )
               )
               (set_local $4
                (i32.add
                 (get_local $4)
                 (i32.const 165)
                )
               )
               (br $label$215)
              )
              (set_local $15
               (i64.const 0)
              )
              (br_if $label$214
               (i64.eq
                (get_local $13)
                (i64.const 11)
               )
              )
              (br $label$213)
             )
             (set_local $4
              (select
               (i32.add
                (get_local $4)
                (i32.const 208)
               )
               (i32.const 0)
               (i32.lt_u
                (i32.and
                 (i32.add
                  (get_local $4)
                  (i32.const -49)
                 )
                 (i32.const 255)
                )
                (i32.const 5)
               )
              )
             )
            )
            (set_local $15
             (i64.shr_s
              (i64.shl
               (i64.extend_u/i32
                (get_local $4)
               )
               (i64.const 56)
              )
              (i64.const 56)
             )
            )
           )
           (set_local $15
            (i64.shl
             (i64.and
              (get_local $15)
              (i64.const 31)
             )
             (i64.and
              (get_local $12)
              (i64.const 4294967295)
             )
            )
           )
          )
          (set_local $11
           (i32.add
            (get_local $11)
            (i32.const 1)
           )
          )
          (set_local $12
           (i64.add
            (get_local $12)
            (i64.const -5)
           )
          )
          (set_local $14
           (i64.or
            (get_local $15)
            (get_local $14)
           )
          )
          (br_if $label$212
           (i64.ne
            (tee_local $13
             (i64.add
              (get_local $13)
              (i64.const 1)
             )
            )
            (i64.const 13)
           )
          )
         )
         (set_local $13
          (i64.const 0)
         )
         (set_local $12
          (i64.const 59)
         )
         (set_local $11
          (i32.const 880)
         )
         (set_local $17
          (i64.const 0)
         )
         (loop $label$218
          (block $label$219
           (block $label$220
            (block $label$221
             (block $label$222
              (block $label$223
               (br_if $label$223
                (i64.gt_u
                 (get_local $13)
                 (i64.const 9)
                )
               )
               (br_if $label$222
                (i32.gt_u
                 (i32.and
                  (i32.add
                   (tee_local $4
                    (i32.load8_s
                     (get_local $11)
                    )
                   )
                   (i32.const -97)
                  )
                  (i32.const 255)
                 )
                 (i32.const 25)
                )
               )
               (set_local $4
                (i32.add
                 (get_local $4)
                 (i32.const 165)
                )
               )
               (br $label$221)
              )
              (set_local $15
               (i64.const 0)
              )
              (br_if $label$220
               (i64.le_u
                (get_local $13)
                (i64.const 11)
               )
              )
              (br $label$219)
             )
             (set_local $4
              (select
               (i32.add
                (get_local $4)
                (i32.const 208)
               )
               (i32.const 0)
               (i32.lt_u
                (i32.and
                 (i32.add
                  (get_local $4)
                  (i32.const -49)
                 )
                 (i32.const 255)
                )
                (i32.const 5)
               )
              )
             )
            )
            (set_local $15
             (i64.shr_s
              (i64.shl
               (i64.extend_u/i32
                (get_local $4)
               )
               (i64.const 56)
              )
              (i64.const 56)
             )
            )
           )
           (set_local $15
            (i64.shl
             (i64.and
              (get_local $15)
              (i64.const 31)
             )
             (i64.and
              (get_local $12)
              (i64.const 4294967295)
             )
            )
           )
          )
          (set_local $11
           (i32.add
            (get_local $11)
            (i32.const 1)
           )
          )
          (set_local $13
           (i64.add
            (get_local $13)
            (i64.const 1)
           )
          )
          (set_local $17
           (i64.or
            (get_local $15)
            (get_local $17)
           )
          )
          (br_if $label$218
           (i64.ne
            (tee_local $12
             (i64.add
              (get_local $12)
              (i64.const -5)
             )
            )
            (i64.const -6)
           )
          )
         )
         (set_local $13
          (i64.const 0)
         )
         (set_local $12
          (i64.const 59)
         )
         (set_local $11
          (i32.const 688)
         )
         (set_local $18
          (i64.const 0)
         )
         (loop $label$224
          (block $label$225
           (block $label$226
            (block $label$227
             (block $label$228
              (block $label$229
               (br_if $label$229
                (i64.gt_u
                 (get_local $13)
                 (i64.const 5)
                )
               )
               (br_if $label$228
                (i32.gt_u
                 (i32.and
                  (i32.add
                   (tee_local $4
                    (i32.load8_s
                     (get_local $11)
                    )
                   )
                   (i32.const -97)
                  )
                  (i32.const 255)
                 )
                 (i32.const 25)
                )
               )
               (set_local $4
                (i32.add
                 (get_local $4)
                 (i32.const 165)
                )
               )
               (br $label$227)
              )
              (set_local $15
               (i64.const 0)
              )
              (br_if $label$226
               (i64.le_u
                (get_local $13)
                (i64.const 11)
               )
              )
              (br $label$225)
             )
             (set_local $4
              (select
               (i32.add
                (get_local $4)
                (i32.const 208)
               )
               (i32.const 0)
               (i32.lt_u
                (i32.and
                 (i32.add
                  (get_local $4)
                  (i32.const -49)
                 )
                 (i32.const 255)
                )
                (i32.const 5)
               )
              )
             )
            )
            (set_local $15
             (i64.shr_s
              (i64.shl
               (i64.extend_u/i32
                (get_local $4)
               )
               (i64.const 56)
              )
              (i64.const 56)
             )
            )
           )
           (set_local $15
            (i64.shl
             (i64.and
              (get_local $15)
              (i64.const 31)
             )
             (i64.and
              (get_local $12)
              (i64.const 4294967295)
             )
            )
           )
          )
          (set_local $11
           (i32.add
            (get_local $11)
            (i32.const 1)
           )
          )
          (set_local $13
           (i64.add
            (get_local $13)
            (i64.const 1)
           )
          )
          (set_local $18
           (i64.or
            (get_local $15)
            (get_local $18)
           )
          )
          (br_if $label$224
           (i64.ne
            (tee_local $12
             (i64.add
              (get_local $12)
              (i64.const -5)
             )
            )
            (i64.const -6)
           )
          )
         )
         (set_local $13
          (i64.const 0)
         )
         (set_local $12
          (i64.const 59)
         )
         (set_local $11
          (i32.const 880)
         )
         (set_local $19
          (i64.const 0)
         )
         (loop $label$230
          (block $label$231
           (block $label$232
            (block $label$233
             (block $label$234
              (block $label$235
               (br_if $label$235
                (i64.gt_u
                 (get_local $13)
                 (i64.const 9)
                )
               )
               (br_if $label$234
                (i32.gt_u
                 (i32.and
                  (i32.add
                   (tee_local $4
                    (i32.load8_s
                     (get_local $11)
                    )
                   )
                   (i32.const -97)
                  )
                  (i32.const 255)
                 )
                 (i32.const 25)
                )
               )
               (set_local $4
                (i32.add
                 (get_local $4)
                 (i32.const 165)
                )
               )
               (br $label$233)
              )
              (set_local $15
               (i64.const 0)
              )
              (br_if $label$232
               (i64.le_u
                (get_local $13)
                (i64.const 11)
               )
              )
              (br $label$231)
             )
             (set_local $4
              (select
               (i32.add
                (get_local $4)
                (i32.const 208)
               )
               (i32.const 0)
               (i32.lt_u
                (i32.and
                 (i32.add
                  (get_local $4)
                  (i32.const -49)
                 )
                 (i32.const 255)
                )
                (i32.const 5)
               )
              )
             )
            )
            (set_local $15
             (i64.shr_s
              (i64.shl
               (i64.extend_u/i32
                (get_local $4)
               )
               (i64.const 56)
              )
              (i64.const 56)
             )
            )
           )
           (set_local $15
            (i64.shl
             (i64.and
              (get_local $15)
              (i64.const 31)
             )
             (i64.and
              (get_local $12)
              (i64.const 4294967295)
             )
            )
           )
          )
          (set_local $11
           (i32.add
            (get_local $11)
            (i32.const 1)
           )
          )
          (set_local $13
           (i64.add
            (get_local $13)
            (i64.const 1)
           )
          )
          (set_local $19
           (i64.or
            (get_local $15)
            (get_local $19)
           )
          )
          (br_if $label$230
           (i64.ne
            (tee_local $12
             (i64.add
              (get_local $12)
              (i64.const -5)
             )
            )
            (i64.const -6)
           )
          )
         )
         (call $eosio_assert
          (i64.lt_u
           (i64.add
            (get_local $9)
            (i64.const 4611686018427387903)
           )
           (i64.const 9223372036854775807)
          )
          (i32.const 992)
         )
         (set_local $13
          (i64.const 5459781)
         )
         (set_local $11
          (i32.const 0)
         )
         (block $label$236
          (block $label$237
           (loop $label$238
            (br_if $label$237
             (i32.gt_u
              (i32.add
               (i32.shl
                (i32.wrap/i64
                 (get_local $13)
                )
                (i32.const 24)
               )
               (i32.const -1073741825)
              )
              (i32.const 452984830)
             )
            )
            (block $label$239
             (br_if $label$239
              (i64.ne
               (i64.and
                (tee_local $13
                 (i64.shr_u
                  (get_local $13)
                  (i64.const 8)
                 )
                )
                (i64.const 255)
               )
               (i64.const 0)
              )
             )
             (loop $label$240
              (br_if $label$237
               (i64.ne
                (i64.and
                 (tee_local $13
                  (i64.shr_u
                   (get_local $13)
                   (i64.const 8)
                  )
                 )
                 (i64.const 255)
                )
                (i64.const 0)
               )
              )
              (br_if $label$240
               (i32.lt_s
                (tee_local $11
                 (i32.add
                  (get_local $11)
                  (i32.const 1)
                 )
                )
                (i32.const 7)
               )
              )
             )
            )
            (set_local $4
             (i32.const 1)
            )
            (br_if $label$238
             (i32.lt_s
              (tee_local $11
               (i32.add
                (get_local $11)
                (i32.const 1)
               )
              )
              (i32.const 7)
             )
            )
            (br $label$236)
           )
          )
          (set_local $4
           (i32.const 0)
          )
         )
         (call $eosio_assert
          (get_local $4)
          (i32.const 704)
         )
         (i32.store
          (i32.add
           (get_local $20)
           (i32.const 216)
          )
          (i32.const 0)
         )
         (i64.store offset=208
          (get_local $20)
          (i64.const 0)
         )
         (br_if $label$174
          (i32.ge_u
           (tee_local $11
            (call $strlen
             (i32.const 960)
            )
           )
           (i32.const -16)
          )
         )
         (block $label$241
          (block $label$242
           (block $label$243
            (br_if $label$243
             (i32.ge_u
              (get_local $11)
              (i32.const 11)
             )
            )
            (i32.store8 offset=208
             (get_local $20)
             (i32.shl
              (get_local $11)
              (i32.const 1)
             )
            )
            (set_local $4
             (i32.or
              (i32.add
               (get_local $20)
               (i32.const 208)
              )
              (i32.const 1)
             )
            )
            (br_if $label$242
             (get_local $11)
            )
            (br $label$241)
           )
           (set_local $4
            (call $_Znwj
             (tee_local $5
              (i32.and
               (i32.add
                (get_local $11)
                (i32.const 16)
               )
               (i32.const -16)
              )
             )
            )
           )
           (i32.store offset=208
            (get_local $20)
            (i32.or
             (get_local $5)
             (i32.const 1)
            )
           )
           (i32.store offset=216
            (get_local $20)
            (get_local $4)
           )
           (i32.store offset=212
            (get_local $20)
            (get_local $11)
           )
          )
          (drop
           (call $memcpy
            (get_local $4)
            (i32.const 960)
            (get_local $11)
           )
          )
         )
         (i32.store8
          (i32.add
           (get_local $4)
           (get_local $11)
          )
          (i32.const 0)
         )
         (set_local $4
          (i32.load offset=208
           (get_local $20)
          )
         )
         (i32.store offset=208
          (get_local $20)
          (i32.const 0)
         )
         (set_local $5
          (i32.load offset=212
           (get_local $20)
          )
         )
         (i32.store offset=212
          (get_local $20)
          (i32.const 0)
         )
         (set_local $0
          (i32.load offset=216
           (get_local $20)
          )
         )
         (i32.store offset=216
          (get_local $20)
          (i32.const 0)
         )
         (set_local $13
          (i64.load
           (get_local $1)
          )
         )
         (i64.store
          (tee_local $11
           (call $_Znwj
            (i32.const 16)
           )
          )
          (get_local $17)
         )
         (i64.store offset=8
          (get_local $11)
          (get_local $18)
         )
         (i32.store offset=168
          (get_local $20)
          (get_local $11)
         )
         (i32.store offset=176
          (get_local $20)
          (tee_local $11
           (i32.add
            (get_local $11)
            (i32.const 16)
           )
          )
         )
         (i64.store offset=224
          (get_local $20)
          (get_local $19)
         )
         (i32.store offset=172
          (get_local $20)
          (get_local $11)
         )
         (i64.store offset=232
          (get_local $20)
          (get_local $13)
         )
         (i64.store offset=240
          (get_local $20)
          (get_local $9)
         )
         (i64.store
          (i32.add
           (get_local $20)
           (i32.const 248)
          )
          (i64.const 1397703940)
         )
         (i32.store offset=256
          (get_local $20)
          (get_local $4)
         )
         (i32.store
          (i32.add
           (get_local $20)
           (i32.const 260)
          )
          (get_local $5)
         )
         (i32.store
          (tee_local $11
           (i32.add
            (get_local $20)
            (i32.const 264)
           )
          )
          (get_local $0)
         )
         (call $_ZN5eosio15dispatch_inlineIJyyNS_5assetENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEEEvyyNS2_6vectorINS_16permission_levelENS6_ISA_EEEENS2_5tupleIJDpT_EEE
          (get_local $14)
          (i64.const -3617168760277827584)
          (i32.add
           (get_local $20)
           (i32.const 168)
          )
          (i32.add
           (get_local $20)
           (i32.const 224)
          )
         )
         (block $label$244
          (br_if $label$244
           (i32.eqz
            (i32.and
             (i32.load8_u offset=256
              (get_local $20)
             )
             (i32.const 1)
            )
           )
          )
          (call $_ZdlPv
           (i32.load
            (get_local $11)
           )
          )
         )
         (block $label$245
          (br_if $label$245
           (i32.eqz
            (tee_local $11
             (i32.load offset=168
              (get_local $20)
             )
            )
           )
          )
          (i32.store offset=172
           (get_local $20)
           (get_local $11)
          )
          (call $_ZdlPv
           (get_local $11)
          )
         )
         (br_if $label$211
          (i32.eqz
           (i32.and
            (i32.load8_u offset=208
             (get_local $20)
            )
            (i32.const 1)
           )
          )
         )
         (call $_ZdlPv
          (i32.load
           (i32.add
            (get_local $20)
            (i32.const 216)
           )
          )
         )
        )
        (i32.store offset=4
         (i32.const 0)
         (i32.add
          (get_local $20)
          (i32.const 272)
         )
        )
        (return)
       )
       (call $_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv
        (i32.add
         (get_local $20)
         (i32.const 208)
        )
       )
       (unreachable)
      )
      (call $_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv
       (i32.add
        (get_local $20)
        (i32.const 208)
       )
      )
      (unreachable)
     )
     (call $_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv
      (i32.add
       (get_local $20)
       (i32.const 152)
      )
     )
     (unreachable)
    )
    (call $_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv
     (get_local $4)
    )
    (unreachable)
   )
   (call $_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv
    (get_local $4)
   )
   (unreachable)
  )
  (call $_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv
   (get_local $4)
  )
  (unreachable)
 )
 (func $_ZNK5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE3getEyPKc (param $0 i32) (param $1 i64) (param $2 i32) (result i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 28)
       )
      )
     )
     (tee_local $3
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (set_local $6
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (set_local $4
    (i32.sub
     (i32.const 0)
     (get_local $3)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i64.eq
      (i64.load
       (i32.load
        (get_local $6)
       )
      )
      (get_local $1)
     )
    )
    (set_local $7
     (get_local $6)
    )
    (set_local $6
     (tee_local $5
      (i32.add
       (get_local $6)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $5)
       (get_local $4)
      )
      (i32.const -24)
     )
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (get_local $3)
     )
    )
    (call $eosio_assert
     (i32.eq
      (i32.load
       (i32.add
        (tee_local $6
         (i32.load
          (i32.add
           (get_local $7)
           (i32.const -24)
          )
         )
        )
        (i32.const 92)
       )
      )
      (get_local $0)
     )
     (i32.const 32)
    )
    (br $label$2)
   )
   (set_local $6
    (i32.const 0)
   )
   (br_if $label$2
    (i32.lt_s
     (tee_local $5
      (call $db_find_i64
       (i64.load
        (get_local $0)
       )
       (i64.load offset=8
        (get_local $0)
       )
       (i64.const -5915305344019464192)
       (get_local $1)
      )
     )
     (i32.const 0)
    )
   )
   (call $eosio_assert
    (i32.eq
     (i32.load offset=92
      (tee_local $6
       (call $_ZNK5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE31load_object_by_primary_iteratorEl
        (get_local $0)
        (get_local $5)
       )
      )
     )
     (get_local $0)
    )
    (i32.const 32)
   )
  )
  (call $eosio_assert
   (i32.ne
    (get_local $6)
    (i32.const 0)
   )
   (get_local $2)
  )
  (get_local $6)
 )
 (func $_ZNK5eosio11multi_indexILy14289235522390851584ENS_5token14currency_statsEJEE3getEyPKc (param $0 i32) (param $1 i64) (param $2 i32) (result i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 28)
       )
      )
     )
     (tee_local $3
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (set_local $6
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (set_local $4
    (i32.sub
     (i32.const 0)
     (get_local $3)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i64.eq
      (i64.shr_u
       (i64.load offset=8
        (i32.load
         (get_local $6)
        )
       )
       (i64.const 8)
      )
      (get_local $1)
     )
    )
    (set_local $7
     (get_local $6)
    )
    (set_local $6
     (tee_local $5
      (i32.add
       (get_local $6)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $5)
       (get_local $4)
      )
      (i32.const -24)
     )
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (get_local $3)
     )
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=40
       (tee_local $6
        (i32.load
         (i32.add
          (get_local $7)
          (i32.const -24)
         )
        )
       )
      )
      (get_local $0)
     )
     (i32.const 32)
    )
    (br $label$2)
   )
   (set_local $6
    (i32.const 0)
   )
   (br_if $label$2
    (i32.lt_s
     (tee_local $5
      (call $db_find_i64
       (i64.load
        (get_local $0)
       )
       (i64.load offset=8
        (get_local $0)
       )
       (i64.const -4157508551318700032)
       (get_local $1)
      )
     )
     (i32.const 0)
    )
   )
   (call $eosio_assert
    (i32.eq
     (i32.load offset=40
      (tee_local $6
       (call $_ZNK5eosio11multi_indexILy14289235522390851584ENS_5token14currency_statsEJEE31load_object_by_primary_iteratorEl
        (get_local $0)
        (get_local $5)
       )
      )
     )
     (get_local $0)
    )
    (i32.const 32)
   )
  )
  (call $eosio_assert
   (i32.ne
    (get_local $6)
    (i32.const 0)
   )
   (get_local $2)
  )
  (get_local $6)
 )
 (func $_ZN5eosio15dispatch_inlineIJyNS_5assetENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEEEvyyNS2_6vectorINS_16permission_levelENS6_ISA_EEEENS2_5tupleIJDpT_EEE (param $0 i64) (param $1 i64) (param $2 i32) (param $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 80)
    )
   )
  )
  (i32.store offset=16
   (get_local $9)
   (i32.const 0)
  )
  (i64.store offset=8
   (get_local $9)
   (i64.const 0)
  )
  (set_local $6
   (i32.const 0)
  )
  (set_local $7
   (i32.const 0)
  )
  (set_local $8
   (i32.const 0)
  )
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.eqz
      (tee_local $5
       (i32.shr_s
        (tee_local $4
         (i32.sub
          (i32.load offset=4
           (get_local $2)
          )
          (i32.load
           (get_local $2)
          )
         )
        )
        (i32.const 4)
       )
      )
     )
    )
    (br_if $label$0
     (i32.ge_u
      (get_local $5)
      (i32.const 268435456)
     )
    )
    (i32.store
     (i32.add
      (get_local $9)
      (i32.const 16)
     )
     (tee_local $6
      (i32.add
       (tee_local $8
        (call $_Znwj
         (get_local $4)
        )
       )
       (i32.shl
        (get_local $5)
        (i32.const 4)
       )
      )
     )
    )
    (i32.store offset=8
     (get_local $9)
     (get_local $8)
    )
    (i32.store offset=12
     (get_local $9)
     (get_local $8)
    )
    (block $label$2
     (br_if $label$2
      (i32.lt_s
       (tee_local $2
        (i32.sub
         (i32.load
          (i32.add
           (get_local $2)
           (i32.const 4)
          )
         )
         (tee_local $7
          (i32.load
           (get_local $2)
          )
         )
        )
       )
       (i32.const 1)
      )
     )
     (drop
      (call $memcpy
       (get_local $8)
       (get_local $7)
       (get_local $2)
      )
     )
     (i32.store offset=12
      (get_local $9)
      (tee_local $7
       (i32.add
        (get_local $8)
        (get_local $2)
       )
      )
     )
     (br $label$1)
    )
    (set_local $7
     (get_local $8)
    )
   )
   (i32.store
    (i32.add
     (get_local $9)
     (i32.const 44)
    )
    (get_local $7)
   )
   (i64.store offset=32
    (get_local $9)
    (get_local $1)
   )
   (i32.store
    (i32.add
     (get_local $9)
     (i32.const 16)
    )
    (i32.const 0)
   )
   (i32.store
    (i32.add
     (i32.add
      (get_local $9)
      (i32.const 24)
     )
     (i32.const 24)
    )
    (get_local $6)
   )
   (i64.store offset=24
    (get_local $9)
    (get_local $0)
   )
   (i32.store offset=40
    (get_local $9)
    (get_local $8)
   )
   (i64.store offset=8
    (get_local $9)
    (i64.const 0)
   )
   (i32.store offset=52
    (get_local $9)
    (i32.const 0)
   )
   (i32.store
    (i32.add
     (get_local $9)
     (i32.const 56)
    )
    (i32.const 0)
   )
   (i32.store
    (i32.add
     (get_local $9)
     (i32.const 60)
    )
    (i32.const 0)
   )
   (set_local $8
    (i32.add
     (tee_local $2
      (select
       (i32.load
        (i32.add
         (get_local $3)
         (i32.const 28)
        )
       )
       (i32.shr_u
        (tee_local $8
         (i32.load8_u offset=24
          (get_local $3)
         )
        )
        (i32.const 1)
       )
       (i32.and
        (get_local $8)
        (i32.const 1)
       )
      )
     )
     (i32.const 24)
    )
   )
   (set_local $0
    (i64.extend_u/i32
     (get_local $2)
    )
   )
   (set_local $6
    (i32.add
     (get_local $3)
     (i32.const 24)
    )
   )
   (set_local $2
    (i32.add
     (i32.add
      (get_local $9)
      (i32.const 24)
     )
     (i32.const 28)
    )
   )
   (loop $label$3
    (set_local $8
     (i32.add
      (get_local $8)
      (i32.const 1)
     )
    )
    (br_if $label$3
     (i64.ne
      (tee_local $0
       (i64.shr_u
        (get_local $0)
        (i64.const 7)
       )
      )
      (i64.const 0)
     )
    )
   )
   (block $label$4
    (block $label$5
     (br_if $label$5
      (i32.eqz
       (get_local $8)
      )
     )
     (call $_ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj
      (get_local $2)
      (get_local $8)
     )
     (set_local $2
      (i32.load
       (i32.add
        (get_local $9)
        (i32.const 56)
       )
      )
     )
     (set_local $8
      (i32.load
       (i32.add
        (get_local $9)
        (i32.const 52)
       )
      )
     )
     (br $label$4)
    )
    (set_local $2
     (i32.const 0)
    )
    (set_local $8
     (i32.const 0)
    )
   )
   (i32.store offset=64
    (get_local $9)
    (get_local $8)
   )
   (i32.store offset=72
    (get_local $9)
    (get_local $2)
   )
   (call $eosio_assert
    (i32.gt_s
     (i32.sub
      (get_local $2)
      (get_local $8)
     )
     (i32.const 7)
    )
    (i32.const 320)
   )
   (drop
    (call $memcpy
     (get_local $8)
     (get_local $3)
     (i32.const 8)
    )
   )
   (call $eosio_assert
    (i32.gt_s
     (i32.sub
      (get_local $2)
      (tee_local $7
       (i32.add
        (get_local $8)
        (i32.const 8)
       )
      )
     )
     (i32.const 7)
    )
    (i32.const 320)
   )
   (drop
    (call $memcpy
     (get_local $7)
     (i32.add
      (get_local $3)
      (i32.const 8)
     )
     (i32.const 8)
    )
   )
   (call $eosio_assert
    (i32.gt_s
     (i32.sub
      (get_local $2)
      (tee_local $7
       (i32.add
        (get_local $8)
        (i32.const 16)
       )
      )
     )
     (i32.const 7)
    )
    (i32.const 320)
   )
   (drop
    (call $memcpy
     (get_local $7)
     (i32.add
      (get_local $3)
      (i32.const 16)
     )
     (i32.const 8)
    )
   )
   (i32.store offset=68
    (get_local $9)
    (i32.add
     (get_local $8)
     (i32.const 24)
    )
   )
   (drop
    (call $_ZN5eosiolsINS_10datastreamIPcEEEERT_S5_RKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE
     (i32.add
      (get_local $9)
      (i32.const 64)
     )
     (get_local $6)
    )
   )
   (call $_ZN5eosio4packINS_6actionEEENSt3__16vectorIcNS2_9allocatorIcEEEERKT_
    (i32.add
     (get_local $9)
     (i32.const 64)
    )
    (i32.add
     (get_local $9)
     (i32.const 24)
    )
   )
   (call $send_inline
    (tee_local $8
     (i32.load offset=64
      (get_local $9)
     )
    )
    (i32.sub
     (i32.load offset=68
      (get_local $9)
     )
     (get_local $8)
    )
   )
   (block $label$6
    (br_if $label$6
     (i32.eqz
      (tee_local $8
       (i32.load offset=64
        (get_local $9)
       )
      )
     )
    )
    (i32.store offset=68
     (get_local $9)
     (get_local $8)
    )
    (call $_ZdlPv
     (get_local $8)
    )
   )
   (block $label$7
    (br_if $label$7
     (i32.eqz
      (tee_local $8
       (i32.load offset=52
        (get_local $9)
       )
      )
     )
    )
    (i32.store
     (i32.add
      (get_local $9)
      (i32.const 56)
     )
     (get_local $8)
    )
    (call $_ZdlPv
     (get_local $8)
    )
   )
   (block $label$8
    (br_if $label$8
     (i32.eqz
      (tee_local $8
       (i32.load offset=40
        (get_local $9)
       )
      )
     )
    )
    (i32.store
     (i32.add
      (get_local $9)
      (i32.const 44)
     )
     (get_local $8)
    )
    (call $_ZdlPv
     (get_local $8)
    )
   )
   (block $label$9
    (br_if $label$9
     (i32.eqz
      (tee_local $8
       (i32.load offset=8
        (get_local $9)
       )
      )
     )
    )
    (i32.store offset=12
     (get_local $9)
     (get_local $8)
    )
    (call $_ZdlPv
     (get_local $8)
    )
   )
   (i32.store offset=4
    (i32.const 0)
    (i32.add
     (get_local $9)
     (i32.const 80)
    )
   )
   (return)
  )
  (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
   (i32.add
    (get_local $9)
    (i32.const 8)
   )
  )
  (unreachable)
 )
 (func $_ZN5eosio15dispatch_inlineIJyyNS_5assetENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEEEvyyNS2_6vectorINS_16permission_levelENS6_ISA_EEEENS2_5tupleIJDpT_EEE (param $0 i64) (param $1 i64) (param $2 i32) (param $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 96)
    )
   )
  )
  (i32.store offset=16
   (get_local $9)
   (i32.const 0)
  )
  (i64.store offset=8
   (get_local $9)
   (i64.const 0)
  )
  (set_local $6
   (i32.const 0)
  )
  (set_local $7
   (i32.const 0)
  )
  (set_local $8
   (i32.const 0)
  )
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.eqz
      (tee_local $5
       (i32.shr_s
        (tee_local $4
         (i32.sub
          (i32.load offset=4
           (get_local $2)
          )
          (i32.load
           (get_local $2)
          )
         )
        )
        (i32.const 4)
       )
      )
     )
    )
    (br_if $label$0
     (i32.ge_u
      (get_local $5)
      (i32.const 268435456)
     )
    )
    (i32.store
     (i32.add
      (get_local $9)
      (i32.const 16)
     )
     (tee_local $6
      (i32.add
       (tee_local $8
        (call $_Znwj
         (get_local $4)
        )
       )
       (i32.shl
        (get_local $5)
        (i32.const 4)
       )
      )
     )
    )
    (i32.store offset=8
     (get_local $9)
     (get_local $8)
    )
    (i32.store offset=12
     (get_local $9)
     (get_local $8)
    )
    (block $label$2
     (br_if $label$2
      (i32.lt_s
       (tee_local $2
        (i32.sub
         (i32.load
          (i32.add
           (get_local $2)
           (i32.const 4)
          )
         )
         (tee_local $7
          (i32.load
           (get_local $2)
          )
         )
        )
       )
       (i32.const 1)
      )
     )
     (drop
      (call $memcpy
       (get_local $8)
       (get_local $7)
       (get_local $2)
      )
     )
     (i32.store offset=12
      (get_local $9)
      (tee_local $7
       (i32.add
        (get_local $8)
        (get_local $2)
       )
      )
     )
     (br $label$1)
    )
    (set_local $7
     (get_local $8)
    )
   )
   (i32.store
    (i32.add
     (get_local $9)
     (i32.const 44)
    )
    (get_local $7)
   )
   (i64.store offset=32
    (get_local $9)
    (get_local $1)
   )
   (i32.store
    (i32.add
     (get_local $9)
     (i32.const 16)
    )
    (i32.const 0)
   )
   (i32.store
    (i32.add
     (get_local $9)
     (i32.const 48)
    )
    (get_local $6)
   )
   (i64.store offset=24
    (get_local $9)
    (get_local $0)
   )
   (i32.store offset=40
    (get_local $9)
    (get_local $8)
   )
   (i64.store offset=8
    (get_local $9)
    (i64.const 0)
   )
   (i32.store offset=52
    (get_local $9)
    (i32.const 0)
   )
   (i32.store
    (i32.add
     (i32.add
      (get_local $9)
      (i32.const 24)
     )
     (i32.const 32)
    )
    (i32.const 0)
   )
   (i32.store
    (i32.add
     (i32.add
      (get_local $9)
      (i32.const 24)
     )
     (i32.const 36)
    )
    (i32.const 0)
   )
   (set_local $8
    (i32.add
     (tee_local $2
      (select
       (i32.load
        (i32.add
         (get_local $3)
         (i32.const 36)
        )
       )
       (i32.shr_u
        (tee_local $8
         (i32.load8_u offset=32
          (get_local $3)
         )
        )
        (i32.const 1)
       )
       (i32.and
        (get_local $8)
        (i32.const 1)
       )
      )
     )
     (i32.const 32)
    )
   )
   (set_local $0
    (i64.extend_u/i32
     (get_local $2)
    )
   )
   (set_local $2
    (i32.add
     (get_local $9)
     (i32.const 52)
    )
   )
   (loop $label$3
    (set_local $8
     (i32.add
      (get_local $8)
      (i32.const 1)
     )
    )
    (br_if $label$3
     (i64.ne
      (tee_local $0
       (i64.shr_u
        (get_local $0)
        (i64.const 7)
       )
      )
      (i64.const 0)
     )
    )
   )
   (block $label$4
    (block $label$5
     (br_if $label$5
      (i32.eqz
       (get_local $8)
      )
     )
     (call $_ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj
      (get_local $2)
      (get_local $8)
     )
     (set_local $2
      (i32.load
       (i32.add
        (get_local $9)
        (i32.const 56)
       )
      )
     )
     (set_local $8
      (i32.load
       (i32.add
        (get_local $9)
        (i32.const 52)
       )
      )
     )
     (br $label$4)
    )
    (set_local $2
     (i32.const 0)
    )
    (set_local $8
     (i32.const 0)
    )
   )
   (i32.store offset=84
    (get_local $9)
    (get_local $8)
   )
   (i32.store offset=80
    (get_local $9)
    (get_local $8)
   )
   (i32.store offset=88
    (get_local $9)
    (get_local $2)
   )
   (i32.store offset=64
    (get_local $9)
    (i32.add
     (get_local $9)
     (i32.const 80)
    )
   )
   (i32.store offset=72
    (get_local $9)
    (get_local $3)
   )
   (call $_ZN5boost6fusion6detail17for_each_unrolledILi4EE4callINS0_18std_tuple_iteratorIKNSt3__15tupleIJyyN5eosio5assetENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEEEELi0EEEZNS8_lsINS8_10datastreamIPcEEJyyS9_SF_EEERT_SO_RKNS7_IJDpT0_EEEEUlRKSN_E_EEvSV_RKT0_
    (i32.add
     (get_local $9)
     (i32.const 72)
    )
    (i32.add
     (get_local $9)
     (i32.const 64)
    )
   )
   (call $_ZN5eosio4packINS_6actionEEENSt3__16vectorIcNS2_9allocatorIcEEEERKT_
    (i32.add
     (get_local $9)
     (i32.const 80)
    )
    (i32.add
     (get_local $9)
     (i32.const 24)
    )
   )
   (call $send_inline
    (tee_local $8
     (i32.load offset=80
      (get_local $9)
     )
    )
    (i32.sub
     (i32.load offset=84
      (get_local $9)
     )
     (get_local $8)
    )
   )
   (block $label$6
    (br_if $label$6
     (i32.eqz
      (tee_local $8
       (i32.load offset=80
        (get_local $9)
       )
      )
     )
    )
    (i32.store offset=84
     (get_local $9)
     (get_local $8)
    )
    (call $_ZdlPv
     (get_local $8)
    )
   )
   (block $label$7
    (br_if $label$7
     (i32.eqz
      (tee_local $8
       (i32.load offset=52
        (get_local $9)
       )
      )
     )
    )
    (i32.store
     (i32.add
      (get_local $9)
      (i32.const 56)
     )
     (get_local $8)
    )
    (call $_ZdlPv
     (get_local $8)
    )
   )
   (block $label$8
    (br_if $label$8
     (i32.eqz
      (tee_local $8
       (i32.load offset=40
        (get_local $9)
       )
      )
     )
    )
    (i32.store
     (i32.add
      (get_local $9)
      (i32.const 44)
     )
     (get_local $8)
    )
    (call $_ZdlPv
     (get_local $8)
    )
   )
   (block $label$9
    (br_if $label$9
     (i32.eqz
      (tee_local $8
       (i32.load offset=8
        (get_local $9)
       )
      )
     )
    )
    (i32.store offset=12
     (get_local $9)
     (get_local $8)
    )
    (call $_ZdlPv
     (get_local $8)
    )
   )
   (i32.store offset=4
    (i32.const 0)
    (i32.add
     (get_local $9)
     (i32.const 96)
    )
   )
   (return)
  )
  (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
   (i32.add
    (get_local $9)
    (i32.const 8)
   )
  )
  (unreachable)
 )
 (func $_ZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE6modifyIZNS1_15system_contract12claimrewardsERKyE3$_2EEvRKS2_yOT_ (param $0 i32) (param $1 i32) (param $2 i32)
  (local $3 i64)
  (local $4 f64)
  (local $5 i32)
  (local $6 i64)
  (local $7 i32)
  (local $8 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $7
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (call $eosio_assert
   (i32.eq
    (i32.load
     (i32.add
      (get_local $1)
      (i32.const 92)
     )
    )
    (get_local $0)
   )
   (i32.const 144)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 192)
  )
  (f64.store offset=24
   (tee_local $8
    (get_local $7)
   )
   (select
    (f64.neg
     (tee_local $4
      (f64.load
       (i32.add
        (get_local $1)
        (i32.const 8)
       )
      )
     )
    )
    (get_local $4)
    (i32.load8_u
     (i32.add
      (get_local $1)
      (i32.const 56)
     )
    )
   )
  )
  (i64.store offset=80
   (get_local $1)
   (i64.load
    (i32.load
     (get_local $2)
    )
   )
  )
  (set_local $3
   (i64.load
    (get_local $1)
   )
  )
  (i32.store offset=72
   (get_local $1)
   (i32.const 0)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 256)
  )
  (set_local $6
   (i64.load32_u offset=16
    (get_local $1)
   )
  )
  (set_local $2
   (i32.const 64)
  )
  (loop $label$0
   (set_local $2
    (i32.add
     (get_local $2)
     (i32.const 1)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $6
      (i64.shr_u
       (get_local $6)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (set_local $2
   (i32.add
    (tee_local $5
     (select
      (i32.load
       (i32.add
        (get_local $1)
        (i32.const 64)
       )
      )
      (i32.shr_u
       (tee_local $5
        (i32.load8_u offset=60
         (get_local $1)
        )
       )
       (i32.const 1)
      )
      (i32.and
       (get_local $5)
       (i32.const 1)
      )
     )
    )
    (get_local $2)
   )
  )
  (set_local $6
   (i64.extend_u/i32
    (get_local $5)
   )
  )
  (loop $label$1
   (set_local $2
    (i32.add
     (get_local $2)
     (i32.const 1)
    )
   )
   (br_if $label$1
    (i64.ne
     (tee_local $6
      (i64.shr_u
       (get_local $6)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.lt_u
      (get_local $2)
      (i32.const 513)
     )
    )
    (set_local $7
     (call $malloc
      (get_local $2)
     )
    )
    (br $label$2)
   )
   (i32.store offset=4
    (i32.const 0)
    (tee_local $7
     (i32.sub
      (get_local $7)
      (i32.and
       (i32.add
        (get_local $2)
        (i32.const 15)
       )
       (i32.const -16)
      )
     )
    )
   )
  )
  (i32.store offset=12
   (get_local $8)
   (get_local $7)
  )
  (i32.store offset=8
   (get_local $8)
   (get_local $7)
  )
  (i32.store offset=16
   (get_local $8)
   (i32.add
    (get_local $7)
    (get_local $2)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_13producer_infoE
    (i32.add
     (get_local $8)
     (i32.const 8)
    )
    (get_local $1)
   )
  )
  (call $db_update_i64
   (i32.load offset=96
    (get_local $1)
   )
   (i64.const 0)
   (get_local $7)
   (get_local $2)
  )
  (block $label$4
   (br_if $label$4
    (i32.lt_u
     (get_local $2)
     (i32.const 513)
    )
   )
   (call $free
    (get_local $7)
   )
  )
  (block $label$5
   (br_if $label$5
    (i64.lt_u
     (get_local $3)
     (i64.load offset=16
      (get_local $0)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $0)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $3)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $3)
      (i64.const -3)
     )
    )
   )
  )
  (f64.store offset=40
   (get_local $8)
   (select
    (f64.neg
     (tee_local $4
      (f64.load
       (i32.add
        (get_local $1)
        (i32.const 8)
       )
      )
     )
    )
    (get_local $4)
    (i32.load8_u
     (i32.add
      (get_local $1)
      (i32.const 56)
     )
    )
   )
  )
  (block $label$6
   (br_if $label$6
    (i32.eqz
     (call $memcmp
      (i32.add
       (get_local $8)
       (i32.const 24)
      )
      (i32.add
       (get_local $8)
       (i32.const 40)
      )
      (i32.const 8)
     )
    )
   )
   (block $label$7
    (br_if $label$7
     (i32.gt_s
      (tee_local $2
       (i32.load offset=100
        (get_local $1)
       )
      )
      (i32.const -1)
     )
    )
    (i32.store
     (i32.add
      (get_local $1)
      (i32.const 100)
     )
     (tee_local $2
      (call $db_idx_double_find_primary
       (i64.load
        (get_local $0)
       )
       (i64.load offset=8
        (get_local $0)
       )
       (i64.const -5915305344019464192)
       (i32.add
        (get_local $8)
        (i32.const 32)
       )
       (get_local $3)
      )
     )
    )
   )
   (call $db_idx_double_update
    (get_local $2)
    (i64.const 0)
    (i32.add
     (get_local $8)
     (i32.const 40)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 48)
   )
  )
 )
 (func $_ZN5boost6fusion6detail17for_each_unrolledILi4EE4callINS0_18std_tuple_iteratorIKNSt3__15tupleIJyyN5eosio5assetENS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEEEELi0EEEZNS8_lsINS8_10datastreamIPcEEJyyS9_SF_EEERT_SO_RKNS7_IJDpT0_EEEEUlRKSN_E_EEvSV_RKT0_ (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (set_local $2
   (i32.load
    (get_local $0)
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (tee_local $3
       (i32.load
        (get_local $1)
       )
      )
     )
     (i32.load offset=4
      (get_local $3)
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $3)
    )
    (get_local $2)
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $3)
   (i32.add
    (i32.load offset=4
     (get_local $3)
    )
    (i32.const 8)
   )
  )
  (set_local $0
   (i32.load
    (get_local $0)
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (tee_local $3
       (i32.load
        (get_local $1)
       )
      )
     )
     (i32.load offset=4
      (get_local $3)
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $3)
    )
    (i32.add
     (get_local $0)
     (i32.const 8)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $3)
   (i32.add
    (i32.load offset=4
     (get_local $3)
    )
    (i32.const 8)
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (tee_local $3
       (i32.load
        (get_local $1)
       )
      )
     )
     (i32.load offset=4
      (get_local $3)
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $3)
    )
    (i32.add
     (get_local $0)
     (i32.const 16)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $3)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $3)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $3)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $3)
    )
    (i32.add
     (get_local $0)
     (i32.const 24)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $3)
   (i32.add
    (i32.load offset=4
     (get_local $3)
    )
    (i32.const 8)
   )
  )
  (drop
   (call $_ZN5eosiolsINS_10datastreamIPcEEEERT_S5_RKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE
    (i32.load
     (get_local $1)
    )
    (i32.add
     (get_local $0)
     (i32.const 32)
    )
   )
  )
 )
 (func $_ZN5eosio4packINS_6actionEEENSt3__16vectorIcNS2_9allocatorIcEEEERKT_ (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i64)
  (local $7 i32)
  (local $8 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $8
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (i32.store offset=8
   (get_local $0)
   (i32.const 0)
  )
  (i64.store align=4
   (get_local $0)
   (i64.const 0)
  )
  (set_local $5
   (i32.const 16)
  )
  (set_local $2
   (i32.add
    (get_local $1)
    (i32.const 16)
   )
  )
  (set_local $6
   (i64.extend_u/i32
    (i32.shr_s
     (tee_local $4
      (i32.sub
       (tee_local $7
        (i32.load
         (i32.add
          (get_local $1)
          (i32.const 20)
         )
        )
       )
       (tee_local $3
        (i32.load offset=16
         (get_local $1)
        )
       )
      )
     )
     (i32.const 4)
    )
   )
  )
  (loop $label$0
   (set_local $5
    (i32.add
     (get_local $5)
     (i32.const 1)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $6
      (i64.shr_u
       (get_local $6)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (block $label$1
   (br_if $label$1
    (i32.eq
     (get_local $3)
     (get_local $7)
    )
   )
   (set_local $5
    (i32.add
     (i32.and
      (get_local $4)
      (i32.const -16)
     )
     (get_local $5)
    )
   )
  )
  (set_local $5
   (i32.sub
    (i32.sub
     (tee_local $7
      (i32.load offset=28
       (get_local $1)
      )
     )
     (get_local $5)
    )
    (tee_local $3
     (i32.load
      (i32.add
       (get_local $1)
       (i32.const 32)
      )
     )
    )
   )
  )
  (set_local $4
   (i32.add
    (get_local $1)
    (i32.const 28)
   )
  )
  (set_local $6
   (i64.extend_u/i32
    (i32.sub
     (get_local $3)
     (get_local $7)
    )
   )
  )
  (loop $label$2
   (set_local $5
    (i32.add
     (get_local $5)
     (i32.const -1)
    )
   )
   (br_if $label$2
    (i64.ne
     (tee_local $6
      (i64.shr_u
       (get_local $6)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (set_local $7
   (i32.const 0)
  )
  (block $label$3
   (block $label$4
    (br_if $label$4
     (i32.eqz
      (get_local $5)
     )
    )
    (call $_ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj
     (get_local $0)
     (i32.sub
      (i32.const 0)
      (get_local $5)
     )
    )
    (set_local $7
     (i32.load
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (set_local $5
     (i32.load
      (get_local $0)
     )
    )
    (br $label$3)
   )
   (set_local $5
    (i32.const 0)
   )
  )
  (i32.store
   (get_local $8)
   (get_local $5)
  )
  (i32.store offset=8
   (get_local $8)
   (get_local $7)
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (get_local $7)
     (get_local $5)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (get_local $5)
    (get_local $1)
    (i32.const 8)
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (get_local $7)
     (tee_local $0
      (i32.add
       (get_local $5)
       (i32.const 8)
      )
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (get_local $0)
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $8)
   (i32.add
    (get_local $5)
    (i32.const 16)
   )
  )
  (drop
   (call $_ZN5eosiolsINS_10datastreamIPcEEEERT_S5_RKNSt3__16vectorIcNS6_9allocatorIcEEEE
    (call $_ZN5eosiolsINS_10datastreamIPcEENS_16permission_levelEEERT_S6_RKNSt3__16vectorIT0_NS7_9allocatorIS9_EEEE
     (get_local $8)
     (get_local $2)
    )
    (get_local $4)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
 )
 (func $_ZN5eosiolsINS_10datastreamIPcEENS_16permission_levelEEERT_S6_RKNSt3__16vectorIT0_NS7_9allocatorIS9_EEEE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i64)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $7
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (set_local $4
   (i64.extend_u/i32
    (i32.shr_s
     (i32.sub
      (i32.load offset=4
       (get_local $1)
      )
      (i32.load
       (get_local $1)
      )
     )
     (i32.const 4)
    )
   )
  )
  (set_local $5
   (i32.load offset=4
    (get_local $0)
   )
  )
  (set_local $2
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
  )
  (loop $label$0
   (set_local $3
    (i32.wrap/i64
     (get_local $4)
    )
   )
   (i32.store8 offset=15
    (get_local $7)
    (i32.or
     (i32.shl
      (tee_local $6
       (i64.ne
        (tee_local $4
         (i64.shr_u
          (get_local $4)
          (i64.const 7)
         )
        )
        (i64.const 0)
       )
      )
      (i32.const 7)
     )
     (i32.and
      (get_local $3)
      (i32.const 127)
     )
    )
   )
   (call $eosio_assert
    (i32.gt_s
     (i32.sub
      (i32.load
       (get_local $2)
      )
      (get_local $5)
     )
     (i32.const 0)
    )
    (i32.const 320)
   )
   (drop
    (call $memcpy
     (i32.load
      (tee_local $3
       (i32.add
        (get_local $0)
        (i32.const 4)
       )
      )
     )
     (i32.add
      (get_local $7)
      (i32.const 15)
     )
     (i32.const 1)
    )
   )
   (i32.store
    (get_local $3)
    (tee_local $5
     (i32.add
      (i32.load
       (get_local $3)
      )
      (i32.const 1)
     )
    )
   )
   (br_if $label$0
    (get_local $6)
   )
  )
  (block $label$1
   (br_if $label$1
    (i32.eq
     (tee_local $6
      (i32.load
       (get_local $1)
      )
     )
     (tee_local $1
      (i32.load
       (i32.add
        (get_local $1)
        (i32.const 4)
       )
      )
     )
    )
   )
   (set_local $3
    (i32.add
     (get_local $0)
     (i32.const 4)
    )
   )
   (loop $label$2
    (call $eosio_assert
     (i32.gt_s
      (i32.sub
       (i32.load
        (tee_local $2
         (i32.add
          (get_local $0)
          (i32.const 8)
         )
        )
       )
       (get_local $5)
      )
      (i32.const 7)
     )
     (i32.const 320)
    )
    (drop
     (call $memcpy
      (i32.load
       (get_local $3)
      )
      (get_local $6)
      (i32.const 8)
     )
    )
    (i32.store
     (get_local $3)
     (tee_local $5
      (i32.add
       (i32.load
        (get_local $3)
       )
       (i32.const 8)
      )
     )
    )
    (call $eosio_assert
     (i32.gt_s
      (i32.sub
       (i32.load
        (get_local $2)
       )
       (get_local $5)
      )
      (i32.const 7)
     )
     (i32.const 320)
    )
    (drop
     (call $memcpy
      (i32.load
       (get_local $3)
      )
      (i32.add
       (get_local $6)
       (i32.const 8)
      )
      (i32.const 8)
     )
    )
    (i32.store
     (get_local $3)
     (tee_local $5
      (i32.add
       (i32.load
        (get_local $3)
       )
       (i32.const 8)
      )
     )
    )
    (br_if $label$2
     (i32.ne
      (tee_local $6
       (i32.add
        (get_local $6)
        (i32.const 16)
       )
      )
      (get_local $1)
     )
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $7)
    (i32.const 16)
   )
  )
  (get_local $0)
 )
 (func $_ZN5eosiolsINS_10datastreamIPcEEEERT_S5_RKNSt3__16vectorIcNS6_9allocatorIcEEEE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i64)
  (local $8 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $8
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (set_local $7
   (i64.extend_u/i32
    (i32.sub
     (i32.load offset=4
      (get_local $1)
     )
     (i32.load
      (get_local $1)
     )
    )
   )
  )
  (set_local $6
   (i32.load offset=4
    (get_local $0)
   )
  )
  (set_local $4
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
  )
  (set_local $5
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
  )
  (loop $label$0
   (set_local $2
    (i32.wrap/i64
     (get_local $7)
    )
   )
   (i32.store8 offset=15
    (get_local $8)
    (i32.or
     (i32.shl
      (tee_local $3
       (i64.ne
        (tee_local $7
         (i64.shr_u
          (get_local $7)
          (i64.const 7)
         )
        )
        (i64.const 0)
       )
      )
      (i32.const 7)
     )
     (i32.and
      (get_local $2)
      (i32.const 127)
     )
    )
   )
   (call $eosio_assert
    (i32.gt_s
     (i32.sub
      (i32.load
       (get_local $4)
      )
      (get_local $6)
     )
     (i32.const 0)
    )
    (i32.const 320)
   )
   (drop
    (call $memcpy
     (i32.load
      (get_local $5)
     )
     (i32.add
      (get_local $8)
      (i32.const 15)
     )
     (i32.const 1)
    )
   )
   (i32.store
    (get_local $5)
    (tee_local $6
     (i32.add
      (i32.load
       (get_local $5)
      )
      (i32.const 1)
     )
    )
   )
   (br_if $label$0
    (get_local $3)
   )
  )
  (call $eosio_assert
   (i32.ge_s
    (i32.sub
     (i32.load
      (i32.add
       (get_local $0)
       (i32.const 8)
      )
     )
     (get_local $6)
    )
    (tee_local $5
     (i32.sub
      (i32.load
       (i32.add
        (get_local $1)
        (i32.const 4)
       )
      )
      (tee_local $2
       (i32.load
        (get_local $1)
       )
      )
     )
    )
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load
     (tee_local $6
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (get_local $2)
    (get_local $5)
   )
  )
  (i32.store
   (get_local $6)
   (i32.add
    (i32.load
     (get_local $6)
    )
    (get_local $5)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
  (get_local $0)
 )
 (func $_ZNK5eosio11multi_indexILy14289235522390851584ENS_5token14currency_statsEJEE31load_object_by_primary_iteratorEl (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (set_local $8
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 28)
       )
      )
     )
     (tee_local $2
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (set_local $3
    (i32.sub
     (i32.const 0)
     (get_local $2)
    )
   )
   (set_local $6
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i32.eq
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const 16)
       )
      )
      (get_local $1)
     )
    )
    (set_local $7
     (get_local $6)
    )
    (set_local $6
     (tee_local $4
      (i32.add
       (get_local $6)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $4)
       (get_local $3)
      )
      (i32.const -24)
     )
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (get_local $2)
     )
    )
    (set_local $6
     (i32.load
      (i32.add
       (get_local $7)
       (i32.const -24)
      )
     )
    )
    (br $label$2)
   )
   (call $eosio_assert
    (i32.xor
     (i32.shr_u
      (tee_local $6
       (call $db_get_i64
        (get_local $1)
        (i32.const 0)
        (i32.const 0)
       )
      )
      (i32.const 31)
     )
     (i32.const 1)
    )
    (i32.const 336)
   )
   (block $label$4
    (block $label$5
     (br_if $label$5
      (i32.lt_u
       (get_local $6)
       (i32.const 513)
      )
     )
     (set_local $4
      (call $malloc
       (get_local $6)
      )
     )
     (br $label$4)
    )
    (i32.store offset=4
     (i32.const 0)
     (tee_local $4
      (i32.sub
       (get_local $9)
       (i32.and
        (i32.add
         (get_local $6)
         (i32.const 15)
        )
        (i32.const -16)
       )
      )
     )
    )
   )
   (drop
    (call $db_get_i64
     (get_local $1)
     (get_local $4)
     (get_local $6)
    )
   )
   (i32.store offset=12
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=8
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=16
    (get_local $8)
    (i32.add
     (get_local $4)
     (get_local $6)
    )
   )
   (block $label$6
    (br_if $label$6
     (i32.lt_u
      (get_local $6)
      (i32.const 513)
     )
    )
    (call $free
     (get_local $4)
    )
   )
   (drop
    (call $_ZN5eosio5token14currency_statsC2Ev
     (tee_local $6
      (call $_Znwj
       (i32.const 56)
      )
     )
    )
   )
   (i32.store offset=40
    (get_local $6)
    (get_local $0)
   )
   (i32.store offset=24
    (get_local $8)
    (i32.add
     (get_local $8)
     (i32.const 8)
    )
   )
   (i32.store offset=36
    (get_local $8)
    (i32.add
     (get_local $6)
     (i32.const 16)
    )
   )
   (i32.store offset=32
    (get_local $8)
    (get_local $6)
   )
   (i32.store offset=40
    (get_local $8)
    (i32.add
     (get_local $6)
     (i32.const 32)
    )
   )
   (call $_ZN5boost3pfr6detail19for_each_field_implINS1_14sequence_tuple5tupleIJRN5eosio5assetES7_RyEEEZNS5_rsINS5_10datastreamIPKcEENS5_5token14currency_statsELPv0EEERT_SJ_RT0_EUlSJ_E_JLj0ELj1ELj2EEEEvSJ_OSK_NSt3__116integer_sequenceIjJXspT1_EEEENSO_17integral_constantIbLb0EEE
    (i32.add
     (get_local $8)
     (i32.const 32)
    )
    (i32.add
     (get_local $8)
     (i32.const 24)
    )
   )
   (i32.store offset=44
    (get_local $6)
    (get_local $1)
   )
   (i32.store offset=24
    (get_local $8)
    (get_local $6)
   )
   (i64.store offset=32
    (get_local $8)
    (tee_local $5
     (i64.shr_u
      (i64.load offset=8
       (get_local $6)
      )
      (i64.const 8)
     )
    )
   )
   (i32.store offset=4
    (get_local $8)
    (tee_local $7
     (i32.load offset=44
      (get_local $6)
     )
    )
   )
   (block $label$7
    (block $label$8
     (br_if $label$8
      (i32.ge_u
       (tee_local $4
        (i32.load
         (tee_local $1
          (i32.add
           (get_local $0)
           (i32.const 28)
          )
         )
        )
       )
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 32)
        )
       )
      )
     )
     (i64.store offset=8
      (get_local $4)
      (get_local $5)
     )
     (i32.store offset=16
      (get_local $4)
      (get_local $7)
     )
     (i32.store offset=24
      (get_local $8)
      (i32.const 0)
     )
     (i32.store
      (get_local $4)
      (get_local $6)
     )
     (i32.store
      (get_local $1)
      (i32.add
       (get_local $4)
       (i32.const 24)
      )
     )
     (br $label$7)
    )
    (call $_ZNSt3__16vectorIN5eosio11multi_indexILy14289235522390851584ENS1_5token14currency_statsEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_
     (i32.add
      (get_local $0)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 32)
     )
     (i32.add
      (get_local $8)
      (i32.const 4)
     )
    )
   )
   (set_local $4
    (i32.load offset=24
     (get_local $8)
    )
   )
   (i32.store offset=24
    (get_local $8)
    (i32.const 0)
   )
   (br_if $label$2
    (i32.eqz
     (get_local $4)
    )
   )
   (call $_ZdlPv
    (get_local $4)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 48)
   )
  )
  (get_local $6)
 )
 (func $_ZN5eosio5token14currency_statsC2Ev (param $0 i32) (result i32)
  (local $1 i64)
  (local $2 i32)
  (local $3 i32)
  (i64.store offset=8
   (get_local $0)
   (i64.const 1397703940)
  )
  (i64.store
   (get_local $0)
   (i64.const 0)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $1
   (i64.shr_u
    (i64.load offset=8
     (get_local $0)
    )
    (i64.const 8)
   )
  )
  (set_local $2
   (i32.const 0)
  )
  (block $label$0
   (block $label$1
    (loop $label$2
     (br_if $label$1
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $1)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$3
      (br_if $label$3
       (i64.ne
        (i64.and
         (tee_local $1
          (i64.shr_u
           (get_local $1)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$4
       (br_if $label$1
        (i64.ne
         (i64.and
          (tee_local $1
           (i64.shr_u
            (get_local $1)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$4
        (i32.lt_s
         (tee_local $2
          (i32.add
           (get_local $2)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $3
      (i32.const 1)
     )
     (br_if $label$2
      (i32.lt_s
       (tee_local $2
        (i32.add
         (get_local $2)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$0)
    )
   )
   (set_local $3
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $3)
   (i32.const 704)
  )
  (i64.store
   (tee_local $2
    (i32.add
     (get_local $0)
     (i32.const 24)
    )
   )
   (i64.const 1397703940)
  )
  (i64.store offset=16
   (get_local $0)
   (i64.const 0)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $1
   (i64.shr_u
    (i64.load
     (get_local $2)
    )
    (i64.const 8)
   )
  )
  (set_local $2
   (i32.const 0)
  )
  (block $label$5
   (block $label$6
    (loop $label$7
     (br_if $label$6
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $1)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$8
      (br_if $label$8
       (i64.ne
        (i64.and
         (tee_local $1
          (i64.shr_u
           (get_local $1)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$9
       (br_if $label$6
        (i64.ne
         (i64.and
          (tee_local $1
           (i64.shr_u
            (get_local $1)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$9
        (i32.lt_s
         (tee_local $2
          (i32.add
           (get_local $2)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $3
      (i32.const 1)
     )
     (br_if $label$7
      (i32.lt_s
       (tee_local $2
        (i32.add
         (get_local $2)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$5)
    )
   )
   (set_local $3
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $3)
   (i32.const 704)
  )
  (get_local $0)
 )
 (func $_ZN5boost3pfr6detail19for_each_field_implINS1_14sequence_tuple5tupleIJRN5eosio5assetES7_RyEEEZNS5_rsINS5_10datastreamIPKcEENS5_5token14currency_statsELPv0EEERT_SJ_RT0_EUlSJ_E_JLj0ELj1ELj2EEEEvSJ_OSK_NSt3__116integer_sequenceIjJXspT1_EEEENSO_17integral_constantIbLb0EEE (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (set_local $3
   (i32.load
    (get_local $0)
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (tee_local $2
       (i32.load
        (get_local $1)
       )
      )
     )
     (i32.load offset=4
      (get_local $2)
     )
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (get_local $3)
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (tee_local $4
    (i32.add
     (i32.load offset=4
      (get_local $2)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $2)
     )
     (get_local $4)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $3)
     (i32.const 8)
    )
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (i32.add
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (set_local $3
   (i32.load offset=4
    (get_local $0)
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (tee_local $2
       (i32.load
        (get_local $1)
       )
      )
     )
     (i32.load offset=4
      (get_local $2)
     )
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (get_local $3)
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (tee_local $4
    (i32.add
     (i32.load offset=4
      (get_local $2)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $2)
     )
     (get_local $4)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $3)
     (i32.const 8)
    )
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (i32.add
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (set_local $0
   (i32.load offset=8
    (get_local $0)
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (tee_local $2
       (i32.load
        (get_local $1)
       )
      )
     )
     (i32.load offset=4
      (get_local $2)
     )
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (get_local $0)
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (i32.add
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
 )
 (func $_ZNSt3__16vectorIN5eosio11multi_indexILy14289235522390851584ENS1_5token14currency_statsEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_ (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.ge_u
      (tee_local $5
       (i32.add
        (tee_local $4
         (i32.div_s
          (i32.sub
           (i32.load offset=4
            (get_local $0)
           )
           (tee_local $6
            (i32.load
             (get_local $0)
            )
           )
          )
          (i32.const 24)
         )
        )
        (i32.const 1)
       )
      )
      (i32.const 178956971)
     )
    )
    (set_local $7
     (i32.const 178956970)
    )
    (block $label$2
     (block $label$3
      (br_if $label$3
       (i32.gt_u
        (tee_local $6
         (i32.div_s
          (i32.sub
           (i32.load offset=8
            (get_local $0)
           )
           (get_local $6)
          )
          (i32.const 24)
         )
        )
        (i32.const 89478484)
       )
      )
      (br_if $label$2
       (i32.eqz
        (tee_local $7
         (select
          (get_local $5)
          (tee_local $7
           (i32.shl
            (get_local $6)
            (i32.const 1)
           )
          )
          (i32.lt_u
           (get_local $7)
           (get_local $5)
          )
         )
        )
       )
      )
     )
     (set_local $6
      (call $_Znwj
       (i32.mul
        (get_local $7)
        (i32.const 24)
       )
      )
     )
     (br $label$0)
    )
    (set_local $7
     (i32.const 0)
    )
    (set_local $6
     (i32.const 0)
    )
    (br $label$0)
   )
   (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
    (get_local $0)
   )
   (unreachable)
  )
  (set_local $5
   (i32.load
    (get_local $1)
   )
  )
  (i32.store
   (get_local $1)
   (i32.const 0)
  )
  (i32.store
   (tee_local $1
    (i32.add
     (get_local $6)
     (i32.mul
      (get_local $4)
      (i32.const 24)
     )
    )
   )
   (get_local $5)
  )
  (i64.store offset=8
   (get_local $1)
   (i64.load
    (get_local $2)
   )
  )
  (i32.store offset=16
   (get_local $1)
   (i32.load
    (get_local $3)
   )
  )
  (set_local $4
   (i32.add
    (get_local $6)
    (i32.mul
     (get_local $7)
     (i32.const 24)
    )
   )
  )
  (set_local $5
   (i32.add
    (get_local $1)
    (i32.const 24)
   )
  )
  (block $label$4
   (block $label$5
    (br_if $label$5
     (i32.eq
      (tee_local $6
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 4)
        )
       )
      )
      (tee_local $7
       (i32.load
        (get_local $0)
       )
      )
     )
    )
    (loop $label$6
     (set_local $3
      (i32.load
       (tee_local $2
        (i32.add
         (get_local $6)
         (i32.const -24)
        )
       )
      )
     )
     (i32.store
      (get_local $2)
      (i32.const 0)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
      (get_local $3)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -8)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -8)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -12)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -12)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -16)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -16)
       )
      )
     )
     (set_local $1
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
     )
     (set_local $6
      (get_local $2)
     )
     (br_if $label$6
      (i32.ne
       (get_local $7)
       (get_local $2)
      )
     )
    )
    (set_local $7
     (i32.load
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (set_local $6
     (i32.load
      (get_local $0)
     )
    )
    (br $label$4)
   )
   (set_local $6
    (get_local $7)
   )
  )
  (i32.store
   (get_local $0)
   (get_local $1)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
   (get_local $5)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
   (get_local $4)
  )
  (block $label$7
   (br_if $label$7
    (i32.eq
     (get_local $7)
     (get_local $6)
    )
   )
   (loop $label$8
    (set_local $1
     (i32.load
      (tee_local $7
       (i32.add
        (get_local $7)
        (i32.const -24)
       )
      )
     )
    )
    (i32.store
     (get_local $7)
     (i32.const 0)
    )
    (block $label$9
     (br_if $label$9
      (i32.eqz
       (get_local $1)
      )
     )
     (call $_ZdlPv
      (get_local $1)
     )
    )
    (br_if $label$8
     (i32.ne
      (get_local $6)
      (get_local $7)
     )
    )
   )
  )
  (block $label$10
   (br_if $label$10
    (i32.eqz
     (get_local $6)
    )
   )
   (call $_ZdlPv
    (get_local $6)
   )
  )
 )
 (func $_ZN11eosiosystem15system_contract11buyrambytesEyym (type $FUNCSIG$vijji) (param $0 i32) (param $1 i64) (param $2 i64) (param $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i64)
  (local $9 i32)
  (local $10 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $10
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 144)
    )
   )
  )
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 332)
       )
      )
     )
     (tee_local $4
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 328)
       )
      )
     )
    )
   )
   (set_local $9
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (set_local $5
    (i32.sub
     (i32.const 0)
     (get_local $4)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i64.eq
      (i64.load offset=8
       (i32.load
        (get_local $9)
       )
      )
      (i64.const 4995142087184830980)
     )
    )
    (set_local $7
     (get_local $9)
    )
    (set_local $9
     (tee_local $6
      (i32.add
       (get_local $9)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $6)
       (get_local $5)
      )
      (i32.const -24)
     )
    )
   )
  )
  (set_local $6
   (i32.add
    (get_local $0)
    (i32.const 304)
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (get_local $4)
     )
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=64
       (tee_local $9
        (i32.load
         (i32.add
          (get_local $7)
          (i32.const -24)
         )
        )
       )
      )
      (get_local $6)
     )
     (i32.const 32)
    )
    (br $label$2)
   )
   (set_local $9
    (i32.const 0)
   )
   (br_if $label$2
    (i32.lt_s
     (tee_local $7
      (call $db_find_i64
       (i64.load
        (i32.add
         (get_local $0)
         (i32.const 304)
        )
       )
       (i64.load
        (i32.add
         (get_local $0)
         (i32.const 312)
        )
       )
       (i64.const -5069606918720847872)
       (i64.const 4995142087184830980)
      )
     )
     (i32.const 0)
    )
   )
   (call $eosio_assert
    (i32.eq
     (i32.load offset=64
      (tee_local $9
       (call $_ZNK5eosio11multi_indexILy13377137154988703744EN11eosiosystem14exchange_stateEJEE31load_object_by_primary_iteratorEl
        (get_local $6)
        (get_local $7)
       )
      )
     )
     (get_local $6)
    )
    (i32.const 32)
   )
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $10)
     (i32.const 80)
    )
    (get_local $9)
    (i32.const 64)
   )
  )
  (i64.store offset=56
   (get_local $10)
   (i64.const 1296126464)
  )
  (i64.store offset=48
   (get_local $10)
   (i64.extend_u/i32
    (get_local $3)
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $8
   (i64.const 5062994)
  )
  (set_local $9
   (i32.const 0)
  )
  (block $label$4
   (block $label$5
    (loop $label$6
     (br_if $label$5
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $8)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$7
      (br_if $label$7
       (i64.ne
        (i64.and
         (tee_local $8
          (i64.shr_u
           (get_local $8)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$8
       (br_if $label$5
        (i64.ne
         (i64.and
          (tee_local $8
           (i64.shr_u
            (get_local $8)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$8
        (i32.lt_s
         (tee_local $9
          (i32.add
           (get_local $9)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $6
      (i32.const 1)
     )
     (br_if $label$6
      (i32.lt_s
       (tee_local $9
        (i32.add
         (get_local $9)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$4)
    )
   )
   (set_local $6
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $6)
   (i32.const 704)
  )
  (i64.store
   (i32.add
    (i32.add
     (get_local $10)
     (i32.const 16)
    )
    (i32.const 8)
   )
   (i64.load
    (i32.add
     (i32.add
      (get_local $10)
      (i32.const 48)
     )
     (i32.const 8)
    )
   )
  )
  (i64.store offset=16
   (get_local $10)
   (i64.load offset=48
    (get_local $10)
   )
  )
  (call $_ZN11eosiosystem14exchange_state7convertEN5eosio5assetENS1_11symbol_typeE
   (i32.add
    (get_local $10)
    (i32.const 64)
   )
   (i32.add
    (get_local $10)
    (i32.const 80)
   )
   (i32.add
    (get_local $10)
    (i32.const 16)
   )
   (i64.const 1397703940)
  )
  (i64.store
   (i32.add
    (i32.add
     (get_local $10)
     (i32.const 32)
    )
    (i32.const 8)
   )
   (tee_local $8
    (i64.load
     (i32.add
      (i32.add
       (get_local $10)
       (i32.const 64)
      )
      (i32.const 8)
     )
    )
   )
  )
  (i64.store
   (i32.add
    (get_local $10)
    (i32.const 8)
   )
   (get_local $8)
  )
  (i64.store offset=32
   (get_local $10)
   (tee_local $8
    (i64.load offset=64
     (get_local $10)
    )
   )
  )
  (i64.store
   (get_local $10)
   (get_local $8)
  )
  (call $_ZN11eosiosystem15system_contract6buyramEyyN5eosio5assetE
   (get_local $0)
   (get_local $1)
   (get_local $2)
   (get_local $10)
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $10)
    (i32.const 144)
   )
  )
 )
 (func $_ZNK5eosio11multi_indexILy13377137154988703744EN11eosiosystem14exchange_stateEJEE31load_object_by_primary_iteratorEl (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (i32.store offset=44
   (tee_local $8
    (get_local $9)
   )
   (get_local $1)
  )
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 28)
       )
      )
     )
     (tee_local $2
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (set_local $3
    (i32.sub
     (i32.const 0)
     (get_local $2)
    )
   )
   (set_local $6
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i32.eq
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const 16)
       )
      )
      (get_local $1)
     )
    )
    (set_local $7
     (get_local $6)
    )
    (set_local $6
     (tee_local $4
      (i32.add
       (get_local $6)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $4)
       (get_local $3)
      )
      (i32.const -24)
     )
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (get_local $2)
     )
    )
    (set_local $6
     (i32.load
      (i32.add
       (get_local $7)
       (i32.const -24)
      )
     )
    )
    (br $label$2)
   )
   (call $eosio_assert
    (i32.xor
     (i32.shr_u
      (tee_local $6
       (call $db_get_i64
        (get_local $1)
        (i32.const 0)
        (i32.const 0)
       )
      )
      (i32.const 31)
     )
     (i32.const 1)
    )
    (i32.const 336)
   )
   (block $label$4
    (block $label$5
     (br_if $label$5
      (i32.lt_u
       (get_local $6)
       (i32.const 513)
      )
     )
     (set_local $4
      (call $malloc
       (get_local $6)
      )
     )
     (br $label$4)
    )
    (i32.store offset=4
     (i32.const 0)
     (tee_local $4
      (i32.sub
       (get_local $9)
       (i32.and
        (i32.add
         (get_local $6)
         (i32.const 15)
        )
        (i32.const -16)
       )
      )
     )
    )
   )
   (drop
    (call $db_get_i64
     (get_local $1)
     (get_local $4)
     (get_local $6)
    )
   )
   (i32.store offset=36
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=32
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=40
    (get_local $8)
    (i32.add
     (get_local $4)
     (get_local $6)
    )
   )
   (block $label$6
    (br_if $label$6
     (i32.lt_u
      (get_local $6)
      (i32.const 513)
     )
    )
    (call $free
     (get_local $4)
    )
   )
   (i32.store offset=8
    (get_local $8)
    (get_local $0)
   )
   (i32.store offset=12
    (get_local $8)
    (i32.add
     (get_local $8)
     (i32.const 32)
    )
   )
   (i32.store offset=16
    (get_local $8)
    (i32.add
     (get_local $8)
     (i32.const 44)
    )
   )
   (drop
    (call $_ZN11eosiosystem14exchange_stateC2Ev
     (tee_local $6
      (call $_Znwj
       (i32.const 80)
      )
     )
    )
   )
   (i32.store offset=64
    (get_local $6)
    (get_local $0)
   )
   (call $_ZZNK5eosio11multi_indexILy13377137154988703744EN11eosiosystem14exchange_stateEJEE31load_object_by_primary_iteratorElENKUlRT_E_clINS3_4itemEEEDaS5_
    (i32.add
     (get_local $8)
     (i32.const 8)
    )
    (get_local $6)
   )
   (i32.store offset=24
    (get_local $8)
    (get_local $6)
   )
   (i64.store offset=8
    (get_local $8)
    (tee_local $5
     (i64.load offset=8
      (get_local $6)
     )
    )
   )
   (i32.store offset=4
    (get_local $8)
    (tee_local $7
     (i32.load offset=68
      (get_local $6)
     )
    )
   )
   (block $label$7
    (block $label$8
     (br_if $label$8
      (i32.ge_u
       (tee_local $4
        (i32.load
         (tee_local $1
          (i32.add
           (get_local $0)
           (i32.const 28)
          )
         )
        )
       )
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 32)
        )
       )
      )
     )
     (i64.store offset=8
      (get_local $4)
      (get_local $5)
     )
     (i32.store offset=16
      (get_local $4)
      (get_local $7)
     )
     (i32.store offset=24
      (get_local $8)
      (i32.const 0)
     )
     (i32.store
      (get_local $4)
      (get_local $6)
     )
     (i32.store
      (get_local $1)
      (i32.add
       (get_local $4)
       (i32.const 24)
      )
     )
     (br $label$7)
    )
    (call $_ZNSt3__16vectorIN5eosio11multi_indexILy13377137154988703744EN11eosiosystem14exchange_stateEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_
     (i32.add
      (get_local $0)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 8)
     )
     (i32.add
      (get_local $8)
      (i32.const 4)
     )
    )
   )
   (set_local $4
    (i32.load offset=24
     (get_local $8)
    )
   )
   (i32.store offset=24
    (get_local $8)
    (i32.const 0)
   )
   (br_if $label$2
    (i32.eqz
     (get_local $4)
    )
   )
   (call $_ZdlPv
    (get_local $4)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 48)
   )
  )
  (get_local $6)
 )
 (func $_ZN11eosiosystem14exchange_state7convertEN5eosio5assetENS1_11symbol_typeE (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i64)
  (local $4 i64)
  (local $5 i64)
  (local $6 f64)
  (local $7 i64)
  (local $8 i32)
  (local $9 i32)
  (local $10 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $10
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 112)
    )
   )
  )
  (set_local $5
   (i64.load
    (i32.add
     (get_local $1)
     (i32.const 48)
    )
   )
  )
  (set_local $7
   (i64.load
    (i32.add
     (get_local $1)
     (i32.const 24)
    )
   )
  )
  (block $label$0
   (block $label$1
    (block $label$2
     (block $label$3
      (block $label$4
       (block $label$5
        (block $label$6
         (block $label$7
          (block $label$8
           (block $label$9
            (br_if $label$9
             (i64.ne
              (tee_local $4
               (i64.load offset=8
                (get_local $2)
               )
              )
              (i64.load offset=8
               (get_local $1)
              )
             )
            )
            (br_if $label$8
             (i64.ne
              (get_local $7)
              (get_local $3)
             )
            )
            (i64.store
             (tee_local $8
              (i32.add
               (i32.add
                (get_local $10)
                (i32.const 80)
               )
               (i32.const 8)
              )
             )
             (i64.load
              (tee_local $9
               (i32.add
                (get_local $2)
                (i32.const 8)
               )
              )
             )
            )
            (set_local $7
             (i64.load
              (get_local $2)
             )
            )
            (i32.store
             (i32.add
              (i32.add
               (get_local $10)
               (i32.const 16)
              )
              (i32.const 12)
             )
             (i32.load
              (i32.add
               (i32.add
                (get_local $10)
                (i32.const 80)
               )
               (i32.const 12)
              )
             )
            )
            (i32.store
             (i32.add
              (i32.add
               (get_local $10)
               (i32.const 16)
              )
              (i32.const 8)
             )
             (i32.load
              (get_local $8)
             )
            )
            (i64.store offset=80
             (get_local $10)
             (get_local $7)
            )
            (i32.store offset=20
             (get_local $10)
             (i32.load offset=84
              (get_local $10)
             )
            )
            (i32.store offset=16
             (get_local $10)
             (i32.load offset=80
              (get_local $10)
             )
            )
            (call $_ZN11eosiosystem14exchange_state21convert_from_exchangeERNS0_9connectorEN5eosio5assetE
             (i32.add
              (get_local $10)
              (i32.const 96)
             )
             (get_local $1)
             (i32.add
              (get_local $1)
              (i32.const 16)
             )
             (i32.add
              (get_local $10)
              (i32.const 16)
             )
            )
            (i64.store
             (get_local $9)
             (i64.load
              (i32.add
               (i32.add
                (get_local $10)
                (i32.const 96)
               )
               (i32.const 8)
              )
             )
            )
            (i64.store
             (get_local $2)
             (i64.load offset=96
              (get_local $10)
             )
            )
            (br $label$0)
           )
           (br_if $label$7
            (i64.ne
             (get_local $4)
             (get_local $7)
            )
           )
           (set_local $4
            (i64.load
             (get_local $1)
            )
           )
           (set_local $6
            (call $pow
             (f64.add
              (f64.div
               (f64.convert_s/i64
                (tee_local $7
                 (i64.load
                  (get_local $2)
                 )
                )
               )
               (f64.convert_s/i64
                (i64.add
                 (i64.load
                  (tee_local $8
                   (i32.add
                    (get_local $1)
                    (i32.const 16)
                   )
                  )
                 )
                 (get_local $7)
                )
               )
              )
              (f64.const 1)
             )
             (f64.div
              (f64.load
               (i32.add
                (get_local $1)
                (i32.const 32)
               )
              )
              (f64.const 1e3)
             )
            )
           )
           (i64.store
            (get_local $8)
            (i64.add
             (get_local $7)
             (i64.load
              (get_local $8)
             )
            )
           )
           (i64.store
            (get_local $1)
            (i64.add
             (tee_local $4
              (i64.trunc_s/f64
               (f64.neg
                (f64.mul
                 (f64.convert_s/i64
                  (get_local $4)
                 )
                 (f64.sub
                  (f64.const 1)
                  (get_local $6)
                 )
                )
               )
              )
             )
             (i64.load
              (get_local $1)
             )
            )
           )
           (set_local $5
            (i64.load
             (i32.add
              (get_local $1)
              (i32.const 8)
             )
            )
           )
           (call $eosio_assert
            (i64.lt_u
             (i64.add
              (get_local $4)
              (i64.const 4611686018427387903)
             )
             (i64.const 9223372036854775807)
            )
            (i32.const 992)
           )
           (set_local $7
            (i64.shr_u
             (get_local $5)
             (i64.const 8)
            )
           )
           (set_local $8
            (i32.const 0)
           )
           (loop $label$10
            (br_if $label$6
             (i32.gt_u
              (i32.add
               (i32.shl
                (i32.wrap/i64
                 (get_local $7)
                )
                (i32.const 24)
               )
               (i32.const -1073741825)
              )
              (i32.const 452984830)
             )
            )
            (block $label$11
             (br_if $label$11
              (i64.ne
               (i64.and
                (tee_local $7
                 (i64.shr_u
                  (get_local $7)
                  (i64.const 8)
                 )
                )
                (i64.const 255)
               )
               (i64.const 0)
              )
             )
             (loop $label$12
              (br_if $label$6
               (i64.ne
                (i64.and
                 (tee_local $7
                  (i64.shr_u
                   (get_local $7)
                   (i64.const 8)
                  )
                 )
                 (i64.const 255)
                )
                (i64.const 0)
               )
              )
              (br_if $label$12
               (i32.lt_s
                (tee_local $8
                 (i32.add
                  (get_local $8)
                  (i32.const 1)
                 )
                )
                (i32.const 7)
               )
              )
             )
            )
            (set_local $9
             (i32.const 1)
            )
            (br_if $label$10
             (i32.lt_s
              (tee_local $8
               (i32.add
                (get_local $8)
                (i32.const 1)
               )
              )
              (i32.const 7)
             )
            )
            (br $label$5)
           )
          )
          (br_if $label$4
           (i64.ne
            (get_local $5)
            (get_local $3)
           )
          )
          (i64.store
           (tee_local $8
            (i32.add
             (i32.add
              (get_local $10)
              (i32.const 64)
             )
             (i32.const 8)
            )
           )
           (i64.load
            (tee_local $9
             (i32.add
              (get_local $2)
              (i32.const 8)
             )
            )
           )
          )
          (set_local $7
           (i64.load
            (get_local $2)
           )
          )
          (i32.store
           (i32.add
            (i32.add
             (get_local $10)
             (i32.const 32)
            )
            (i32.const 12)
           )
           (i32.load
            (i32.add
             (i32.add
              (get_local $10)
              (i32.const 64)
             )
             (i32.const 12)
            )
           )
          )
          (i32.store
           (i32.add
            (i32.add
             (get_local $10)
             (i32.const 32)
            )
            (i32.const 8)
           )
           (i32.load
            (get_local $8)
           )
          )
          (i64.store offset=64
           (get_local $10)
           (get_local $7)
          )
          (i32.store offset=36
           (get_local $10)
           (i32.load offset=68
            (get_local $10)
           )
          )
          (i32.store offset=32
           (get_local $10)
           (i32.load offset=64
            (get_local $10)
           )
          )
          (call $_ZN11eosiosystem14exchange_state21convert_from_exchangeERNS0_9connectorEN5eosio5assetE
           (i32.add
            (get_local $10)
            (i32.const 96)
           )
           (get_local $1)
           (i32.add
            (get_local $1)
            (i32.const 40)
           )
           (i32.add
            (get_local $10)
            (i32.const 32)
           )
          )
          (i64.store
           (get_local $9)
           (i64.load
            (i32.add
             (i32.add
              (get_local $10)
              (i32.const 96)
             )
             (i32.const 8)
            )
           )
          )
          (i64.store
           (get_local $2)
           (i64.load offset=96
            (get_local $10)
           )
          )
          (br $label$0)
         )
         (br_if $label$3
          (i64.ne
           (get_local $4)
           (get_local $5)
          )
         )
         (set_local $4
          (i64.load
           (get_local $1)
          )
         )
         (set_local $6
          (call $pow
           (f64.add
            (f64.div
             (f64.convert_s/i64
              (tee_local $7
               (i64.load
                (get_local $2)
               )
              )
             )
             (f64.convert_s/i64
              (i64.add
               (i64.load
                (tee_local $8
                 (i32.add
                  (get_local $1)
                  (i32.const 40)
                 )
                )
               )
               (get_local $7)
              )
             )
            )
            (f64.const 1)
           )
           (f64.div
            (f64.load
             (i32.add
              (get_local $1)
              (i32.const 56)
             )
            )
            (f64.const 1e3)
           )
          )
         )
         (i64.store
          (get_local $8)
          (i64.add
           (get_local $7)
           (i64.load
            (get_local $8)
           )
          )
         )
         (i64.store
          (get_local $1)
          (i64.add
           (tee_local $4
            (i64.trunc_s/f64
             (f64.neg
              (f64.mul
               (f64.convert_s/i64
                (get_local $4)
               )
               (f64.sub
                (f64.const 1)
                (get_local $6)
               )
              )
             )
            )
           )
           (i64.load
            (get_local $1)
           )
          )
         )
         (set_local $5
          (i64.load
           (i32.add
            (get_local $1)
            (i32.const 8)
           )
          )
         )
         (call $eosio_assert
          (i64.lt_u
           (i64.add
            (get_local $4)
            (i64.const 4611686018427387903)
           )
           (i64.const 9223372036854775807)
          )
          (i32.const 992)
         )
         (set_local $7
          (i64.shr_u
           (get_local $5)
           (i64.const 8)
          )
         )
         (set_local $8
          (i32.const 0)
         )
         (loop $label$13
          (br_if $label$2
           (i32.gt_u
            (i32.add
             (i32.shl
              (i32.wrap/i64
               (get_local $7)
              )
              (i32.const 24)
             )
             (i32.const -1073741825)
            )
            (i32.const 452984830)
           )
          )
          (block $label$14
           (br_if $label$14
            (i64.ne
             (i64.and
              (tee_local $7
               (i64.shr_u
                (get_local $7)
                (i64.const 8)
               )
              )
              (i64.const 255)
             )
             (i64.const 0)
            )
           )
           (loop $label$15
            (br_if $label$2
             (i64.ne
              (i64.and
               (tee_local $7
                (i64.shr_u
                 (get_local $7)
                 (i64.const 8)
                )
               )
               (i64.const 255)
              )
              (i64.const 0)
             )
            )
            (br_if $label$15
             (i32.lt_s
              (tee_local $8
               (i32.add
                (get_local $8)
                (i32.const 1)
               )
              )
              (i32.const 7)
             )
            )
           )
          )
          (set_local $9
           (i32.const 1)
          )
          (br_if $label$13
           (i32.lt_s
            (tee_local $8
             (i32.add
              (get_local $8)
              (i32.const 1)
             )
            )
            (i32.const 7)
           )
          )
          (br $label$1)
         )
        )
        (set_local $9
         (i32.const 0)
        )
       )
       (call $eosio_assert
        (get_local $9)
        (i32.const 704)
       )
       (i64.store
        (i32.add
         (get_local $2)
         (i32.const 8)
        )
        (get_local $5)
       )
       (i64.store
        (get_local $2)
        (get_local $4)
       )
       (br $label$0)
      )
      (call $eosio_assert
       (i32.const 0)
       (i32.const 1296)
      )
      (br $label$0)
     )
     (call $eosio_assert
      (i32.const 0)
      (i32.const 1280)
     )
     (br $label$0)
    )
    (set_local $9
     (i32.const 0)
    )
   )
   (call $eosio_assert
    (get_local $9)
    (i32.const 704)
   )
   (i64.store
    (i32.add
     (get_local $2)
     (i32.const 8)
    )
    (get_local $5)
   )
   (i64.store
    (get_local $2)
    (get_local $4)
   )
  )
  (block $label$16
   (block $label$17
    (br_if $label$17
     (i64.ne
      (i64.load
       (tee_local $8
        (i32.add
         (get_local $2)
         (i32.const 8)
        )
       )
      )
      (get_local $3)
     )
    )
    (i64.store
     (get_local $0)
     (i64.load
      (get_local $2)
     )
    )
    (i64.store
     (i32.add
      (get_local $0)
      (i32.const 8)
     )
     (i64.load
      (get_local $8)
     )
    )
    (br $label$16)
   )
   (i64.store
    (i32.add
     (i32.add
      (get_local $10)
      (i32.const 48)
     )
     (i32.const 8)
    )
    (tee_local $7
     (i64.load
      (get_local $8)
     )
    )
   )
   (set_local $4
    (i64.load
     (get_local $2)
    )
   )
   (i64.store
    (i32.add
     (get_local $10)
     (i32.const 8)
    )
    (get_local $7)
   )
   (i64.store offset=48
    (get_local $10)
    (get_local $4)
   )
   (i32.store offset=4
    (get_local $10)
    (i32.load offset=52
     (get_local $10)
    )
   )
   (i32.store
    (get_local $10)
    (i32.load offset=48
     (get_local $10)
    )
   )
   (call $_ZN11eosiosystem14exchange_state7convertEN5eosio5assetENS1_11symbol_typeE
    (get_local $0)
    (get_local $1)
    (get_local $10)
    (get_local $3)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $10)
    (i32.const 112)
   )
  )
 )
 (func $_ZN11eosiosystem15system_contract6buyramEyyN5eosio5assetE (type $FUNCSIG$vijji) (param $0 i32) (param $1 i64) (param $2 i64) (param $3 i32)
  (local $4 i64)
  (local $5 i64)
  (local $6 i64)
  (local $7 i64)
  (local $8 i32)
  (local $9 i32)
  (local $10 i32)
  (local $11 i64)
  (local $12 i64)
  (local $13 i64)
  (local $14 i64)
  (local $15 i64)
  (local $16 i64)
  (local $17 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $17
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 160)
    )
   )
  )
  (call $require_auth
   (get_local $1)
  )
  (set_local $12
   (i64.const 0)
  )
  (call $eosio_assert
   (i64.gt_s
    (tee_local $4
     (i64.load
      (get_local $3)
     )
    )
    (i64.const 0)
   )
   (i32.const 1056)
  )
  (set_local $7
   (i64.sub
    (get_local $4)
    (tee_local $6
     (i64.div_s
      (i64.add
       (get_local $4)
       (i64.const 199)
      )
      (i64.const 200)
     )
    )
   )
  )
  (set_local $5
   (i64.load offset=8
    (get_local $3)
   )
  )
  (set_local $11
   (i64.const 59)
  )
  (set_local $3
   (i32.const 672)
  )
  (set_local $13
   (i64.const 0)
  )
  (loop $label$0
   (block $label$1
    (block $label$2
     (block $label$3
      (block $label$4
       (block $label$5
        (br_if $label$5
         (i64.gt_u
          (get_local $12)
          (i64.const 10)
         )
        )
        (br_if $label$4
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $8
             (i32.load8_s
              (get_local $3)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $8
         (i32.add
          (get_local $8)
          (i32.const 165)
         )
        )
        (br $label$3)
       )
       (set_local $14
        (i64.const 0)
       )
       (br_if $label$2
        (i64.eq
         (get_local $12)
         (i64.const 11)
        )
       )
       (br $label$1)
      )
      (set_local $8
       (select
        (i32.add
         (get_local $8)
         (i32.const 208)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $8)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $14
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $8)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $14
     (i64.shl
      (i64.and
       (get_local $14)
       (i64.const 31)
      )
      (i64.and
       (get_local $11)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $3
    (i32.add
     (get_local $3)
     (i32.const 1)
    )
   )
   (set_local $11
    (i64.add
     (get_local $11)
     (i64.const -5)
    )
   )
   (set_local $13
    (i64.or
     (get_local $14)
     (get_local $13)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $12
      (i64.add
       (get_local $12)
       (i64.const 1)
      )
     )
     (i64.const 13)
    )
   )
  )
  (set_local $12
   (i64.const 0)
  )
  (set_local $11
   (i64.const 59)
  )
  (set_local $3
   (i32.const 688)
  )
  (set_local $15
   (i64.const 0)
  )
  (loop $label$6
   (block $label$7
    (block $label$8
     (block $label$9
      (block $label$10
       (block $label$11
        (br_if $label$11
         (i64.gt_u
          (get_local $12)
          (i64.const 5)
         )
        )
        (br_if $label$10
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $8
             (i32.load8_s
              (get_local $3)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $8
         (i32.add
          (get_local $8)
          (i32.const 165)
         )
        )
        (br $label$9)
       )
       (set_local $14
        (i64.const 0)
       )
       (br_if $label$8
        (i64.le_u
         (get_local $12)
         (i64.const 11)
        )
       )
       (br $label$7)
      )
      (set_local $8
       (select
        (i32.add
         (get_local $8)
         (i32.const 208)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $8)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $14
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $8)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $14
     (i64.shl
      (i64.and
       (get_local $14)
       (i64.const 31)
      )
      (i64.and
       (get_local $11)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $3
    (i32.add
     (get_local $3)
     (i32.const 1)
    )
   )
   (set_local $12
    (i64.add
     (get_local $12)
     (i64.const 1)
    )
   )
   (set_local $15
    (i64.or
     (get_local $14)
     (get_local $15)
    )
   )
   (br_if $label$6
    (i64.ne
     (tee_local $11
      (i64.add
       (get_local $11)
       (i64.const -5)
      )
     )
     (i64.const -6)
    )
   )
  )
  (set_local $12
   (i64.const 0)
  )
  (set_local $11
   (i64.const 59)
  )
  (set_local $3
   (i32.const 1088)
  )
  (set_local $16
   (i64.const 0)
  )
  (loop $label$12
   (block $label$13
    (block $label$14
     (block $label$15
      (block $label$16
       (block $label$17
        (br_if $label$17
         (i64.gt_u
          (get_local $12)
          (i64.const 8)
         )
        )
        (br_if $label$16
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $8
             (i32.load8_s
              (get_local $3)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $8
         (i32.add
          (get_local $8)
          (i32.const 165)
         )
        )
        (br $label$15)
       )
       (set_local $14
        (i64.const 0)
       )
       (br_if $label$14
        (i64.le_u
         (get_local $12)
         (i64.const 11)
        )
       )
       (br $label$13)
      )
      (set_local $8
       (select
        (i32.add
         (get_local $8)
         (i32.const 208)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $8)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $14
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $8)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $14
     (i64.shl
      (i64.and
       (get_local $14)
       (i64.const 31)
      )
      (i64.and
       (get_local $11)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $3
    (i32.add
     (get_local $3)
     (i32.const 1)
    )
   )
   (set_local $12
    (i64.add
     (get_local $12)
     (i64.const 1)
    )
   )
   (set_local $16
    (i64.or
     (get_local $14)
     (get_local $16)
    )
   )
   (br_if $label$12
    (i64.ne
     (tee_local $11
      (i64.add
       (get_local $11)
       (i64.const -5)
      )
     )
     (i64.const -6)
    )
   )
  )
  (i32.store
   (i32.add
    (get_local $17)
    (i32.const 152)
   )
   (i32.const 0)
  )
  (i64.store offset=144
   (get_local $17)
   (i64.const 0)
  )
  (block $label$18
   (block $label$19
    (br_if $label$19
     (i32.ge_u
      (tee_local $3
       (call $strlen
        (i32.const 1104)
       )
      )
      (i32.const -16)
     )
    )
    (block $label$20
     (block $label$21
      (block $label$22
       (br_if $label$22
        (i32.ge_u
         (get_local $3)
         (i32.const 11)
        )
       )
       (i32.store8 offset=144
        (get_local $17)
        (i32.shl
         (get_local $3)
         (i32.const 1)
        )
       )
       (set_local $8
        (i32.or
         (i32.add
          (get_local $17)
          (i32.const 144)
         )
         (i32.const 1)
        )
       )
       (br_if $label$21
        (get_local $3)
       )
       (br $label$20)
      )
      (set_local $8
       (call $_Znwj
        (tee_local $9
         (i32.and
          (i32.add
           (get_local $3)
           (i32.const 16)
          )
          (i32.const -16)
         )
        )
       )
      )
      (i32.store offset=144
       (get_local $17)
       (i32.or
        (get_local $9)
        (i32.const 1)
       )
      )
      (i32.store offset=152
       (get_local $17)
       (get_local $8)
      )
      (i32.store offset=148
       (get_local $17)
       (get_local $3)
      )
     )
     (drop
      (call $memcpy
       (get_local $8)
       (i32.const 1104)
       (get_local $3)
      )
     )
    )
    (i32.store8
     (i32.add
      (get_local $8)
      (get_local $3)
     )
     (i32.const 0)
    )
    (set_local $8
     (i32.load offset=144
      (get_local $17)
     )
    )
    (i32.store offset=144
     (get_local $17)
     (i32.const 0)
    )
    (set_local $9
     (i32.load offset=148
      (get_local $17)
     )
    )
    (i32.store offset=148
     (get_local $17)
     (i32.const 0)
    )
    (set_local $10
     (i32.load offset=152
      (get_local $17)
     )
    )
    (i32.store offset=152
     (get_local $17)
     (i32.const 0)
    )
    (i64.store
     (tee_local $3
      (call $_Znwj
       (i32.const 16)
      )
     )
     (get_local $1)
    )
    (i64.store offset=8
     (get_local $3)
     (get_local $15)
    )
    (i32.store offset=24
     (get_local $17)
     (get_local $3)
    )
    (i32.store offset=32
     (get_local $17)
     (tee_local $3
      (i32.add
       (get_local $3)
       (i32.const 16)
      )
     )
    )
    (i64.store offset=64
     (get_local $17)
     (get_local $1)
    )
    (i32.store offset=28
     (get_local $17)
     (get_local $3)
    )
    (i64.store offset=72
     (get_local $17)
     (get_local $16)
    )
    (i64.store offset=80
     (get_local $17)
     (get_local $7)
    )
    (i64.store
     (i32.add
      (get_local $17)
      (i32.const 88)
     )
     (get_local $5)
    )
    (i32.store offset=96
     (get_local $17)
     (get_local $8)
    )
    (i32.store
     (i32.add
      (get_local $17)
      (i32.const 100)
     )
     (get_local $9)
    )
    (i32.store
     (tee_local $3
      (i32.add
       (get_local $17)
       (i32.const 104)
      )
     )
     (get_local $10)
    )
    (call $_ZN5eosio15dispatch_inlineIJyyNS_5assetENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEEEvyyNS2_6vectorINS_16permission_levelENS6_ISA_EEEENS2_5tupleIJDpT_EEE
     (get_local $13)
     (i64.const -3617168760277827584)
     (i32.add
      (get_local $17)
      (i32.const 24)
     )
     (i32.add
      (get_local $17)
      (i32.const 64)
     )
    )
    (block $label$23
     (br_if $label$23
      (i32.eqz
       (i32.and
        (i32.load8_u offset=96
         (get_local $17)
        )
        (i32.const 1)
       )
      )
     )
     (call $_ZdlPv
      (i32.load
       (get_local $3)
      )
     )
    )
    (block $label$24
     (br_if $label$24
      (i32.eqz
       (tee_local $3
        (i32.load offset=24
         (get_local $17)
        )
       )
      )
     )
     (i32.store offset=28
      (get_local $17)
      (get_local $3)
     )
     (call $_ZdlPv
      (get_local $3)
     )
    )
    (block $label$25
     (br_if $label$25
      (i32.eqz
       (i32.and
        (i32.load8_u offset=144
         (get_local $17)
        )
        (i32.const 1)
       )
      )
     )
     (call $_ZdlPv
      (i32.load
       (i32.add
        (get_local $17)
        (i32.const 152)
       )
      )
     )
    )
    (block $label$26
     (br_if $label$26
      (i64.lt_s
       (get_local $4)
       (i64.const 1)
      )
     )
     (set_local $12
      (i64.const 0)
     )
     (set_local $11
      (i64.const 59)
     )
     (set_local $3
      (i32.const 672)
     )
     (set_local $13
      (i64.const 0)
     )
     (loop $label$27
      (block $label$28
       (block $label$29
        (block $label$30
         (block $label$31
          (block $label$32
           (br_if $label$32
            (i64.gt_u
             (get_local $12)
             (i64.const 10)
            )
           )
           (br_if $label$31
            (i32.gt_u
             (i32.and
              (i32.add
               (tee_local $8
                (i32.load8_s
                 (get_local $3)
                )
               )
               (i32.const -97)
              )
              (i32.const 255)
             )
             (i32.const 25)
            )
           )
           (set_local $8
            (i32.add
             (get_local $8)
             (i32.const 165)
            )
           )
           (br $label$30)
          )
          (set_local $14
           (i64.const 0)
          )
          (br_if $label$29
           (i64.eq
            (get_local $12)
            (i64.const 11)
           )
          )
          (br $label$28)
         )
         (set_local $8
          (select
           (i32.add
            (get_local $8)
            (i32.const 208)
           )
           (i32.const 0)
           (i32.lt_u
            (i32.and
             (i32.add
              (get_local $8)
              (i32.const -49)
             )
             (i32.const 255)
            )
            (i32.const 5)
           )
          )
         )
        )
        (set_local $14
         (i64.shr_s
          (i64.shl
           (i64.extend_u/i32
            (get_local $8)
           )
           (i64.const 56)
          )
          (i64.const 56)
         )
        )
       )
       (set_local $14
        (i64.shl
         (i64.and
          (get_local $14)
          (i64.const 31)
         )
         (i64.and
          (get_local $11)
          (i64.const 4294967295)
         )
        )
       )
      )
      (set_local $3
       (i32.add
        (get_local $3)
        (i32.const 1)
       )
      )
      (set_local $11
       (i64.add
        (get_local $11)
        (i64.const -5)
       )
      )
      (set_local $13
       (i64.or
        (get_local $14)
        (get_local $13)
       )
      )
      (br_if $label$27
       (i64.ne
        (tee_local $12
         (i64.add
          (get_local $12)
          (i64.const 1)
         )
        )
        (i64.const 13)
       )
      )
     )
     (set_local $12
      (i64.const 0)
     )
     (set_local $11
      (i64.const 59)
     )
     (set_local $3
      (i32.const 688)
     )
     (set_local $15
      (i64.const 0)
     )
     (loop $label$33
      (block $label$34
       (block $label$35
        (block $label$36
         (block $label$37
          (block $label$38
           (br_if $label$38
            (i64.gt_u
             (get_local $12)
             (i64.const 5)
            )
           )
           (br_if $label$37
            (i32.gt_u
             (i32.and
              (i32.add
               (tee_local $8
                (i32.load8_s
                 (get_local $3)
                )
               )
               (i32.const -97)
              )
              (i32.const 255)
             )
             (i32.const 25)
            )
           )
           (set_local $8
            (i32.add
             (get_local $8)
             (i32.const 165)
            )
           )
           (br $label$36)
          )
          (set_local $14
           (i64.const 0)
          )
          (br_if $label$35
           (i64.le_u
            (get_local $12)
            (i64.const 11)
           )
          )
          (br $label$34)
         )
         (set_local $8
          (select
           (i32.add
            (get_local $8)
            (i32.const 208)
           )
           (i32.const 0)
           (i32.lt_u
            (i32.and
             (i32.add
              (get_local $8)
              (i32.const -49)
             )
             (i32.const 255)
            )
            (i32.const 5)
           )
          )
         )
        )
        (set_local $14
         (i64.shr_s
          (i64.shl
           (i64.extend_u/i32
            (get_local $8)
           )
           (i64.const 56)
          )
          (i64.const 56)
         )
        )
       )
       (set_local $14
        (i64.shl
         (i64.and
          (get_local $14)
          (i64.const 31)
         )
         (i64.and
          (get_local $11)
          (i64.const 4294967295)
         )
        )
       )
      )
      (set_local $3
       (i32.add
        (get_local $3)
        (i32.const 1)
       )
      )
      (set_local $12
       (i64.add
        (get_local $12)
        (i64.const 1)
       )
      )
      (set_local $15
       (i64.or
        (get_local $14)
        (get_local $15)
       )
      )
      (br_if $label$33
       (i64.ne
        (tee_local $11
         (i64.add
          (get_local $11)
          (i64.const -5)
         )
        )
        (i64.const -6)
       )
      )
     )
     (set_local $12
      (i64.const 0)
     )
     (set_local $14
      (i64.const 59)
     )
     (set_local $3
      (i32.const 1120)
     )
     (set_local $16
      (i64.const 0)
     )
     (loop $label$39
      (set_local $11
       (i64.const 0)
      )
      (block $label$40
       (br_if $label$40
        (i64.gt_u
         (get_local $12)
         (i64.const 11)
        )
       )
       (block $label$41
        (block $label$42
         (br_if $label$42
          (i32.gt_u
           (i32.and
            (i32.add
             (tee_local $8
              (i32.load8_s
               (get_local $3)
              )
             )
             (i32.const -97)
            )
            (i32.const 255)
           )
           (i32.const 25)
          )
         )
         (set_local $8
          (i32.add
           (get_local $8)
           (i32.const 165)
          )
         )
         (br $label$41)
        )
        (set_local $8
         (select
          (i32.add
           (get_local $8)
           (i32.const 208)
          )
          (i32.const 0)
          (i32.lt_u
           (i32.and
            (i32.add
             (get_local $8)
             (i32.const -49)
            )
            (i32.const 255)
           )
           (i32.const 5)
          )
         )
        )
       )
       (set_local $11
        (i64.shl
         (i64.extend_u/i32
          (i32.and
           (get_local $8)
           (i32.const 31)
          )
         )
         (i64.and
          (get_local $14)
          (i64.const 4294967295)
         )
        )
       )
      )
      (set_local $3
       (i32.add
        (get_local $3)
        (i32.const 1)
       )
      )
      (set_local $12
       (i64.add
        (get_local $12)
        (i64.const 1)
       )
      )
      (set_local $16
       (i64.or
        (get_local $11)
        (get_local $16)
       )
      )
      (br_if $label$39
       (i64.ne
        (tee_local $14
         (i64.add
          (get_local $14)
          (i64.const -5)
         )
        )
        (i64.const -6)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $17)
       (i32.const 152)
      )
      (i32.const 0)
     )
     (i64.store offset=144
      (get_local $17)
      (i64.const 0)
     )
     (br_if $label$18
      (i32.ge_u
       (tee_local $3
        (call $strlen
         (i32.const 1136)
        )
       )
       (i32.const -16)
      )
     )
     (block $label$43
      (block $label$44
       (block $label$45
        (br_if $label$45
         (i32.ge_u
          (get_local $3)
          (i32.const 11)
         )
        )
        (i32.store8 offset=144
         (get_local $17)
         (i32.shl
          (get_local $3)
          (i32.const 1)
         )
        )
        (set_local $8
         (i32.or
          (i32.add
           (get_local $17)
           (i32.const 144)
          )
          (i32.const 1)
         )
        )
        (br_if $label$44
         (get_local $3)
        )
        (br $label$43)
       )
       (set_local $8
        (call $_Znwj
         (tee_local $9
          (i32.and
           (i32.add
            (get_local $3)
            (i32.const 16)
           )
           (i32.const -16)
          )
         )
        )
       )
       (i32.store offset=144
        (get_local $17)
        (i32.or
         (get_local $9)
         (i32.const 1)
        )
       )
       (i32.store offset=152
        (get_local $17)
        (get_local $8)
       )
       (i32.store offset=148
        (get_local $17)
        (get_local $3)
       )
      )
      (drop
       (call $memcpy
        (get_local $8)
        (i32.const 1136)
        (get_local $3)
       )
      )
     )
     (i32.store8
      (i32.add
       (get_local $8)
       (get_local $3)
      )
      (i32.const 0)
     )
     (set_local $8
      (i32.load offset=144
       (get_local $17)
      )
     )
     (i32.store offset=144
      (get_local $17)
      (i32.const 0)
     )
     (set_local $9
      (i32.load offset=148
       (get_local $17)
      )
     )
     (i32.store offset=148
      (get_local $17)
      (i32.const 0)
     )
     (set_local $10
      (i32.load offset=152
       (get_local $17)
      )
     )
     (i32.store offset=152
      (get_local $17)
      (i32.const 0)
     )
     (i64.store
      (tee_local $3
       (call $_Znwj
        (i32.const 16)
       )
      )
      (get_local $1)
     )
     (i64.store offset=8
      (get_local $3)
      (get_local $15)
     )
     (i32.store offset=24
      (get_local $17)
      (get_local $3)
     )
     (i32.store offset=32
      (get_local $17)
      (tee_local $3
       (i32.add
        (get_local $3)
        (i32.const 16)
       )
      )
     )
     (i64.store offset=64
      (get_local $17)
      (get_local $1)
     )
     (i32.store offset=28
      (get_local $17)
      (get_local $3)
     )
     (i64.store offset=72
      (get_local $17)
      (get_local $16)
     )
     (i64.store offset=80
      (get_local $17)
      (get_local $6)
     )
     (i64.store
      (i32.add
       (get_local $17)
       (i32.const 88)
      )
      (get_local $5)
     )
     (i32.store offset=96
      (get_local $17)
      (get_local $8)
     )
     (i32.store
      (i32.add
       (get_local $17)
       (i32.const 100)
      )
      (get_local $9)
     )
     (i32.store
      (tee_local $3
       (i32.add
        (get_local $17)
        (i32.const 104)
       )
      )
      (get_local $10)
     )
     (call $_ZN5eosio15dispatch_inlineIJyyNS_5assetENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEEEvyyNS2_6vectorINS_16permission_levelENS6_ISA_EEEENS2_5tupleIJDpT_EEE
      (get_local $13)
      (i64.const -3617168760277827584)
      (i32.add
       (get_local $17)
       (i32.const 24)
      )
      (i32.add
       (get_local $17)
       (i32.const 64)
      )
     )
     (block $label$46
      (br_if $label$46
       (i32.eqz
        (i32.and
         (i32.load8_u offset=96
          (get_local $17)
         )
         (i32.const 1)
        )
       )
      )
      (call $_ZdlPv
       (i32.load
        (get_local $3)
       )
      )
     )
     (block $label$47
      (br_if $label$47
       (i32.eqz
        (tee_local $3
         (i32.load offset=24
          (get_local $17)
         )
        )
       )
      )
      (i32.store offset=28
       (get_local $17)
       (get_local $3)
      )
      (call $_ZdlPv
       (get_local $3)
      )
     )
     (br_if $label$26
      (i32.eqz
       (i32.and
        (i32.load8_u offset=144
         (get_local $17)
        )
        (i32.const 1)
       )
      )
     )
     (call $_ZdlPv
      (i32.load
       (i32.add
        (get_local $17)
        (i32.const 152)
       )
      )
     )
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=64
       (tee_local $3
        (call $_ZNK5eosio11multi_indexILy13377137154988703744EN11eosiosystem14exchange_stateEJEE3getEyPKc
         (tee_local $8
          (i32.add
           (get_local $0)
           (i32.const 304)
          )
         )
         (i64.const 4995142087184830980)
         (i32.const 1248)
        )
       )
      )
      (get_local $8)
     )
     (i32.const 144)
    )
    (call $eosio_assert
     (i64.eq
      (i64.load
       (get_local $8)
      )
      (call $current_receiver)
     )
     (i32.const 192)
    )
    (set_local $12
     (i64.load offset=8
      (get_local $3)
     )
    )
    (i64.store offset=32
     (get_local $17)
     (get_local $5)
    )
    (i64.store
     (i32.add
      (get_local $17)
      (i32.const 16)
     )
     (get_local $5)
    )
    (i64.store offset=24
     (get_local $17)
     (get_local $7)
    )
    (i64.store offset=8
     (get_local $17)
     (get_local $7)
    )
    (call $_ZN11eosiosystem14exchange_state7convertEN5eosio5assetENS1_11symbol_typeE
     (i32.add
      (get_local $17)
      (i32.const 64)
     )
     (get_local $3)
     (i32.add
      (get_local $17)
      (i32.const 8)
     )
     (i64.const 1296126464)
    )
    (set_local $14
     (i64.load offset=64
      (get_local $17)
     )
    )
    (call $eosio_assert
     (i64.eq
      (get_local $12)
      (i64.load offset=8
       (get_local $3)
      )
     )
     (i32.const 256)
    )
    (i32.store offset=32
     (get_local $17)
     (i32.add
      (i32.add
       (get_local $17)
       (i32.const 64)
      )
      (i32.const 64)
     )
    )
    (i32.store offset=28
     (get_local $17)
     (i32.add
      (get_local $17)
      (i32.const 64)
     )
    )
    (i32.store offset=24
     (get_local $17)
     (i32.add
      (get_local $17)
      (i32.const 64)
     )
    )
    (drop
     (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_14exchange_stateE
      (i32.add
       (get_local $17)
       (i32.const 24)
      )
      (get_local $3)
     )
    )
    (call $db_update_i64
     (i32.load offset=68
      (get_local $3)
     )
     (i64.const 0)
     (i32.add
      (get_local $17)
      (i32.const 64)
     )
     (i32.const 64)
    )
    (block $label$48
     (br_if $label$48
      (i64.lt_u
       (get_local $12)
       (i64.load
        (tee_local $3
         (i32.add
          (get_local $0)
          (i32.const 320)
         )
        )
       )
      )
     )
     (i64.store
      (get_local $3)
      (select
       (i64.const -2)
       (i64.add
        (get_local $12)
        (i64.const 1)
       )
       (i64.gt_u
        (get_local $12)
        (i64.const -3)
       )
      )
     )
    )
    (call $eosio_assert
     (i64.gt_s
      (get_local $14)
      (i64.const 0)
     )
     (i32.const 1152)
    )
    (i64.store
     (tee_local $3
      (i32.add
       (get_local $0)
       (i32.const 208)
      )
     )
     (i64.add
      (i64.load
       (get_local $3)
      )
      (get_local $14)
     )
    )
    (i64.store
     (tee_local $3
      (i32.add
       (get_local $0)
       (i32.const 216)
      )
     )
     (i64.add
      (i64.load
       (get_local $3)
      )
      (get_local $7)
     )
    )
    (i32.store
     (i32.add
      (get_local $17)
      (i32.const 56)
     )
     (i32.const 0)
    )
    (i64.store offset=40
     (get_local $17)
     (i64.const -1)
    )
    (i64.store offset=48
     (get_local $17)
     (i64.const 0)
    )
    (i64.store offset=24
     (get_local $17)
     (tee_local $12
      (i64.load
       (get_local $0)
      )
     )
    )
    (i64.store offset=32
     (get_local $17)
     (get_local $2)
    )
    (block $label$49
     (block $label$50
      (br_if $label$50
       (i32.lt_s
        (tee_local $3
         (call $db_find_i64
          (get_local $12)
          (get_local $2)
          (i64.const -3020372000712425472)
          (get_local $2)
         )
        )
        (i32.const 0)
       )
      )
      (call $eosio_assert
       (i32.eq
        (i32.load offset=48
         (tee_local $3
          (call $_ZNK5eosio11multi_indexILy15426372072997126144EN11eosiosystem14user_resourcesEJEE31load_object_by_primary_iteratorEl
           (i32.add
            (get_local $17)
            (i32.const 24)
           )
           (get_local $3)
          )
         )
        )
        (i32.add
         (get_local $17)
         (i32.const 24)
        )
       )
       (i32.const 32)
      )
      (call $eosio_assert
       (i32.const 1)
       (i32.const 96)
      )
      (call $eosio_assert
       (i32.eq
        (i32.load offset=48
         (get_local $3)
        )
        (i32.add
         (get_local $17)
         (i32.const 24)
        )
       )
       (i32.const 144)
      )
      (call $eosio_assert
       (i64.eq
        (i64.load offset=24
         (get_local $17)
        )
        (call $current_receiver)
       )
       (i32.const 192)
      )
      (i64.store offset=40
       (get_local $3)
       (i64.add
        (i64.load offset=40
         (get_local $3)
        )
        (get_local $14)
       )
      )
      (set_local $12
       (i64.load
        (get_local $3)
       )
      )
      (call $eosio_assert
       (i32.const 1)
       (i32.const 256)
      )
      (i32.store offset=152
       (get_local $17)
       (i32.add
        (i32.add
         (get_local $17)
         (i32.const 64)
        )
        (i32.const 48)
       )
      )
      (i32.store offset=148
       (get_local $17)
       (i32.add
        (get_local $17)
        (i32.const 64)
       )
      )
      (i32.store offset=144
       (get_local $17)
       (i32.add
        (get_local $17)
        (i32.const 64)
       )
      )
      (drop
       (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_14user_resourcesE
        (i32.add
         (get_local $17)
         (i32.const 144)
        )
        (get_local $3)
       )
      )
      (call $db_update_i64
       (i32.load offset=52
        (get_local $3)
       )
       (get_local $2)
       (i32.add
        (get_local $17)
        (i32.const 64)
       )
       (i32.const 48)
      )
      (br_if $label$49
       (i64.lt_u
        (get_local $12)
        (i64.load
         (tee_local $8
          (i32.add
           (get_local $17)
           (i32.const 40)
          )
         )
        )
       )
      )
      (i64.store
       (get_local $8)
       (select
        (i64.const -2)
        (i64.add
         (get_local $12)
         (i64.const 1)
        )
        (i64.gt_u
         (get_local $12)
         (i64.const -3)
        )
       )
      )
      (br $label$49)
     )
     (call $eosio_assert
      (i64.eq
       (i64.load offset=24
        (get_local $17)
       )
       (call $current_receiver)
      )
      (i32.const 1184)
     )
     (set_local $8
      (call $_ZN11eosiosystem14user_resourcesC2Ev
       (tee_local $3
        (call $_Znwj
         (i32.const 64)
        )
       )
      )
     )
     (i32.store offset=48
      (get_local $3)
      (i32.add
       (get_local $17)
       (i32.const 24)
      )
     )
     (i64.store offset=40
      (get_local $3)
      (get_local $14)
     )
     (i64.store
      (get_local $3)
      (get_local $2)
     )
     (i32.store offset=152
      (get_local $17)
      (i32.add
       (i32.add
        (get_local $17)
        (i32.const 64)
       )
       (i32.const 48)
      )
     )
     (i32.store offset=148
      (get_local $17)
      (i32.add
       (get_local $17)
       (i32.const 64)
      )
     )
     (i32.store offset=144
      (get_local $17)
      (i32.add
       (get_local $17)
       (i32.const 64)
      )
     )
     (drop
      (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_14user_resourcesE
       (i32.add
        (get_local $17)
        (i32.const 144)
       )
       (get_local $8)
      )
     )
     (i32.store offset=52
      (get_local $3)
      (tee_local $0
       (call $db_store_i64
        (i64.load
         (i32.add
          (get_local $17)
          (i32.const 32)
         )
        )
        (i64.const -3020372000712425472)
        (get_local $2)
        (tee_local $12
         (i64.load
          (get_local $3)
         )
        )
        (i32.add
         (get_local $17)
         (i32.const 64)
        )
        (i32.const 48)
       )
      )
     )
     (block $label$51
      (br_if $label$51
       (i64.lt_u
        (get_local $12)
        (i64.load
         (tee_local $8
          (i32.add
           (get_local $17)
           (i32.const 40)
          )
         )
        )
       )
      )
      (i64.store
       (get_local $8)
       (select
        (i64.const -2)
        (i64.add
         (get_local $12)
         (i64.const 1)
        )
        (i64.gt_u
         (get_local $12)
         (i64.const -3)
        )
       )
      )
     )
     (i32.store offset=144
      (get_local $17)
      (get_local $3)
     )
     (i64.store offset=64
      (get_local $17)
      (tee_local $12
       (i64.load
        (get_local $3)
       )
      )
     )
     (i32.store offset=140
      (get_local $17)
      (get_local $0)
     )
     (block $label$52
      (block $label$53
       (br_if $label$53
        (i32.ge_u
         (tee_local $8
          (i32.load
           (tee_local $9
            (i32.add
             (get_local $17)
             (i32.const 52)
            )
           )
          )
         )
         (i32.load
          (i32.add
           (get_local $17)
           (i32.const 56)
          )
         )
        )
       )
       (i64.store offset=8
        (get_local $8)
        (get_local $12)
       )
       (i32.store offset=16
        (get_local $8)
        (get_local $0)
       )
       (i32.store offset=144
        (get_local $17)
        (i32.const 0)
       )
       (i32.store
        (get_local $8)
        (get_local $3)
       )
       (i32.store
        (get_local $9)
        (i32.add
         (get_local $8)
         (i32.const 24)
        )
       )
       (br $label$52)
      )
      (call $_ZNSt3__16vectorIN5eosio11multi_indexILy15426372072997126144EN11eosiosystem14user_resourcesEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_
       (i32.add
        (get_local $17)
        (i32.const 48)
       )
       (i32.add
        (get_local $17)
        (i32.const 144)
       )
       (i32.add
        (get_local $17)
        (i32.const 64)
       )
       (i32.add
        (get_local $17)
        (i32.const 140)
       )
      )
     )
     (set_local $8
      (i32.load offset=144
       (get_local $17)
      )
     )
     (i32.store offset=144
      (get_local $17)
      (i32.const 0)
     )
     (br_if $label$49
      (i32.eqz
       (get_local $8)
      )
     )
     (call $_ZdlPv
      (get_local $8)
     )
    )
    (call $set_resource_limits
     (i64.load
      (get_local $3)
     )
     (i64.load offset=40
      (get_local $3)
     )
     (i64.load offset=8
      (get_local $3)
     )
     (i64.load offset=24
      (get_local $3)
     )
    )
    (block $label$54
     (br_if $label$54
      (i32.eqz
       (tee_local $0
        (i32.load offset=48
         (get_local $17)
        )
       )
      )
     )
     (block $label$55
      (block $label$56
       (br_if $label$56
        (i32.eq
         (tee_local $3
          (i32.load
           (tee_local $9
            (i32.add
             (get_local $17)
             (i32.const 52)
            )
           )
          )
         )
         (get_local $0)
        )
       )
       (loop $label$57
        (set_local $8
         (i32.load
          (tee_local $3
           (i32.add
            (get_local $3)
            (i32.const -24)
           )
          )
         )
        )
        (i32.store
         (get_local $3)
         (i32.const 0)
        )
        (block $label$58
         (br_if $label$58
          (i32.eqz
           (get_local $8)
          )
         )
         (call $_ZdlPv
          (get_local $8)
         )
        )
        (br_if $label$57
         (i32.ne
          (get_local $0)
          (get_local $3)
         )
        )
       )
       (set_local $3
        (i32.load
         (i32.add
          (get_local $17)
          (i32.const 48)
         )
        )
       )
       (br $label$55)
      )
      (set_local $3
       (get_local $0)
      )
     )
     (i32.store
      (get_local $9)
      (get_local $0)
     )
     (call $_ZdlPv
      (get_local $3)
     )
    )
    (i32.store offset=4
     (i32.const 0)
     (i32.add
      (get_local $17)
      (i32.const 160)
     )
    )
    (return)
   )
   (call $_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv
    (i32.add
     (get_local $17)
     (i32.const 144)
    )
   )
   (unreachable)
  )
  (call $_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv
   (i32.add
    (get_local $17)
    (i32.const 144)
   )
  )
  (unreachable)
 )
 (func $_ZNK5eosio11multi_indexILy15426372072997126144EN11eosiosystem14user_resourcesEJEE31load_object_by_primary_iteratorEl (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (set_local $8
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 28)
       )
      )
     )
     (tee_local $2
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (set_local $3
    (i32.sub
     (i32.const 0)
     (get_local $2)
    )
   )
   (set_local $6
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i32.eq
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const 16)
       )
      )
      (get_local $1)
     )
    )
    (set_local $7
     (get_local $6)
    )
    (set_local $6
     (tee_local $4
      (i32.add
       (get_local $6)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $4)
       (get_local $3)
      )
      (i32.const -24)
     )
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (get_local $2)
     )
    )
    (set_local $6
     (i32.load
      (i32.add
       (get_local $7)
       (i32.const -24)
      )
     )
    )
    (br $label$2)
   )
   (call $eosio_assert
    (i32.xor
     (i32.shr_u
      (tee_local $6
       (call $db_get_i64
        (get_local $1)
        (i32.const 0)
        (i32.const 0)
       )
      )
      (i32.const 31)
     )
     (i32.const 1)
    )
    (i32.const 336)
   )
   (block $label$4
    (block $label$5
     (br_if $label$5
      (i32.lt_u
       (get_local $6)
       (i32.const 513)
      )
     )
     (set_local $4
      (call $malloc
       (get_local $6)
      )
     )
     (br $label$4)
    )
    (i32.store offset=4
     (i32.const 0)
     (tee_local $4
      (i32.sub
       (get_local $9)
       (i32.and
        (i32.add
         (get_local $6)
         (i32.const 15)
        )
        (i32.const -16)
       )
      )
     )
    )
   )
   (drop
    (call $db_get_i64
     (get_local $1)
     (get_local $4)
     (get_local $6)
    )
   )
   (i32.store offset=36
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=32
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=40
    (get_local $8)
    (i32.add
     (get_local $4)
     (get_local $6)
    )
   )
   (block $label$6
    (br_if $label$6
     (i32.lt_u
      (get_local $6)
      (i32.const 513)
     )
    )
    (call $free
     (get_local $4)
    )
   )
   (set_local $4
    (call $_ZN11eosiosystem14user_resourcesC2Ev
     (tee_local $6
      (call $_Znwj
       (i32.const 64)
      )
     )
    )
   )
   (i32.store offset=48
    (get_local $6)
    (get_local $0)
   )
   (drop
    (call $_ZN11eosiosystemrsIN5eosio10datastreamIPKcEEEERT_S7_RNS_14user_resourcesE
     (i32.add
      (get_local $8)
      (i32.const 32)
     )
     (get_local $4)
    )
   )
   (i32.store offset=52
    (get_local $6)
    (get_local $1)
   )
   (i32.store offset=24
    (get_local $8)
    (get_local $6)
   )
   (i64.store offset=16
    (get_local $8)
    (tee_local $5
     (i64.load
      (get_local $6)
     )
    )
   )
   (i32.store offset=12
    (get_local $8)
    (tee_local $7
     (i32.load offset=52
      (get_local $6)
     )
    )
   )
   (block $label$7
    (block $label$8
     (br_if $label$8
      (i32.ge_u
       (tee_local $4
        (i32.load
         (tee_local $1
          (i32.add
           (get_local $0)
           (i32.const 28)
          )
         )
        )
       )
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 32)
        )
       )
      )
     )
     (i64.store offset=8
      (get_local $4)
      (get_local $5)
     )
     (i32.store offset=16
      (get_local $4)
      (get_local $7)
     )
     (i32.store offset=24
      (get_local $8)
      (i32.const 0)
     )
     (i32.store
      (get_local $4)
      (get_local $6)
     )
     (i32.store
      (get_local $1)
      (i32.add
       (get_local $4)
       (i32.const 24)
      )
     )
     (br $label$7)
    )
    (call $_ZNSt3__16vectorIN5eosio11multi_indexILy15426372072997126144EN11eosiosystem14user_resourcesEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_
     (i32.add
      (get_local $0)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 16)
     )
     (i32.add
      (get_local $8)
      (i32.const 12)
     )
    )
   )
   (set_local $4
    (i32.load offset=24
     (get_local $8)
    )
   )
   (i32.store offset=24
    (get_local $8)
    (i32.const 0)
   )
   (br_if $label$2
    (i32.eqz
     (get_local $4)
    )
   )
   (call $_ZdlPv
    (get_local $4)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 48)
   )
  )
  (get_local $6)
 )
 (func $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_14user_resourcesE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (get_local $1)
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 16)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 24)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 32)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 40)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (get_local $0)
 )
 (func $_ZN11eosiosystem14user_resourcesC2Ev (param $0 i32) (result i32)
  (local $1 i64)
  (local $2 i32)
  (local $3 i32)
  (i64.store offset=8
   (get_local $0)
   (i64.const 0)
  )
  (i64.store
   (tee_local $2
    (i32.add
     (get_local $0)
     (i32.const 16)
    )
   )
   (i64.const 1397703940)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $1
   (i64.shr_u
    (i64.load
     (get_local $2)
    )
    (i64.const 8)
   )
  )
  (set_local $2
   (i32.const 0)
  )
  (block $label$0
   (block $label$1
    (loop $label$2
     (br_if $label$1
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $1)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$3
      (br_if $label$3
       (i64.ne
        (i64.and
         (tee_local $1
          (i64.shr_u
           (get_local $1)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$4
       (br_if $label$1
        (i64.ne
         (i64.and
          (tee_local $1
           (i64.shr_u
            (get_local $1)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$4
        (i32.lt_s
         (tee_local $2
          (i32.add
           (get_local $2)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $3
      (i32.const 1)
     )
     (br_if $label$2
      (i32.lt_s
       (tee_local $2
        (i32.add
         (get_local $2)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$0)
    )
   )
   (set_local $3
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $3)
   (i32.const 704)
  )
  (i64.store
   (tee_local $2
    (i32.add
     (get_local $0)
     (i32.const 32)
    )
   )
   (i64.const 1397703940)
  )
  (i64.store offset=24
   (get_local $0)
   (i64.const 0)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $1
   (i64.shr_u
    (i64.load
     (get_local $2)
    )
    (i64.const 8)
   )
  )
  (set_local $2
   (i32.const 0)
  )
  (block $label$5
   (block $label$6
    (loop $label$7
     (br_if $label$6
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $1)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$8
      (br_if $label$8
       (i64.ne
        (i64.and
         (tee_local $1
          (i64.shr_u
           (get_local $1)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$9
       (br_if $label$6
        (i64.ne
         (i64.and
          (tee_local $1
           (i64.shr_u
            (get_local $1)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$9
        (i32.lt_s
         (tee_local $2
          (i32.add
           (get_local $2)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $3
      (i32.const 1)
     )
     (br_if $label$7
      (i32.lt_s
       (tee_local $2
        (i32.add
         (get_local $2)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$5)
    )
   )
   (set_local $3
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $3)
   (i32.const 704)
  )
  (i64.store offset=40
   (get_local $0)
   (i64.const 0)
  )
  (get_local $0)
 )
 (func $_ZNSt3__16vectorIN5eosio11multi_indexILy15426372072997126144EN11eosiosystem14user_resourcesEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_ (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.ge_u
      (tee_local $5
       (i32.add
        (tee_local $4
         (i32.div_s
          (i32.sub
           (i32.load offset=4
            (get_local $0)
           )
           (tee_local $6
            (i32.load
             (get_local $0)
            )
           )
          )
          (i32.const 24)
         )
        )
        (i32.const 1)
       )
      )
      (i32.const 178956971)
     )
    )
    (set_local $7
     (i32.const 178956970)
    )
    (block $label$2
     (block $label$3
      (br_if $label$3
       (i32.gt_u
        (tee_local $6
         (i32.div_s
          (i32.sub
           (i32.load offset=8
            (get_local $0)
           )
           (get_local $6)
          )
          (i32.const 24)
         )
        )
        (i32.const 89478484)
       )
      )
      (br_if $label$2
       (i32.eqz
        (tee_local $7
         (select
          (get_local $5)
          (tee_local $7
           (i32.shl
            (get_local $6)
            (i32.const 1)
           )
          )
          (i32.lt_u
           (get_local $7)
           (get_local $5)
          )
         )
        )
       )
      )
     )
     (set_local $6
      (call $_Znwj
       (i32.mul
        (get_local $7)
        (i32.const 24)
       )
      )
     )
     (br $label$0)
    )
    (set_local $7
     (i32.const 0)
    )
    (set_local $6
     (i32.const 0)
    )
    (br $label$0)
   )
   (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
    (get_local $0)
   )
   (unreachable)
  )
  (set_local $5
   (i32.load
    (get_local $1)
   )
  )
  (i32.store
   (get_local $1)
   (i32.const 0)
  )
  (i32.store
   (tee_local $1
    (i32.add
     (get_local $6)
     (i32.mul
      (get_local $4)
      (i32.const 24)
     )
    )
   )
   (get_local $5)
  )
  (i64.store offset=8
   (get_local $1)
   (i64.load
    (get_local $2)
   )
  )
  (i32.store offset=16
   (get_local $1)
   (i32.load
    (get_local $3)
   )
  )
  (set_local $4
   (i32.add
    (get_local $6)
    (i32.mul
     (get_local $7)
     (i32.const 24)
    )
   )
  )
  (set_local $5
   (i32.add
    (get_local $1)
    (i32.const 24)
   )
  )
  (block $label$4
   (block $label$5
    (br_if $label$5
     (i32.eq
      (tee_local $6
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 4)
        )
       )
      )
      (tee_local $7
       (i32.load
        (get_local $0)
       )
      )
     )
    )
    (loop $label$6
     (set_local $3
      (i32.load
       (tee_local $2
        (i32.add
         (get_local $6)
         (i32.const -24)
        )
       )
      )
     )
     (i32.store
      (get_local $2)
      (i32.const 0)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
      (get_local $3)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -8)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -8)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -12)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -12)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -16)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -16)
       )
      )
     )
     (set_local $1
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
     )
     (set_local $6
      (get_local $2)
     )
     (br_if $label$6
      (i32.ne
       (get_local $7)
       (get_local $2)
      )
     )
    )
    (set_local $7
     (i32.load
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (set_local $6
     (i32.load
      (get_local $0)
     )
    )
    (br $label$4)
   )
   (set_local $6
    (get_local $7)
   )
  )
  (i32.store
   (get_local $0)
   (get_local $1)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
   (get_local $5)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
   (get_local $4)
  )
  (block $label$7
   (br_if $label$7
    (i32.eq
     (get_local $7)
     (get_local $6)
    )
   )
   (loop $label$8
    (set_local $1
     (i32.load
      (tee_local $7
       (i32.add
        (get_local $7)
        (i32.const -24)
       )
      )
     )
    )
    (i32.store
     (get_local $7)
     (i32.const 0)
    )
    (block $label$9
     (br_if $label$9
      (i32.eqz
       (get_local $1)
      )
     )
     (call $_ZdlPv
      (get_local $1)
     )
    )
    (br_if $label$8
     (i32.ne
      (get_local $6)
      (get_local $7)
     )
    )
   )
  )
  (block $label$10
   (br_if $label$10
    (i32.eqz
     (get_local $6)
    )
   )
   (call $_ZdlPv
    (get_local $6)
   )
  )
 )
 (func $_ZNK5eosio11multi_indexILy13377137154988703744EN11eosiosystem14exchange_stateEJEE3getEyPKc (param $0 i32) (param $1 i64) (param $2 i32) (result i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 28)
       )
      )
     )
     (tee_local $3
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (set_local $6
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (set_local $4
    (i32.sub
     (i32.const 0)
     (get_local $3)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i64.eq
      (i64.load offset=8
       (i32.load
        (get_local $6)
       )
      )
      (get_local $1)
     )
    )
    (set_local $7
     (get_local $6)
    )
    (set_local $6
     (tee_local $5
      (i32.add
       (get_local $6)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $5)
       (get_local $4)
      )
      (i32.const -24)
     )
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (get_local $3)
     )
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=64
       (tee_local $6
        (i32.load
         (i32.add
          (get_local $7)
          (i32.const -24)
         )
        )
       )
      )
      (get_local $0)
     )
     (i32.const 32)
    )
    (br $label$2)
   )
   (set_local $6
    (i32.const 0)
   )
   (br_if $label$2
    (i32.lt_s
     (tee_local $5
      (call $db_find_i64
       (i64.load
        (get_local $0)
       )
       (i64.load offset=8
        (get_local $0)
       )
       (i64.const -5069606918720847872)
       (get_local $1)
      )
     )
     (i32.const 0)
    )
   )
   (call $eosio_assert
    (i32.eq
     (i32.load offset=64
      (tee_local $6
       (call $_ZNK5eosio11multi_indexILy13377137154988703744EN11eosiosystem14exchange_stateEJEE31load_object_by_primary_iteratorEl
        (get_local $0)
        (get_local $5)
       )
      )
     )
     (get_local $0)
    )
    (i32.const 32)
   )
  )
  (call $eosio_assert
   (i32.ne
    (get_local $6)
    (i32.const 0)
   )
   (get_local $2)
  )
  (get_local $6)
 )
 (func $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_14exchange_stateE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (get_local $1)
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 16)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 24)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 32)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 40)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 48)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 56)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (get_local $0)
 )
 (func $_ZN11eosiosystemrsIN5eosio10datastreamIPKcEEEERT_S7_RNS_14user_resourcesE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (get_local $1)
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 16)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 24)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 32)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 40)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (get_local $0)
 )
 (func $_ZN11eosiosystem14exchange_state21convert_from_exchangeERNS0_9connectorEN5eosio5assetE (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32)
  (local $4 i64)
  (local $5 f64)
  (local $6 i64)
  (call $eosio_assert
   (i64.eq
    (i64.load offset=8
     (get_local $3)
    )
    (i64.load offset=8
     (get_local $1)
    )
   )
   (i32.const 1328)
  )
  (set_local $4
   (i64.load
    (get_local $2)
   )
  )
  (set_local $5
   (call $pow
    (f64.add
     (f64.div
      (f64.convert_s/i64
       (tee_local $6
        (i64.load
         (get_local $3)
        )
       )
      )
      (f64.convert_s/i64
       (i64.sub
        (i64.load
         (get_local $1)
        )
        (get_local $6)
       )
      )
     )
     (f64.const 1)
    )
    (f64.div
     (f64.const 1e3)
     (f64.load offset=16
      (get_local $2)
     )
    )
   )
  )
  (i64.store
   (get_local $1)
   (i64.sub
    (i64.load
     (get_local $1)
    )
    (get_local $6)
   )
  )
  (i64.store
   (get_local $0)
   (tee_local $6
    (i64.trunc_s/f64
     (f64.mul
      (f64.convert_s/i64
       (get_local $4)
      )
      (f64.add
       (get_local $5)
       (f64.const -1)
      )
     )
    )
   )
  )
  (i64.store
   (get_local $2)
   (i64.sub
    (i64.load
     (get_local $2)
    )
    (get_local $6)
   )
  )
  (i64.store offset=8
   (get_local $0)
   (tee_local $4
    (i64.load offset=8
     (get_local $2)
    )
   )
  )
  (call $eosio_assert
   (i64.lt_u
    (i64.add
     (get_local $6)
     (i64.const 4611686018427387903)
    )
    (i64.const 9223372036854775807)
   )
   (i32.const 992)
  )
  (set_local $6
   (i64.shr_u
    (get_local $4)
    (i64.const 8)
   )
  )
  (set_local $2
   (i32.const 0)
  )
  (block $label$0
   (block $label$1
    (loop $label$2
     (br_if $label$1
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $6)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$3
      (br_if $label$3
       (i64.ne
        (i64.and
         (tee_local $6
          (i64.shr_u
           (get_local $6)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$4
       (br_if $label$1
        (i64.ne
         (i64.and
          (tee_local $6
           (i64.shr_u
            (get_local $6)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$4
        (i32.lt_s
         (tee_local $2
          (i32.add
           (get_local $2)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $1
      (i32.const 1)
     )
     (br_if $label$2
      (i32.lt_s
       (tee_local $2
        (i32.add
         (get_local $2)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$0)
    )
   )
   (set_local $1
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $1)
   (i32.const 704)
  )
 )
 (func $_ZN11eosiosystem14exchange_stateC2Ev (param $0 i32) (result i32)
  (local $1 i64)
  (local $2 i32)
  (local $3 i32)
  (i64.store offset=8
   (get_local $0)
   (i64.const 1397703940)
  )
  (i64.store
   (get_local $0)
   (i64.const 0)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $1
   (i64.shr_u
    (i64.load offset=8
     (get_local $0)
    )
    (i64.const 8)
   )
  )
  (set_local $2
   (i32.const 0)
  )
  (block $label$0
   (block $label$1
    (loop $label$2
     (br_if $label$1
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $1)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$3
      (br_if $label$3
       (i64.ne
        (i64.and
         (tee_local $1
          (i64.shr_u
           (get_local $1)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$4
       (br_if $label$1
        (i64.ne
         (i64.and
          (tee_local $1
           (i64.shr_u
            (get_local $1)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$4
        (i32.lt_s
         (tee_local $2
          (i32.add
           (get_local $2)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $3
      (i32.const 1)
     )
     (br_if $label$2
      (i32.lt_s
       (tee_local $2
        (i32.add
         (get_local $2)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$0)
    )
   )
   (set_local $3
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $3)
   (i32.const 704)
  )
  (i64.store
   (tee_local $2
    (i32.add
     (get_local $0)
     (i32.const 24)
    )
   )
   (i64.const 1397703940)
  )
  (i64.store offset=16
   (get_local $0)
   (i64.const 0)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $1
   (i64.shr_u
    (i64.load
     (get_local $2)
    )
    (i64.const 8)
   )
  )
  (set_local $2
   (i32.const 0)
  )
  (block $label$5
   (block $label$6
    (loop $label$7
     (br_if $label$6
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $1)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$8
      (br_if $label$8
       (i64.ne
        (i64.and
         (tee_local $1
          (i64.shr_u
           (get_local $1)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$9
       (br_if $label$6
        (i64.ne
         (i64.and
          (tee_local $1
           (i64.shr_u
            (get_local $1)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$9
        (i32.lt_s
         (tee_local $2
          (i32.add
           (get_local $2)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $3
      (i32.const 1)
     )
     (br_if $label$7
      (i32.lt_s
       (tee_local $2
        (i32.add
         (get_local $2)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$5)
    )
   )
   (set_local $3
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $3)
   (i32.const 704)
  )
  (i64.store offset=40
   (get_local $0)
   (i64.const 0)
  )
  (i64.store
   (i32.add
    (get_local $0)
    (i32.const 32)
   )
   (i64.const 4602678819172646912)
  )
  (i64.store
   (tee_local $2
    (i32.add
     (get_local $0)
     (i32.const 48)
    )
   )
   (i64.const 1397703940)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $1
   (i64.shr_u
    (i64.load
     (get_local $2)
    )
    (i64.const 8)
   )
  )
  (set_local $2
   (i32.const 0)
  )
  (block $label$10
   (block $label$11
    (loop $label$12
     (br_if $label$11
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $1)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$13
      (br_if $label$13
       (i64.ne
        (i64.and
         (tee_local $1
          (i64.shr_u
           (get_local $1)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$14
       (br_if $label$11
        (i64.ne
         (i64.and
          (tee_local $1
           (i64.shr_u
            (get_local $1)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$14
        (i32.lt_s
         (tee_local $2
          (i32.add
           (get_local $2)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $3
      (i32.const 1)
     )
     (br_if $label$12
      (i32.lt_s
       (tee_local $2
        (i32.add
         (get_local $2)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$10)
    )
   )
   (set_local $3
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $3)
   (i32.const 704)
  )
  (i64.store
   (i32.add
    (get_local $0)
    (i32.const 56)
   )
   (i64.const 4602678819172646912)
  )
  (get_local $0)
 )
 (func $_ZZNK5eosio11multi_indexILy13377137154988703744EN11eosiosystem14exchange_stateEJEE31load_object_by_primary_iteratorElENKUlRT_E_clINS3_4itemEEEDaS5_ (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (tee_local $2
       (i32.load offset=4
        (get_local $0)
       )
      )
     )
     (i32.load offset=4
      (get_local $2)
     )
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (get_local $1)
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (tee_local $3
    (i32.add
     (i32.load offset=4
      (get_local $2)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $2)
     )
     (get_local $3)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (tee_local $3
    (i32.add
     (i32.load offset=4
      (get_local $2)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $2)
     )
     (get_local $3)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 16)
    )
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (tee_local $3
    (i32.add
     (i32.load offset=4
      (get_local $2)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $2)
     )
     (get_local $3)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 24)
    )
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (tee_local $3
    (i32.add
     (i32.load offset=4
      (get_local $2)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $2)
     )
     (get_local $3)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 32)
    )
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (tee_local $3
    (i32.add
     (i32.load offset=4
      (get_local $2)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $2)
     )
     (get_local $3)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 40)
    )
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (tee_local $3
    (i32.add
     (i32.load offset=4
      (get_local $2)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $2)
     )
     (get_local $3)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 48)
    )
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (tee_local $3
    (i32.add
     (i32.load offset=4
      (get_local $2)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $2)
     )
     (get_local $3)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 56)
    )
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $2)
   (i32.add
    (i32.load offset=4
     (get_local $2)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=68
   (get_local $1)
   (i32.load
    (i32.load offset=8
     (get_local $0)
    )
   )
  )
 )
 (func $_ZNSt3__16vectorIN5eosio11multi_indexILy13377137154988703744EN11eosiosystem14exchange_stateEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_ (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.ge_u
      (tee_local $5
       (i32.add
        (tee_local $4
         (i32.div_s
          (i32.sub
           (i32.load offset=4
            (get_local $0)
           )
           (tee_local $6
            (i32.load
             (get_local $0)
            )
           )
          )
          (i32.const 24)
         )
        )
        (i32.const 1)
       )
      )
      (i32.const 178956971)
     )
    )
    (set_local $7
     (i32.const 178956970)
    )
    (block $label$2
     (block $label$3
      (br_if $label$3
       (i32.gt_u
        (tee_local $6
         (i32.div_s
          (i32.sub
           (i32.load offset=8
            (get_local $0)
           )
           (get_local $6)
          )
          (i32.const 24)
         )
        )
        (i32.const 89478484)
       )
      )
      (br_if $label$2
       (i32.eqz
        (tee_local $7
         (select
          (get_local $5)
          (tee_local $7
           (i32.shl
            (get_local $6)
            (i32.const 1)
           )
          )
          (i32.lt_u
           (get_local $7)
           (get_local $5)
          )
         )
        )
       )
      )
     )
     (set_local $6
      (call $_Znwj
       (i32.mul
        (get_local $7)
        (i32.const 24)
       )
      )
     )
     (br $label$0)
    )
    (set_local $7
     (i32.const 0)
    )
    (set_local $6
     (i32.const 0)
    )
    (br $label$0)
   )
   (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
    (get_local $0)
   )
   (unreachable)
  )
  (set_local $5
   (i32.load
    (get_local $1)
   )
  )
  (i32.store
   (get_local $1)
   (i32.const 0)
  )
  (i32.store
   (tee_local $1
    (i32.add
     (get_local $6)
     (i32.mul
      (get_local $4)
      (i32.const 24)
     )
    )
   )
   (get_local $5)
  )
  (i64.store offset=8
   (get_local $1)
   (i64.load
    (get_local $2)
   )
  )
  (i32.store offset=16
   (get_local $1)
   (i32.load
    (get_local $3)
   )
  )
  (set_local $4
   (i32.add
    (get_local $6)
    (i32.mul
     (get_local $7)
     (i32.const 24)
    )
   )
  )
  (set_local $5
   (i32.add
    (get_local $1)
    (i32.const 24)
   )
  )
  (block $label$4
   (block $label$5
    (br_if $label$5
     (i32.eq
      (tee_local $6
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 4)
        )
       )
      )
      (tee_local $7
       (i32.load
        (get_local $0)
       )
      )
     )
    )
    (loop $label$6
     (set_local $3
      (i32.load
       (tee_local $2
        (i32.add
         (get_local $6)
         (i32.const -24)
        )
       )
      )
     )
     (i32.store
      (get_local $2)
      (i32.const 0)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
      (get_local $3)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -8)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -8)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -12)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -12)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -16)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -16)
       )
      )
     )
     (set_local $1
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
     )
     (set_local $6
      (get_local $2)
     )
     (br_if $label$6
      (i32.ne
       (get_local $7)
       (get_local $2)
      )
     )
    )
    (set_local $7
     (i32.load
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (set_local $6
     (i32.load
      (get_local $0)
     )
    )
    (br $label$4)
   )
   (set_local $6
    (get_local $7)
   )
  )
  (i32.store
   (get_local $0)
   (get_local $1)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
   (get_local $5)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
   (get_local $4)
  )
  (block $label$7
   (br_if $label$7
    (i32.eq
     (get_local $7)
     (get_local $6)
    )
   )
   (loop $label$8
    (set_local $1
     (i32.load
      (tee_local $7
       (i32.add
        (get_local $7)
        (i32.const -24)
       )
      )
     )
    )
    (i32.store
     (get_local $7)
     (i32.const 0)
    )
    (block $label$9
     (br_if $label$9
      (i32.eqz
       (get_local $1)
      )
     )
     (call $_ZdlPv
      (get_local $1)
     )
    )
    (br_if $label$8
     (i32.ne
      (get_local $6)
      (get_local $7)
     )
    )
   )
  )
  (block $label$10
   (br_if $label$10
    (i32.eqz
     (get_local $6)
    )
   )
   (call $_ZdlPv
    (get_local $6)
   )
  )
 )
 (func $_ZN11eosiosystem15system_contract7sellramEyx (type $FUNCSIG$vijj) (param $0 i32) (param $1 i64) (param $2 i64)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (local $10 i64)
  (local $11 i64)
  (local $12 i64)
  (local $13 i64)
  (local $14 i64)
  (local $15 i64)
  (local $16 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $16
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 176)
    )
   )
  )
  (i64.store offset=104
   (get_local $16)
   (get_local $2)
  )
  (call $require_auth
   (get_local $1)
  )
  (call $eosio_assert
   (i64.gt_s
    (get_local $2)
    (i64.const 0)
   )
   (i32.const 1360)
  )
  (set_local $9
   (i32.const 0)
  )
  (i32.store
   (i32.add
    (get_local $16)
    (i32.const 96)
   )
   (i32.const 0)
  )
  (i64.store offset=72
   (get_local $16)
   (get_local $1)
  )
  (i64.store offset=80
   (get_local $16)
   (i64.const -1)
  )
  (i64.store offset=88
   (get_local $16)
   (i64.const 0)
  )
  (i64.store offset=64
   (get_local $16)
   (tee_local $2
    (i64.load
     (get_local $0)
    )
   )
  )
  (set_local $5
   (i32.const 0)
  )
  (block $label$0
   (br_if $label$0
    (i32.lt_s
     (tee_local $4
      (call $db_find_i64
       (get_local $2)
       (get_local $1)
       (i64.const -3020372000712425472)
       (get_local $1)
      )
     )
     (i32.const 0)
    )
   )
   (call $eosio_assert
    (i32.eq
     (i32.load offset=48
      (tee_local $5
       (call $_ZNK5eosio11multi_indexILy15426372072997126144EN11eosiosystem14user_resourcesEJEE31load_object_by_primary_iteratorEl
        (i32.add
         (get_local $16)
         (i32.const 64)
        )
        (get_local $4)
       )
      )
     )
     (i32.add
      (get_local $16)
      (i32.const 64)
     )
    )
    (i32.const 32)
   )
  )
  (call $eosio_assert
   (tee_local $7
    (i32.ne
     (get_local $5)
     (i32.const 0)
    )
   )
   (i32.const 1392)
  )
  (call $eosio_assert
   (i64.ge_s
    (i64.load offset=40
     (get_local $5)
    )
    (i64.load offset=104
     (get_local $16)
    )
   )
   (i32.const 1408)
  )
  (i64.store offset=56
   (get_local $16)
   (i64.const 1397703940)
  )
  (i64.store offset=48
   (get_local $16)
   (i64.const 0)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $2
   (i64.shr_u
    (i64.load offset=56
     (get_local $16)
    )
    (i64.const 8)
   )
  )
  (block $label$1
   (loop $label$2
    (set_local $4
     (i32.const 0)
    )
    (br_if $label$1
     (i32.gt_u
      (i32.add
       (i32.shl
        (i32.wrap/i64
         (get_local $2)
        )
        (i32.const 24)
       )
       (i32.const -1073741825)
      )
      (i32.const 452984830)
     )
    )
    (block $label$3
     (br_if $label$3
      (i64.ne
       (i64.and
        (tee_local $2
         (i64.shr_u
          (get_local $2)
          (i64.const 8)
         )
        )
        (i64.const 255)
       )
       (i64.const 0)
      )
     )
     (loop $label$4
      (br_if $label$1
       (i64.ne
        (i64.and
         (tee_local $2
          (i64.shr_u
           (get_local $2)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (br_if $label$4
       (i32.lt_s
        (tee_local $9
         (i32.add
          (get_local $9)
          (i32.const 1)
         )
        )
        (i32.const 7)
       )
      )
     )
    )
    (set_local $4
     (i32.const 1)
    )
    (br_if $label$2
     (i32.lt_s
      (tee_local $9
       (i32.add
        (get_local $9)
        (i32.const 1)
       )
      )
      (i32.const 7)
     )
    )
   )
  )
  (call $eosio_assert
   (get_local $4)
   (i32.const 704)
  )
  (block $label$5
   (br_if $label$5
    (i32.eq
     (tee_local $8
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 332)
       )
      )
     )
     (tee_local $6
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 328)
       )
      )
     )
    )
   )
   (set_local $9
    (i32.add
     (get_local $8)
     (i32.const -24)
    )
   )
   (set_local $3
    (i32.sub
     (i32.const 0)
     (get_local $6)
    )
   )
   (loop $label$6
    (br_if $label$5
     (i64.eq
      (i64.load offset=8
       (i32.load
        (get_local $9)
       )
      )
      (i64.const 4995142087184830980)
     )
    )
    (set_local $8
     (get_local $9)
    )
    (set_local $9
     (tee_local $4
      (i32.add
       (get_local $9)
       (i32.const -24)
      )
     )
    )
    (br_if $label$6
     (i32.ne
      (i32.add
       (get_local $4)
       (get_local $3)
      )
      (i32.const -24)
     )
    )
   )
  )
  (set_local $4
   (i32.add
    (get_local $0)
    (i32.const 304)
   )
  )
  (block $label$7
   (block $label$8
    (br_if $label$8
     (i32.eq
      (get_local $8)
      (get_local $6)
     )
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=64
       (tee_local $9
        (i32.load
         (i32.add
          (get_local $8)
          (i32.const -24)
         )
        )
       )
      )
      (get_local $4)
     )
     (i32.const 32)
    )
    (br $label$7)
   )
   (set_local $9
    (i32.const 0)
   )
   (br_if $label$7
    (i32.lt_s
     (tee_local $8
      (call $db_find_i64
       (i64.load
        (i32.add
         (get_local $0)
         (i32.const 304)
        )
       )
       (i64.load
        (i32.add
         (get_local $0)
         (i32.const 312)
        )
       )
       (i64.const -5069606918720847872)
       (i64.const 4995142087184830980)
      )
     )
     (i32.const 0)
    )
   )
   (call $eosio_assert
    (i32.eq
     (i32.load offset=64
      (tee_local $9
       (call $_ZNK5eosio11multi_indexILy13377137154988703744EN11eosiosystem14exchange_stateEJEE31load_object_by_primary_iteratorEl
        (get_local $4)
        (get_local $8)
       )
      )
     )
     (get_local $4)
    )
    (i32.const 32)
   )
  )
  (i32.store offset=132
   (get_local $16)
   (i32.add
    (get_local $16)
    (i32.const 104)
   )
  )
  (i32.store offset=128
   (get_local $16)
   (i32.add
    (get_local $16)
    (i32.const 48)
   )
  )
  (call $eosio_assert
   (i32.ne
    (get_local $9)
    (i32.const 0)
   )
   (i32.const 96)
  )
  (call $_ZN5eosio11multi_indexILy13377137154988703744EN11eosiosystem14exchange_stateEJEE6modifyIZNS1_15system_contract7sellramEyxE3$_6EEvRKS2_yOT_
   (get_local $4)
   (get_local $9)
   (i32.add
    (get_local $16)
    (i32.const 128)
   )
  )
  (i64.store
   (tee_local $9
    (i32.add
     (get_local $0)
     (i32.const 208)
    )
   )
   (i64.sub
    (i64.load
     (get_local $9)
    )
    (i64.load offset=104
     (get_local $16)
    )
   )
  )
  (i64.store
   (tee_local $9
    (i32.add
     (get_local $0)
     (i32.const 216)
    )
   )
   (tee_local $2
    (i64.sub
     (i64.load
      (get_local $9)
     )
     (i64.load offset=48
      (get_local $16)
     )
    )
   )
  )
  (call $eosio_assert
   (i32.xor
    (i32.wrap/i64
     (i64.shr_u
      (get_local $2)
      (i64.const 63)
     )
    )
    (i32.const 1)
   )
   (i32.const 1440)
  )
  (call $eosio_assert
   (get_local $7)
   (i32.const 96)
  )
  (call $eosio_assert
   (i32.eq
    (i32.load offset=48
     (get_local $5)
    )
    (i32.add
     (get_local $16)
     (i32.const 64)
    )
   )
   (i32.const 144)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load offset=64
     (get_local $16)
    )
    (call $current_receiver)
   )
   (i32.const 192)
  )
  (i64.store offset=40
   (get_local $5)
   (i64.sub
    (i64.load offset=40
     (get_local $5)
    )
    (i64.load offset=104
     (get_local $16)
    )
   )
  )
  (set_local $2
   (i64.load
    (get_local $5)
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 256)
  )
  (i32.store offset=24
   (get_local $16)
   (i32.add
    (i32.add
     (get_local $16)
     (i32.const 128)
    )
    (i32.const 48)
   )
  )
  (i32.store offset=20
   (get_local $16)
   (i32.add
    (get_local $16)
    (i32.const 128)
   )
  )
  (i32.store offset=16
   (get_local $16)
   (i32.add
    (get_local $16)
    (i32.const 128)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_14user_resourcesE
    (i32.add
     (get_local $16)
     (i32.const 16)
    )
    (get_local $5)
   )
  )
  (call $db_update_i64
   (i32.load offset=52
    (get_local $5)
   )
   (get_local $1)
   (i32.add
    (get_local $16)
    (i32.const 128)
   )
   (i32.const 48)
  )
  (block $label$9
   (br_if $label$9
    (i64.lt_u
     (get_local $2)
     (i64.load
      (tee_local $9
       (i32.add
        (get_local $16)
        (i32.const 80)
       )
      )
     )
    )
   )
   (i64.store
    (get_local $9)
    (select
     (i64.const -2)
     (i64.add
      (get_local $2)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $2)
      (i64.const -3)
     )
    )
   )
  )
  (call $set_resource_limits
   (i64.load
    (get_local $5)
   )
   (i64.load
    (i32.add
     (get_local $5)
     (i32.const 40)
    )
   )
   (i64.load offset=8
    (get_local $5)
   )
   (i64.load offset=24
    (get_local $5)
   )
  )
  (set_local $2
   (i64.const 0)
  )
  (set_local $10
   (i64.const 59)
  )
  (set_local $9
   (i32.const 672)
  )
  (set_local $11
   (i64.const 0)
  )
  (loop $label$10
   (block $label$11
    (block $label$12
     (block $label$13
      (block $label$14
       (block $label$15
        (br_if $label$15
         (i64.gt_u
          (get_local $2)
          (i64.const 10)
         )
        )
        (br_if $label$14
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $4
             (i32.load8_s
              (get_local $9)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $4
         (i32.add
          (get_local $4)
          (i32.const 165)
         )
        )
        (br $label$13)
       )
       (set_local $12
        (i64.const 0)
       )
       (br_if $label$12
        (i64.eq
         (get_local $2)
         (i64.const 11)
        )
       )
       (br $label$11)
      )
      (set_local $4
       (select
        (i32.add
         (get_local $4)
         (i32.const 208)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $4)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $12
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $4)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $12
     (i64.shl
      (i64.and
       (get_local $12)
       (i64.const 31)
      )
      (i64.and
       (get_local $10)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $9
    (i32.add
     (get_local $9)
     (i32.const 1)
    )
   )
   (set_local $10
    (i64.add
     (get_local $10)
     (i64.const -5)
    )
   )
   (set_local $11
    (i64.or
     (get_local $12)
     (get_local $11)
    )
   )
   (br_if $label$10
    (i64.ne
     (tee_local $2
      (i64.add
       (get_local $2)
       (i64.const 1)
      )
     )
     (i64.const 13)
    )
   )
  )
  (set_local $2
   (i64.const 0)
  )
  (set_local $10
   (i64.const 59)
  )
  (set_local $9
   (i32.const 1088)
  )
  (set_local $13
   (i64.const 0)
  )
  (loop $label$16
   (block $label$17
    (block $label$18
     (block $label$19
      (block $label$20
       (block $label$21
        (br_if $label$21
         (i64.gt_u
          (get_local $2)
          (i64.const 8)
         )
        )
        (br_if $label$20
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $4
             (i32.load8_s
              (get_local $9)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $4
         (i32.add
          (get_local $4)
          (i32.const 165)
         )
        )
        (br $label$19)
       )
       (set_local $12
        (i64.const 0)
       )
       (br_if $label$18
        (i64.le_u
         (get_local $2)
         (i64.const 11)
        )
       )
       (br $label$17)
      )
      (set_local $4
       (select
        (i32.add
         (get_local $4)
         (i32.const 208)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $4)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $12
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $4)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $12
     (i64.shl
      (i64.and
       (get_local $12)
       (i64.const 31)
      )
      (i64.and
       (get_local $10)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $9
    (i32.add
     (get_local $9)
     (i32.const 1)
    )
   )
   (set_local $2
    (i64.add
     (get_local $2)
     (i64.const 1)
    )
   )
   (set_local $13
    (i64.or
     (get_local $12)
     (get_local $13)
    )
   )
   (br_if $label$16
    (i64.ne
     (tee_local $10
      (i64.add
       (get_local $10)
       (i64.const -5)
      )
     )
     (i64.const -6)
    )
   )
  )
  (set_local $2
   (i64.const 0)
  )
  (set_local $10
   (i64.const 59)
  )
  (set_local $9
   (i32.const 688)
  )
  (set_local $14
   (i64.const 0)
  )
  (loop $label$22
   (block $label$23
    (block $label$24
     (block $label$25
      (block $label$26
       (block $label$27
        (br_if $label$27
         (i64.gt_u
          (get_local $2)
          (i64.const 5)
         )
        )
        (br_if $label$26
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $4
             (i32.load8_s
              (get_local $9)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $4
         (i32.add
          (get_local $4)
          (i32.const 165)
         )
        )
        (br $label$25)
       )
       (set_local $12
        (i64.const 0)
       )
       (br_if $label$24
        (i64.le_u
         (get_local $2)
         (i64.const 11)
        )
       )
       (br $label$23)
      )
      (set_local $4
       (select
        (i32.add
         (get_local $4)
         (i32.const 208)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $4)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $12
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $4)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $12
     (i64.shl
      (i64.and
       (get_local $12)
       (i64.const 31)
      )
      (i64.and
       (get_local $10)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $9
    (i32.add
     (get_local $9)
     (i32.const 1)
    )
   )
   (set_local $2
    (i64.add
     (get_local $2)
     (i64.const 1)
    )
   )
   (set_local $14
    (i64.or
     (get_local $12)
     (get_local $14)
    )
   )
   (br_if $label$22
    (i64.ne
     (tee_local $10
      (i64.add
       (get_local $10)
       (i64.const -5)
      )
     )
     (i64.const -6)
    )
   )
  )
  (set_local $2
   (i64.const 0)
  )
  (set_local $10
   (i64.const 59)
  )
  (set_local $9
   (i32.const 1088)
  )
  (set_local $15
   (i64.const 0)
  )
  (loop $label$28
   (block $label$29
    (block $label$30
     (block $label$31
      (block $label$32
       (block $label$33
        (br_if $label$33
         (i64.gt_u
          (get_local $2)
          (i64.const 8)
         )
        )
        (br_if $label$32
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $4
             (i32.load8_s
              (get_local $9)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $4
         (i32.add
          (get_local $4)
          (i32.const 165)
         )
        )
        (br $label$31)
       )
       (set_local $12
        (i64.const 0)
       )
       (br_if $label$30
        (i64.le_u
         (get_local $2)
         (i64.const 11)
        )
       )
       (br $label$29)
      )
      (set_local $4
       (select
        (i32.add
         (get_local $4)
         (i32.const 208)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $4)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $12
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $4)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $12
     (i64.shl
      (i64.and
       (get_local $12)
       (i64.const 31)
      )
      (i64.and
       (get_local $10)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $9
    (i32.add
     (get_local $9)
     (i32.const 1)
    )
   )
   (set_local $2
    (i64.add
     (get_local $2)
     (i64.const 1)
    )
   )
   (set_local $15
    (i64.or
     (get_local $12)
     (get_local $15)
    )
   )
   (br_if $label$28
    (i64.ne
     (tee_local $10
      (i64.add
       (get_local $10)
       (i64.const -5)
      )
     )
     (i64.const -6)
    )
   )
  )
  (i64.store
   (i32.add
    (i32.add
     (get_local $16)
     (i32.const 16)
    )
    (i32.const 8)
   )
   (i64.load
    (i32.add
     (i32.add
      (get_local $16)
      (i32.const 48)
     )
     (i32.const 8)
    )
   )
  )
  (i64.store offset=16
   (get_local $16)
   (i64.load offset=48
    (get_local $16)
   )
  )
  (i32.store
   (i32.add
    (get_local $16)
    (i32.const 8)
   )
   (i32.const 0)
  )
  (i64.store
   (get_local $16)
   (i64.const 0)
  )
  (block $label$34
   (block $label$35
    (br_if $label$35
     (i32.ge_u
      (tee_local $9
       (call $strlen
        (i32.const 1504)
       )
      )
      (i32.const -16)
     )
    )
    (block $label$36
     (block $label$37
      (block $label$38
       (br_if $label$38
        (i32.ge_u
         (get_local $9)
         (i32.const 11)
        )
       )
       (i32.store8
        (get_local $16)
        (i32.shl
         (get_local $9)
         (i32.const 1)
        )
       )
       (set_local $4
        (i32.or
         (get_local $16)
         (i32.const 1)
        )
       )
       (br_if $label$37
        (get_local $9)
       )
       (br $label$36)
      )
      (set_local $4
       (call $_Znwj
        (tee_local $5
         (i32.and
          (i32.add
           (get_local $9)
           (i32.const 16)
          )
          (i32.const -16)
         )
        )
       )
      )
      (i32.store
       (get_local $16)
       (i32.or
        (get_local $5)
        (i32.const 1)
       )
      )
      (i32.store offset=8
       (get_local $16)
       (get_local $4)
      )
      (i32.store offset=4
       (get_local $16)
       (get_local $9)
      )
     )
     (drop
      (call $memcpy
       (get_local $4)
       (i32.const 1504)
       (get_local $9)
      )
     )
    )
    (i32.store8
     (i32.add
      (get_local $4)
      (get_local $9)
     )
     (i32.const 0)
    )
    (i64.store
     (tee_local $4
      (i32.add
       (i32.add
        (get_local $16)
        (i32.const 32)
       )
       (i32.const 8)
      )
     )
     (i64.load
      (i32.add
       (i32.add
        (get_local $16)
        (i32.const 16)
       )
       (i32.const 8)
      )
     )
    )
    (i64.store offset=32
     (get_local $16)
     (i64.load offset=16
      (get_local $16)
     )
    )
    (set_local $5
     (i32.load
      (get_local $16)
     )
    )
    (i32.store
     (get_local $16)
     (i32.const 0)
    )
    (set_local $8
     (i32.load offset=8
      (get_local $16)
     )
    )
    (set_local $3
     (i32.load offset=4
      (get_local $16)
     )
    )
    (i32.store offset=4
     (get_local $16)
     (i32.const 0)
    )
    (i32.store offset=8
     (get_local $16)
     (i32.const 0)
    )
    (i64.store
     (tee_local $9
      (call $_Znwj
       (i32.const 16)
      )
     )
     (get_local $13)
    )
    (i64.store offset=8
     (get_local $9)
     (get_local $14)
    )
    (i32.store offset=120
     (get_local $16)
     (tee_local $0
      (i32.add
       (get_local $9)
       (i32.const 16)
      )
     )
    )
    (i32.store offset=112
     (get_local $16)
     (get_local $9)
    )
    (i64.store offset=136
     (get_local $16)
     (get_local $1)
    )
    (i64.store offset=128
     (get_local $16)
     (get_local $15)
    )
    (i32.store offset=116
     (get_local $16)
     (get_local $0)
    )
    (i64.store
     (i32.add
      (get_local $16)
      (i32.const 152)
     )
     (i64.load
      (get_local $4)
     )
    )
    (i64.store offset=144
     (get_local $16)
     (i64.load offset=32
      (get_local $16)
     )
    )
    (i32.store offset=160
     (get_local $16)
     (get_local $5)
    )
    (i32.store
     (i32.add
      (get_local $16)
      (i32.const 164)
     )
     (get_local $3)
    )
    (i32.store
     (tee_local $9
      (i32.add
       (get_local $16)
       (i32.const 168)
      )
     )
     (get_local $8)
    )
    (call $_ZN5eosio15dispatch_inlineIJyyNS_5assetENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEEEvyyNS2_6vectorINS_16permission_levelENS6_ISA_EEEENS2_5tupleIJDpT_EEE
     (get_local $11)
     (i64.const -3617168760277827584)
     (i32.add
      (get_local $16)
      (i32.const 112)
     )
     (i32.add
      (get_local $16)
      (i32.const 128)
     )
    )
    (block $label$39
     (br_if $label$39
      (i32.eqz
       (i32.and
        (i32.load8_u offset=160
         (get_local $16)
        )
        (i32.const 1)
       )
      )
     )
     (call $_ZdlPv
      (i32.load
       (get_local $9)
      )
     )
    )
    (block $label$40
     (br_if $label$40
      (i32.eqz
       (tee_local $9
        (i32.load offset=112
         (get_local $16)
        )
       )
      )
     )
     (i32.store offset=116
      (get_local $16)
      (get_local $9)
     )
     (call $_ZdlPv
      (get_local $9)
     )
    )
    (block $label$41
     (br_if $label$41
      (i32.eqz
       (i32.and
        (i32.load8_u
         (get_local $16)
        )
        (i32.const 1)
       )
      )
     )
     (call $_ZdlPv
      (i32.load
       (i32.add
        (get_local $16)
        (i32.const 8)
       )
      )
     )
    )
    (block $label$42
     (br_if $label$42
      (i64.lt_s
       (tee_local $2
        (i64.load offset=48
         (get_local $16)
        )
       )
       (i64.const 200)
      )
     )
     (set_local $15
      (i64.div_u
       (get_local $2)
       (i64.const 200)
      )
     )
     (set_local $2
      (i64.const 0)
     )
     (set_local $10
      (i64.const 59)
     )
     (set_local $9
      (i32.const 672)
     )
     (set_local $11
      (i64.const 0)
     )
     (loop $label$43
      (block $label$44
       (block $label$45
        (block $label$46
         (block $label$47
          (block $label$48
           (br_if $label$48
            (i64.gt_u
             (get_local $2)
             (i64.const 10)
            )
           )
           (br_if $label$47
            (i32.gt_u
             (i32.and
              (i32.add
               (tee_local $4
                (i32.load8_s
                 (get_local $9)
                )
               )
               (i32.const -97)
              )
              (i32.const 255)
             )
             (i32.const 25)
            )
           )
           (set_local $4
            (i32.add
             (get_local $4)
             (i32.const 165)
            )
           )
           (br $label$46)
          )
          (set_local $12
           (i64.const 0)
          )
          (br_if $label$45
           (i64.eq
            (get_local $2)
            (i64.const 11)
           )
          )
          (br $label$44)
         )
         (set_local $4
          (select
           (i32.add
            (get_local $4)
            (i32.const 208)
           )
           (i32.const 0)
           (i32.lt_u
            (i32.and
             (i32.add
              (get_local $4)
              (i32.const -49)
             )
             (i32.const 255)
            )
            (i32.const 5)
           )
          )
         )
        )
        (set_local $12
         (i64.shr_s
          (i64.shl
           (i64.extend_u/i32
            (get_local $4)
           )
           (i64.const 56)
          )
          (i64.const 56)
         )
        )
       )
       (set_local $12
        (i64.shl
         (i64.and
          (get_local $12)
          (i64.const 31)
         )
         (i64.and
          (get_local $10)
          (i64.const 4294967295)
         )
        )
       )
      )
      (set_local $9
       (i32.add
        (get_local $9)
        (i32.const 1)
       )
      )
      (set_local $10
       (i64.add
        (get_local $10)
        (i64.const -5)
       )
      )
      (set_local $11
       (i64.or
        (get_local $12)
        (get_local $11)
       )
      )
      (br_if $label$43
       (i64.ne
        (tee_local $2
         (i64.add
          (get_local $2)
          (i64.const 1)
         )
        )
        (i64.const 13)
       )
      )
     )
     (set_local $2
      (i64.const 0)
     )
     (set_local $10
      (i64.const 59)
     )
     (set_local $9
      (i32.const 688)
     )
     (set_local $13
      (i64.const 0)
     )
     (loop $label$49
      (block $label$50
       (block $label$51
        (block $label$52
         (block $label$53
          (block $label$54
           (br_if $label$54
            (i64.gt_u
             (get_local $2)
             (i64.const 5)
            )
           )
           (br_if $label$53
            (i32.gt_u
             (i32.and
              (i32.add
               (tee_local $4
                (i32.load8_s
                 (get_local $9)
                )
               )
               (i32.const -97)
              )
              (i32.const 255)
             )
             (i32.const 25)
            )
           )
           (set_local $4
            (i32.add
             (get_local $4)
             (i32.const 165)
            )
           )
           (br $label$52)
          )
          (set_local $12
           (i64.const 0)
          )
          (br_if $label$51
           (i64.le_u
            (get_local $2)
            (i64.const 11)
           )
          )
          (br $label$50)
         )
         (set_local $4
          (select
           (i32.add
            (get_local $4)
            (i32.const 208)
           )
           (i32.const 0)
           (i32.lt_u
            (i32.and
             (i32.add
              (get_local $4)
              (i32.const -49)
             )
             (i32.const 255)
            )
            (i32.const 5)
           )
          )
         )
        )
        (set_local $12
         (i64.shr_s
          (i64.shl
           (i64.extend_u/i32
            (get_local $4)
           )
           (i64.const 56)
          )
          (i64.const 56)
         )
        )
       )
       (set_local $12
        (i64.shl
         (i64.and
          (get_local $12)
          (i64.const 31)
         )
         (i64.and
          (get_local $10)
          (i64.const 4294967295)
         )
        )
       )
      )
      (set_local $9
       (i32.add
        (get_local $9)
        (i32.const 1)
       )
      )
      (set_local $2
       (i64.add
        (get_local $2)
        (i64.const 1)
       )
      )
      (set_local $13
       (i64.or
        (get_local $12)
        (get_local $13)
       )
      )
      (br_if $label$49
       (i64.ne
        (tee_local $10
         (i64.add
          (get_local $10)
          (i64.const -5)
         )
        )
        (i64.const -6)
       )
      )
     )
     (set_local $2
      (i64.const 0)
     )
     (set_local $12
      (i64.const 59)
     )
     (set_local $9
      (i32.const 1120)
     )
     (set_local $14
      (i64.const 0)
     )
     (loop $label$55
      (set_local $10
       (i64.const 0)
      )
      (block $label$56
       (br_if $label$56
        (i64.gt_u
         (get_local $2)
         (i64.const 11)
        )
       )
       (block $label$57
        (block $label$58
         (br_if $label$58
          (i32.gt_u
           (i32.and
            (i32.add
             (tee_local $4
              (i32.load8_s
               (get_local $9)
              )
             )
             (i32.const -97)
            )
            (i32.const 255)
           )
           (i32.const 25)
          )
         )
         (set_local $4
          (i32.add
           (get_local $4)
           (i32.const 165)
          )
         )
         (br $label$57)
        )
        (set_local $4
         (select
          (i32.add
           (get_local $4)
           (i32.const 208)
          )
          (i32.const 0)
          (i32.lt_u
           (i32.and
            (i32.add
             (get_local $4)
             (i32.const -49)
            )
            (i32.const 255)
           )
           (i32.const 5)
          )
         )
        )
       )
       (set_local $10
        (i64.shl
         (i64.extend_u/i32
          (i32.and
           (get_local $4)
           (i32.const 31)
          )
         )
         (i64.and
          (get_local $12)
          (i64.const 4294967295)
         )
        )
       )
      )
      (set_local $9
       (i32.add
        (get_local $9)
        (i32.const 1)
       )
      )
      (set_local $2
       (i64.add
        (get_local $2)
        (i64.const 1)
       )
      )
      (set_local $14
       (i64.or
        (get_local $10)
        (get_local $14)
       )
      )
      (br_if $label$55
       (i64.ne
        (tee_local $12
         (i64.add
          (get_local $12)
          (i64.const -5)
         )
        )
        (i64.const -6)
       )
      )
     )
     (call $eosio_assert
      (i32.const 1)
      (i32.const 992)
     )
     (set_local $2
      (i64.const 5459781)
     )
     (set_local $9
      (i32.const 0)
     )
     (block $label$59
      (block $label$60
       (loop $label$61
        (br_if $label$60
         (i32.gt_u
          (i32.add
           (i32.shl
            (i32.wrap/i64
             (get_local $2)
            )
            (i32.const 24)
           )
           (i32.const -1073741825)
          )
          (i32.const 452984830)
         )
        )
        (block $label$62
         (br_if $label$62
          (i64.ne
           (i64.and
            (tee_local $2
             (i64.shr_u
              (get_local $2)
              (i64.const 8)
             )
            )
            (i64.const 255)
           )
           (i64.const 0)
          )
         )
         (loop $label$63
          (br_if $label$60
           (i64.ne
            (i64.and
             (tee_local $2
              (i64.shr_u
               (get_local $2)
               (i64.const 8)
              )
             )
             (i64.const 255)
            )
            (i64.const 0)
           )
          )
          (br_if $label$63
           (i32.lt_s
            (tee_local $9
             (i32.add
              (get_local $9)
              (i32.const 1)
             )
            )
            (i32.const 7)
           )
          )
         )
        )
        (set_local $4
         (i32.const 1)
        )
        (br_if $label$61
         (i32.lt_s
          (tee_local $9
           (i32.add
            (get_local $9)
            (i32.const 1)
           )
          )
          (i32.const 7)
         )
        )
        (br $label$59)
       )
      )
      (set_local $4
       (i32.const 0)
      )
     )
     (call $eosio_assert
      (get_local $4)
      (i32.const 704)
     )
     (i32.store
      (i32.add
       (get_local $16)
       (i32.const 120)
      )
      (i32.const 0)
     )
     (i64.store offset=112
      (get_local $16)
      (i64.const 0)
     )
     (br_if $label$34
      (i32.ge_u
       (tee_local $9
        (call $strlen
         (i32.const 1520)
        )
       )
       (i32.const -16)
      )
     )
     (block $label$64
      (block $label$65
       (block $label$66
        (br_if $label$66
         (i32.ge_u
          (get_local $9)
          (i32.const 11)
         )
        )
        (i32.store8 offset=112
         (get_local $16)
         (i32.shl
          (get_local $9)
          (i32.const 1)
         )
        )
        (set_local $4
         (i32.or
          (i32.add
           (get_local $16)
           (i32.const 112)
          )
          (i32.const 1)
         )
        )
        (br_if $label$65
         (get_local $9)
        )
        (br $label$64)
       )
       (set_local $4
        (call $_Znwj
         (tee_local $5
          (i32.and
           (i32.add
            (get_local $9)
            (i32.const 16)
           )
           (i32.const -16)
          )
         )
        )
       )
       (i32.store offset=112
        (get_local $16)
        (i32.or
         (get_local $5)
         (i32.const 1)
        )
       )
       (i32.store offset=120
        (get_local $16)
        (get_local $4)
       )
       (i32.store offset=116
        (get_local $16)
        (get_local $9)
       )
      )
      (drop
       (call $memcpy
        (get_local $4)
        (i32.const 1520)
        (get_local $9)
       )
      )
     )
     (i32.store8
      (i32.add
       (get_local $4)
       (get_local $9)
      )
      (i32.const 0)
     )
     (set_local $4
      (i32.load offset=112
       (get_local $16)
      )
     )
     (i32.store offset=112
      (get_local $16)
      (i32.const 0)
     )
     (set_local $5
      (i32.load offset=116
       (get_local $16)
      )
     )
     (i32.store offset=116
      (get_local $16)
      (i32.const 0)
     )
     (set_local $8
      (i32.load offset=120
       (get_local $16)
      )
     )
     (i32.store offset=120
      (get_local $16)
      (i32.const 0)
     )
     (i64.store
      (tee_local $9
       (call $_Znwj
        (i32.const 16)
       )
      )
      (get_local $1)
     )
     (i64.store offset=8
      (get_local $9)
      (get_local $13)
     )
     (i32.store offset=16
      (get_local $16)
      (get_local $9)
     )
     (i32.store offset=24
      (get_local $16)
      (tee_local $9
       (i32.add
        (get_local $9)
        (i32.const 16)
       )
      )
     )
     (i64.store offset=128
      (get_local $16)
      (get_local $1)
     )
     (i32.store offset=20
      (get_local $16)
      (get_local $9)
     )
     (i64.store offset=136
      (get_local $16)
      (get_local $14)
     )
     (i64.store offset=144
      (get_local $16)
      (get_local $15)
     )
     (i64.store
      (i32.add
       (get_local $16)
       (i32.const 152)
      )
      (i64.const 1397703940)
     )
     (i32.store offset=160
      (get_local $16)
      (get_local $4)
     )
     (i32.store
      (i32.add
       (get_local $16)
       (i32.const 164)
      )
      (get_local $5)
     )
     (i32.store
      (tee_local $9
       (i32.add
        (get_local $16)
        (i32.const 168)
       )
      )
      (get_local $8)
     )
     (call $_ZN5eosio15dispatch_inlineIJyyNS_5assetENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEEEvyyNS2_6vectorINS_16permission_levelENS6_ISA_EEEENS2_5tupleIJDpT_EEE
      (get_local $11)
      (i64.const -3617168760277827584)
      (i32.add
       (get_local $16)
       (i32.const 16)
      )
      (i32.add
       (get_local $16)
       (i32.const 128)
      )
     )
     (block $label$67
      (br_if $label$67
       (i32.eqz
        (i32.and
         (i32.load8_u offset=160
          (get_local $16)
         )
         (i32.const 1)
        )
       )
      )
      (call $_ZdlPv
       (i32.load
        (get_local $9)
       )
      )
     )
     (block $label$68
      (br_if $label$68
       (i32.eqz
        (tee_local $9
         (i32.load offset=16
          (get_local $16)
         )
        )
       )
      )
      (i32.store offset=20
       (get_local $16)
       (get_local $9)
      )
      (call $_ZdlPv
       (get_local $9)
      )
     )
     (br_if $label$42
      (i32.eqz
       (i32.and
        (i32.load8_u offset=112
         (get_local $16)
        )
        (i32.const 1)
       )
      )
     )
     (call $_ZdlPv
      (i32.load
       (i32.add
        (get_local $16)
        (i32.const 120)
       )
      )
     )
    )
    (block $label$69
     (br_if $label$69
      (i32.eqz
       (tee_local $5
        (i32.load offset=88
         (get_local $16)
        )
       )
      )
     )
     (block $label$70
      (block $label$71
       (br_if $label$71
        (i32.eq
         (tee_local $9
          (i32.load
           (tee_local $8
            (i32.add
             (get_local $16)
             (i32.const 92)
            )
           )
          )
         )
         (get_local $5)
        )
       )
       (loop $label$72
        (set_local $4
         (i32.load
          (tee_local $9
           (i32.add
            (get_local $9)
            (i32.const -24)
           )
          )
         )
        )
        (i32.store
         (get_local $9)
         (i32.const 0)
        )
        (block $label$73
         (br_if $label$73
          (i32.eqz
           (get_local $4)
          )
         )
         (call $_ZdlPv
          (get_local $4)
         )
        )
        (br_if $label$72
         (i32.ne
          (get_local $5)
          (get_local $9)
         )
        )
       )
       (set_local $9
        (i32.load
         (i32.add
          (get_local $16)
          (i32.const 88)
         )
        )
       )
       (br $label$70)
      )
      (set_local $9
       (get_local $5)
      )
     )
     (i32.store
      (get_local $8)
      (get_local $5)
     )
     (call $_ZdlPv
      (get_local $9)
     )
    )
    (i32.store offset=4
     (i32.const 0)
     (i32.add
      (get_local $16)
      (i32.const 176)
     )
    )
    (return)
   )
   (call $_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv
    (get_local $16)
   )
   (unreachable)
  )
  (call $_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv
   (i32.add
    (get_local $16)
    (i32.const 112)
   )
  )
  (unreachable)
 )
 (func $_ZN5eosio11multi_indexILy13377137154988703744EN11eosiosystem14exchange_stateEJEE6modifyIZNS1_15system_contract7sellramEyxE3$_6EEvRKS2_yOT_ (param $0 i32) (param $1 i32) (param $2 i32)
  (local $3 i64)
  (local $4 i64)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $8
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (call $eosio_assert
   (i32.eq
    (i32.load offset=64
     (get_local $1)
    )
    (get_local $0)
   )
   (i32.const 144)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 192)
  )
  (set_local $3
   (i64.load offset=8
    (get_local $1)
   )
  )
  (i64.store offset=24
   (tee_local $7
    (get_local $8)
   )
   (i64.const 1296126464)
  )
  (i64.store offset=16
   (get_local $7)
   (tee_local $4
    (i64.load
     (i32.load offset=4
      (get_local $2)
     )
    )
   )
  )
  (call $eosio_assert
   (i64.lt_u
    (i64.add
     (get_local $4)
     (i64.const 4611686018427387903)
    )
    (i64.const 9223372036854775807)
   )
   (i32.const 992)
  )
  (set_local $4
   (i64.const 5062994)
  )
  (set_local $5
   (i32.const 0)
  )
  (block $label$0
   (block $label$1
    (loop $label$2
     (br_if $label$1
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $4)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$3
      (br_if $label$3
       (i64.ne
        (i64.and
         (tee_local $4
          (i64.shr_u
           (get_local $4)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$4
       (br_if $label$1
        (i64.ne
         (i64.and
          (tee_local $4
           (i64.shr_u
            (get_local $4)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$4
        (i32.lt_s
         (tee_local $5
          (i32.add
           (get_local $5)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $6
      (i32.const 1)
     )
     (br_if $label$2
      (i32.lt_s
       (tee_local $5
        (i32.add
         (get_local $5)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$0)
    )
   )
   (set_local $6
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $6)
   (i32.const 704)
  )
  (i64.store
   (i32.add
    (get_local $7)
    (i32.const 8)
   )
   (i64.load
    (i32.add
     (i32.add
      (get_local $7)
      (i32.const 16)
     )
     (i32.const 8)
    )
   )
  )
  (i64.store
   (get_local $7)
   (i64.load offset=16
    (get_local $7)
   )
  )
  (call $_ZN11eosiosystem14exchange_state7convertEN5eosio5assetENS1_11symbol_typeE
   (i32.add
    (get_local $7)
    (i32.const 32)
   )
   (get_local $1)
   (get_local $7)
   (i64.const 1397703940)
  )
  (i64.store
   (tee_local $5
    (i32.load
     (get_local $2)
    )
   )
   (i64.load offset=32
    (get_local $7)
   )
  )
  (i64.store
   (i32.add
    (get_local $5)
    (i32.const 8)
   )
   (i64.load
    (i32.add
     (i32.add
      (get_local $7)
      (i32.const 32)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i64.eq
    (get_local $3)
    (i64.load
     (i32.add
      (get_local $1)
      (i32.const 8)
     )
    )
   )
   (i32.const 256)
  )
  (i32.store offset=4
   (i32.const 0)
   (tee_local $5
    (i32.add
     (tee_local $6
      (get_local $8)
     )
     (i32.const -64)
    )
   )
  )
  (i32.store offset=36
   (get_local $7)
   (get_local $5)
  )
  (i32.store offset=32
   (get_local $7)
   (get_local $5)
  )
  (i32.store offset=40
   (get_local $7)
   (get_local $6)
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_14exchange_stateE
    (i32.add
     (get_local $7)
     (i32.const 32)
    )
    (get_local $1)
   )
  )
  (call $db_update_i64
   (i32.load offset=68
    (get_local $1)
   )
   (i64.const 0)
   (get_local $5)
   (i32.const 64)
  )
  (block $label$5
   (br_if $label$5
    (i64.lt_u
     (get_local $3)
     (i64.load offset=16
      (get_local $0)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $0)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $3)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $3)
      (i64.const -3)
     )
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $7)
    (i32.const 48)
   )
  )
 )
 (func $_ZN11eosiosystem19validate_b1_vestingEx (param $0 i64)
  (call $eosio_assert
   (i64.le_s
    (i64.sub
     (i64.const 1000000000000)
     (i64.trunc_s/f64
      (f64.div
       (f64.mul
        (f64.convert_s/i64
         (i64.add
          (i64.and
           (i64.div_u
            (call $current_time)
            (i64.const 1000000)
           )
           (i64.const 4294967295)
          )
          (i64.const -1527811200)
         )
        )
        (f64.const 1e12)
       )
       (f64.const 314496e3)
      )
     )
    )
    (get_local $0)
   )
   (i32.const 1536)
  )
 )
 (func $_ZN11eosiosystem15system_contract8changebwEyyN5eosio5assetES2_b (param $0 i32) (param $1 i64) (param $2 i64) (param $3 i32) (param $4 i32) (param $5 i32)
  (local $6 i32)
  (local $7 i64)
  (local $8 i64)
  (local $9 i32)
  (local $10 i32)
  (local $11 i64)
  (local $12 i64)
  (local $13 i64)
  (local $14 i64)
  (local $15 i64)
  (local $16 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $16
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 192)
    )
   )
  )
  (i64.store offset=152
   (get_local $16)
   (get_local $1)
  )
  (call $require_auth
   (get_local $1)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $10
   (i32.const 0)
  )
  (set_local $12
   (i64.const 5459781)
  )
  (block $label$0
   (block $label$1
    (loop $label$2
     (br_if $label$1
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $12)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$3
      (br_if $label$3
       (i64.ne
        (i64.and
         (tee_local $12
          (i64.shr_u
           (get_local $12)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$4
       (br_if $label$1
        (i64.ne
         (i64.and
          (tee_local $12
           (i64.shr_u
            (get_local $12)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$4
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $6
      (i32.const 1)
     )
     (br_if $label$2
      (i32.lt_s
       (tee_local $10
        (i32.add
         (get_local $10)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$0)
    )
   )
   (set_local $6
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $6)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (tee_local $14
     (i64.load offset=8
      (get_local $3)
     )
    )
    (i64.const 1397703940)
   )
   (i32.const 1584)
  )
  (block $label$5
   (block $label$6
    (block $label$7
     (br_if $label$7
      (i64.eqz
       (tee_local $13
        (i64.load
         (get_local $3)
        )
       )
      )
     )
     (call $eosio_assert
      (i32.const 1)
      (i32.const 1648)
     )
     (set_local $12
      (get_local $1)
     )
     (br_if $label$6
      (get_local $5)
     )
     (br $label$5)
    )
    (call $eosio_assert
     (i32.const 1)
     (i32.const 992)
    )
    (set_local $12
     (i64.const 5459781)
    )
    (set_local $10
     (i32.const 0)
    )
    (block $label$8
     (block $label$9
      (loop $label$10
       (br_if $label$9
        (i32.gt_u
         (i32.add
          (i32.shl
           (i32.wrap/i64
            (get_local $12)
           )
           (i32.const 24)
          )
          (i32.const -1073741825)
         )
         (i32.const 452984830)
        )
       )
       (block $label$11
        (br_if $label$11
         (i64.ne
          (i64.and
           (tee_local $12
            (i64.shr_u
             (get_local $12)
             (i64.const 8)
            )
           )
           (i64.const 255)
          )
          (i64.const 0)
         )
        )
        (loop $label$12
         (br_if $label$9
          (i64.ne
           (i64.and
            (tee_local $12
             (i64.shr_u
              (get_local $12)
              (i64.const 8)
             )
            )
            (i64.const 255)
           )
           (i64.const 0)
          )
         )
         (br_if $label$12
          (i32.lt_s
           (tee_local $10
            (i32.add
             (get_local $10)
             (i32.const 1)
            )
           )
           (i32.const 7)
          )
         )
        )
       )
       (set_local $6
        (i32.const 1)
       )
       (br_if $label$10
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
       (br $label$8)
      )
     )
     (set_local $6
      (i32.const 0)
     )
    )
    (call $eosio_assert
     (get_local $6)
     (i32.const 704)
    )
    (call $eosio_assert
     (i64.eq
      (i64.load offset=8
       (get_local $4)
      )
      (i64.const 1397703940)
     )
     (i32.const 1584)
    )
    (call $eosio_assert
     (i64.ne
      (i64.load
       (get_local $4)
      )
      (i64.const 0)
     )
     (i32.const 1648)
    )
    (set_local $12
     (get_local $1)
    )
    (br_if $label$5
     (i32.eqz
      (get_local $5)
     )
    )
   )
   (i64.store offset=152
    (get_local $16)
    (get_local $2)
   )
   (set_local $12
    (get_local $2)
   )
  )
  (i32.store
   (i32.add
    (get_local $16)
    (i32.const 144)
   )
   (i32.const 0)
  )
  (i64.store offset=128
   (get_local $16)
   (i64.const -1)
  )
  (i64.store offset=136
   (get_local $16)
   (i64.const 0)
  )
  (i64.store offset=112
   (get_local $16)
   (tee_local $11
    (i64.load
     (get_local $0)
    )
   )
  )
  (i64.store offset=120
   (get_local $16)
   (get_local $12)
  )
  (block $label$13
   (block $label$14
    (br_if $label$14
     (i32.lt_s
      (tee_local $10
       (call $db_find_i64
        (get_local $11)
        (get_local $12)
        (i64.const 5377987680120340480)
        (get_local $2)
       )
      )
      (i32.const 0)
     )
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=48
       (tee_local $6
        (call $_ZNK5eosio11multi_indexILy5377987680120340480EN11eosiosystem19delegated_bandwidthEJEE31load_object_by_primary_iteratorEl
         (i32.add
          (get_local $16)
          (i32.const 112)
         )
         (get_local $10)
        )
       )
      )
      (i32.add
       (get_local $16)
       (i32.const 112)
      )
     )
     (i32.const 32)
    )
    (call $eosio_assert
     (i32.const 1)
     (i32.const 96)
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=48
       (get_local $6)
      )
      (i32.add
       (get_local $16)
       (i32.const 112)
      )
     )
     (i32.const 144)
    )
    (call $eosio_assert
     (i64.eq
      (i64.load offset=112
       (get_local $16)
      )
      (call $current_receiver)
     )
     (i32.const 192)
    )
    (set_local $12
     (i64.load offset=8
      (get_local $6)
     )
    )
    (call $eosio_assert
     (i64.eq
      (get_local $14)
      (i64.load
       (i32.add
        (get_local $6)
        (i32.const 24)
       )
      )
     )
     (i32.const 1680)
    )
    (i64.store offset=16
     (get_local $6)
     (tee_local $11
      (i64.add
       (i64.load offset=16
        (get_local $6)
       )
       (get_local $13)
      )
     )
    )
    (call $eosio_assert
     (i64.gt_s
      (get_local $11)
      (i64.const -4611686018427387904)
     )
     (i32.const 1728)
    )
    (call $eosio_assert
     (i64.lt_s
      (i64.load offset=16
       (get_local $6)
      )
      (i64.const 4611686018427387904)
     )
     (i32.const 1760)
    )
    (call $eosio_assert
     (i64.eq
      (i64.load offset=8
       (get_local $4)
      )
      (i64.load
       (i32.add
        (get_local $6)
        (i32.const 40)
       )
      )
     )
     (i32.const 1680)
    )
    (i64.store offset=32
     (get_local $6)
     (tee_local $11
      (i64.add
       (i64.load offset=32
        (get_local $6)
       )
       (i64.load
        (get_local $4)
       )
      )
     )
    )
    (call $eosio_assert
     (i64.gt_s
      (get_local $11)
      (i64.const -4611686018427387904)
     )
     (i32.const 1728)
    )
    (call $eosio_assert
     (i64.lt_s
      (i64.load offset=32
       (get_local $6)
      )
      (i64.const 4611686018427387904)
     )
     (i32.const 1760)
    )
    (call $eosio_assert
     (i64.eq
      (get_local $12)
      (i64.load offset=8
       (get_local $6)
      )
     )
     (i32.const 256)
    )
    (i32.store offset=104
     (get_local $16)
     (i32.add
      (i32.add
       (get_local $16)
       (i32.const 16)
      )
      (i32.const 48)
     )
    )
    (i32.store offset=100
     (get_local $16)
     (i32.add
      (get_local $16)
      (i32.const 16)
     )
    )
    (i32.store offset=96
     (get_local $16)
     (i32.add
      (get_local $16)
      (i32.const 16)
     )
    )
    (drop
     (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_19delegated_bandwidthE
      (i32.add
       (get_local $16)
       (i32.const 96)
      )
      (get_local $6)
     )
    )
    (call $db_update_i64
     (i32.load offset=52
      (get_local $6)
     )
     (i64.const 0)
     (i32.add
      (get_local $16)
      (i32.const 16)
     )
     (i32.const 48)
    )
    (br_if $label$13
     (i64.lt_u
      (get_local $12)
      (i64.load
       (tee_local $10
        (i32.add
         (get_local $16)
         (i32.const 128)
        )
       )
      )
     )
    )
    (i64.store
     (get_local $10)
     (select
      (i64.const -2)
      (i64.add
       (get_local $12)
       (i64.const 1)
      )
      (i64.gt_u
       (get_local $12)
       (i64.const -3)
      )
     )
    )
    (br $label$13)
   )
   (set_local $11
    (i64.load offset=152
     (get_local $16)
    )
   )
   (call $eosio_assert
    (i64.eq
     (i64.load offset=112
      (get_local $16)
     )
     (call $current_receiver)
    )
    (i32.const 1184)
   )
   (set_local $10
    (call $_ZN11eosiosystem19delegated_bandwidthC2Ev
     (tee_local $6
      (call $_Znwj
       (i32.const 64)
      )
     )
    )
   )
   (i32.store offset=48
    (get_local $6)
    (i32.add
     (get_local $16)
     (i32.const 112)
    )
   )
   (i64.store offset=8
    (get_local $6)
    (get_local $2)
   )
   (i64.store
    (get_local $6)
    (i64.load offset=152
     (get_local $16)
    )
   )
   (i32.store
    (i32.add
     (get_local $6)
     (i32.const 28)
    )
    (i32.load
     (i32.add
      (get_local $3)
      (i32.const 12)
     )
    )
   )
   (i32.store
    (i32.add
     (get_local $6)
     (i32.const 24)
    )
    (i32.load
     (i32.add
      (get_local $3)
      (i32.const 8)
     )
    )
   )
   (i32.store
    (i32.add
     (get_local $6)
     (i32.const 20)
    )
    (i32.load
     (i32.add
      (get_local $3)
      (i32.const 4)
     )
    )
   )
   (i32.store offset=16
    (get_local $6)
    (i32.load
     (get_local $3)
    )
   )
   (i64.store
    (i32.add
     (get_local $6)
     (i32.const 40)
    )
    (i64.load
     (i32.add
      (get_local $4)
      (i32.const 8)
     )
    )
   )
   (i64.store offset=32
    (get_local $6)
    (i64.load
     (get_local $4)
    )
   )
   (i32.store offset=104
    (get_local $16)
    (i32.add
     (i32.add
      (get_local $16)
      (i32.const 16)
     )
     (i32.const 48)
    )
   )
   (i32.store offset=100
    (get_local $16)
    (i32.add
     (get_local $16)
     (i32.const 16)
    )
   )
   (i32.store offset=96
    (get_local $16)
    (i32.add
     (get_local $16)
     (i32.const 16)
    )
   )
   (drop
    (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_19delegated_bandwidthE
     (i32.add
      (get_local $16)
      (i32.const 96)
     )
     (get_local $10)
    )
   )
   (i32.store offset=52
    (get_local $6)
    (tee_local $5
     (call $db_store_i64
      (i64.load
       (i32.add
        (i32.add
         (get_local $16)
         (i32.const 112)
        )
        (i32.const 8)
       )
      )
      (i64.const 5377987680120340480)
      (get_local $11)
      (tee_local $12
       (i64.load offset=8
        (get_local $6)
       )
      )
      (i32.add
       (get_local $16)
       (i32.const 16)
      )
      (i32.const 48)
     )
    )
   )
   (block $label$15
    (br_if $label$15
     (i64.lt_u
      (get_local $12)
      (i64.load
       (tee_local $10
        (i32.add
         (get_local $16)
         (i32.const 128)
        )
       )
      )
     )
    )
    (i64.store
     (get_local $10)
     (select
      (i64.const -2)
      (i64.add
       (get_local $12)
       (i64.const 1)
      )
      (i64.gt_u
       (get_local $12)
       (i64.const -3)
      )
     )
    )
   )
   (i32.store offset=96
    (get_local $16)
    (get_local $6)
   )
   (i64.store offset=16
    (get_local $16)
    (tee_local $12
     (i64.load
      (i32.add
       (get_local $6)
       (i32.const 8)
      )
     )
    )
   )
   (i32.store offset=80
    (get_local $16)
    (get_local $5)
   )
   (block $label$16
    (block $label$17
     (br_if $label$17
      (i32.ge_u
       (tee_local $10
        (i32.load
         (i32.add
          (i32.add
           (get_local $16)
           (i32.const 112)
          )
          (i32.const 28)
         )
        )
       )
       (i32.load
        (i32.add
         (get_local $16)
         (i32.const 144)
        )
       )
      )
     )
     (i64.store offset=8
      (get_local $10)
      (get_local $12)
     )
     (i32.store offset=16
      (get_local $10)
      (get_local $5)
     )
     (i32.store offset=96
      (get_local $16)
      (i32.const 0)
     )
     (i32.store
      (get_local $10)
      (get_local $6)
     )
     (i32.store
      (i32.add
       (get_local $16)
       (i32.const 140)
      )
      (i32.add
       (get_local $10)
       (i32.const 24)
      )
     )
     (br $label$16)
    )
    (call $_ZNSt3__16vectorIN5eosio11multi_indexILy5377987680120340480EN11eosiosystem19delegated_bandwidthEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_
     (i32.add
      (get_local $16)
      (i32.const 136)
     )
     (i32.add
      (get_local $16)
      (i32.const 96)
     )
     (i32.add
      (get_local $16)
      (i32.const 16)
     )
     (i32.add
      (get_local $16)
      (i32.const 80)
     )
    )
   )
   (set_local $10
    (i32.load offset=96
     (get_local $16)
    )
   )
   (i32.store offset=96
    (get_local $16)
    (i32.const 0)
   )
   (br_if $label$13
    (i32.eqz
     (get_local $10)
    )
   )
   (call $_ZdlPv
    (get_local $10)
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $12
   (i64.const 5459781)
  )
  (set_local $10
   (i32.const 0)
  )
  (block $label$18
   (block $label$19
    (loop $label$20
     (br_if $label$19
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $12)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$21
      (br_if $label$21
       (i64.ne
        (i64.and
         (tee_local $12
          (i64.shr_u
           (get_local $12)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$22
       (br_if $label$19
        (i64.ne
         (i64.and
          (tee_local $12
           (i64.shr_u
            (get_local $12)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$22
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $5
      (i32.const 1)
     )
     (br_if $label$20
      (i32.lt_s
       (tee_local $10
        (i32.add
         (get_local $10)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$18)
    )
   )
   (set_local $5
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $5)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.const 1397703940)
    (i64.load
     (i32.add
      (get_local $6)
      (i32.const 24)
     )
    )
   )
   (i32.const 1584)
  )
  (call $eosio_assert
   (i32.xor
    (i32.wrap/i64
     (i64.shr_u
      (i64.load offset=16
       (get_local $6)
      )
      (i64.const 63)
     )
    )
    (i32.const 1)
   )
   (i32.const 1792)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $12
   (i64.const 5459781)
  )
  (set_local $10
   (i32.const 0)
  )
  (block $label$23
   (block $label$24
    (loop $label$25
     (br_if $label$24
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $12)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$26
      (br_if $label$26
       (i64.ne
        (i64.and
         (tee_local $12
          (i64.shr_u
           (get_local $12)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$27
       (br_if $label$24
        (i64.ne
         (i64.and
          (tee_local $12
           (i64.shr_u
            (get_local $12)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$27
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $5
      (i32.const 1)
     )
     (br_if $label$25
      (i32.lt_s
       (tee_local $10
        (i32.add
         (get_local $10)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$23)
    )
   )
   (set_local $5
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $5)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.const 1397703940)
    (i64.load
     (i32.add
      (get_local $6)
      (i32.const 40)
     )
    )
   )
   (i32.const 1584)
  )
  (call $eosio_assert
   (i32.xor
    (i32.wrap/i64
     (i64.shr_u
      (i64.load offset=32
       (get_local $6)
      )
      (i64.const 63)
     )
    )
    (i32.const 1)
   )
   (i32.const 1840)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $12
   (i64.const 5459781)
  )
  (set_local $10
   (i32.const 0)
  )
  (block $label$28
   (block $label$29
    (loop $label$30
     (br_if $label$29
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $12)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$31
      (br_if $label$31
       (i64.ne
        (i64.and
         (tee_local $12
          (i64.shr_u
           (get_local $12)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$32
       (br_if $label$29
        (i64.ne
         (i64.and
          (tee_local $12
           (i64.shr_u
            (get_local $12)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$32
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $5
      (i32.const 1)
     )
     (br_if $label$30
      (i32.lt_s
       (tee_local $10
        (i32.add
         (get_local $10)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$28)
    )
   )
   (set_local $5
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $5)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (i32.add
      (get_local $6)
      (i32.const 24)
     )
    )
    (i64.const 1397703940)
   )
   (i32.const 1584)
  )
  (block $label$33
   (br_if $label$33
    (i32.eqz
     (i64.eqz
      (i64.load
       (i32.add
        (get_local $6)
        (i32.const 16)
       )
      )
     )
    )
   )
   (call $eosio_assert
    (i32.const 1)
    (i32.const 992)
   )
   (set_local $12
    (i64.const 5459781)
   )
   (set_local $10
    (i32.const 0)
   )
   (block $label$34
    (block $label$35
     (loop $label$36
      (br_if $label$35
       (i32.gt_u
        (i32.add
         (i32.shl
          (i32.wrap/i64
           (get_local $12)
          )
          (i32.const 24)
         )
         (i32.const -1073741825)
        )
        (i32.const 452984830)
       )
      )
      (block $label$37
       (br_if $label$37
        (i64.ne
         (i64.and
          (tee_local $12
           (i64.shr_u
            (get_local $12)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (loop $label$38
        (br_if $label$35
         (i64.ne
          (i64.and
           (tee_local $12
            (i64.shr_u
             (get_local $12)
             (i64.const 8)
            )
           )
           (i64.const 255)
          )
          (i64.const 0)
         )
        )
        (br_if $label$38
         (i32.lt_s
          (tee_local $10
           (i32.add
            (get_local $10)
            (i32.const 1)
           )
          )
          (i32.const 7)
         )
        )
       )
      )
      (set_local $5
       (i32.const 1)
      )
      (br_if $label$36
       (i32.lt_s
        (tee_local $10
         (i32.add
          (get_local $10)
          (i32.const 1)
         )
        )
        (i32.const 7)
       )
      )
      (br $label$34)
     )
    )
    (set_local $5
     (i32.const 0)
    )
   )
   (call $eosio_assert
    (get_local $5)
    (i32.const 704)
   )
   (call $eosio_assert
    (i64.eq
     (i64.load
      (i32.add
       (get_local $6)
       (i32.const 40)
      )
     )
     (i64.const 1397703940)
    )
    (i32.const 1584)
   )
   (br_if $label$33
    (i64.ne
     (i64.load
      (i32.add
       (get_local $6)
       (i32.const 32)
      )
     )
     (i64.const 0)
    )
   )
   (call $eosio_assert
    (tee_local $10
     (i32.ne
      (get_local $6)
      (i32.const 0)
     )
    )
    (i32.const 1888)
   )
   (call $eosio_assert
    (get_local $10)
    (i32.const 384)
   )
   (block $label$39
    (br_if $label$39
     (i32.lt_s
      (tee_local $10
       (call $db_next_i64
        (i32.load offset=52
         (get_local $6)
        )
        (i32.add
         (get_local $16)
         (i32.const 16)
        )
       )
      )
      (i32.const 0)
     )
    )
    (drop
     (call $_ZNK5eosio11multi_indexILy5377987680120340480EN11eosiosystem19delegated_bandwidthEJEE31load_object_by_primary_iteratorEl
      (i32.add
       (get_local $16)
       (i32.const 112)
      )
      (get_local $10)
     )
    )
   )
   (call $_ZN5eosio11multi_indexILy5377987680120340480EN11eosiosystem19delegated_bandwidthEJEE5eraseERKS2_
    (i32.add
     (get_local $16)
     (i32.const 112)
    )
    (get_local $6)
   )
  )
  (block $label$40
   (br_if $label$40
    (i32.eqz
     (tee_local $5
      (i32.load offset=136
       (get_local $16)
      )
     )
    )
   )
   (block $label$41
    (block $label$42
     (br_if $label$42
      (i32.eq
       (tee_local $10
        (i32.load
         (tee_local $9
          (i32.add
           (get_local $16)
           (i32.const 140)
          )
         )
        )
       )
       (get_local $5)
      )
     )
     (loop $label$43
      (set_local $6
       (i32.load
        (tee_local $10
         (i32.add
          (get_local $10)
          (i32.const -24)
         )
        )
       )
      )
      (i32.store
       (get_local $10)
       (i32.const 0)
      )
      (block $label$44
       (br_if $label$44
        (i32.eqz
         (get_local $6)
        )
       )
       (call $_ZdlPv
        (get_local $6)
       )
      )
      (br_if $label$43
       (i32.ne
        (get_local $5)
        (get_local $10)
       )
      )
     )
     (set_local $10
      (i32.load
       (i32.add
        (get_local $16)
        (i32.const 136)
       )
      )
     )
     (br $label$41)
    )
    (set_local $10
     (get_local $5)
    )
   )
   (i32.store
    (get_local $9)
    (get_local $5)
   )
   (call $_ZdlPv
    (get_local $10)
   )
  )
  (i32.store
   (i32.add
    (i32.add
     (get_local $16)
     (i32.const 112)
    )
    (i32.const 32)
   )
   (i32.const 0)
  )
  (i64.store offset=128
   (get_local $16)
   (i64.const -1)
  )
  (i64.store offset=136
   (get_local $16)
   (i64.const 0)
  )
  (i64.store offset=112
   (get_local $16)
   (tee_local $12
    (i64.load
     (get_local $0)
    )
   )
  )
  (i64.store offset=120
   (get_local $16)
   (get_local $2)
  )
  (block $label$45
   (block $label$46
    (br_if $label$46
     (i32.le_s
      (tee_local $10
       (call $db_find_i64
        (get_local $12)
        (get_local $2)
        (i64.const -3020372000712425472)
        (get_local $2)
       )
      )
      (i32.const -1)
     )
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=48
       (tee_local $6
        (call $_ZNK5eosio11multi_indexILy15426372072997126144EN11eosiosystem14user_resourcesEJEE31load_object_by_primary_iteratorEl
         (i32.add
          (get_local $16)
          (i32.const 112)
         )
         (get_local $10)
        )
       )
      )
      (i32.add
       (get_local $16)
       (i32.const 112)
      )
     )
     (i32.const 32)
    )
    (set_local $11
     (i64.load offset=152
      (get_local $16)
     )
    )
    (call $eosio_assert
     (i32.const 1)
     (i32.const 96)
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=48
       (get_local $6)
      )
      (i32.add
       (get_local $16)
       (i32.const 112)
      )
     )
     (i32.const 144)
    )
    (call $eosio_assert
     (i64.eq
      (i64.load offset=112
       (get_local $16)
      )
      (call $current_receiver)
     )
     (i32.const 192)
    )
    (set_local $12
     (i64.load
      (get_local $6)
     )
    )
    (call $eosio_assert
     (i64.eq
      (get_local $14)
      (i64.load
       (i32.add
        (get_local $6)
        (i32.const 16)
       )
      )
     )
     (i32.const 1680)
    )
    (i64.store offset=8
     (get_local $6)
     (tee_local $14
      (i64.add
       (i64.load offset=8
        (get_local $6)
       )
       (i64.load
        (get_local $3)
       )
      )
     )
    )
    (call $eosio_assert
     (i64.gt_s
      (get_local $14)
      (i64.const -4611686018427387904)
     )
     (i32.const 1728)
    )
    (call $eosio_assert
     (i64.lt_s
      (i64.load offset=8
       (get_local $6)
      )
      (i64.const 4611686018427387904)
     )
     (i32.const 1760)
    )
    (call $eosio_assert
     (i64.eq
      (i64.load offset=8
       (get_local $4)
      )
      (i64.load
       (i32.add
        (get_local $6)
        (i32.const 32)
       )
      )
     )
     (i32.const 1680)
    )
    (i64.store offset=24
     (get_local $6)
     (tee_local $14
      (i64.add
       (i64.load offset=24
        (get_local $6)
       )
       (i64.load
        (get_local $4)
       )
      )
     )
    )
    (call $eosio_assert
     (i64.gt_s
      (get_local $14)
      (i64.const -4611686018427387904)
     )
     (i32.const 1728)
    )
    (call $eosio_assert
     (i64.lt_s
      (i64.load offset=24
       (get_local $6)
      )
      (i64.const 4611686018427387904)
     )
     (i32.const 1760)
    )
    (call $eosio_assert
     (i64.eq
      (get_local $12)
      (i64.load
       (get_local $6)
      )
     )
     (i32.const 256)
    )
    (i32.store offset=104
     (get_local $16)
     (i32.add
      (i32.add
       (get_local $16)
       (i32.const 16)
      )
      (i32.const 48)
     )
    )
    (i32.store offset=100
     (get_local $16)
     (i32.add
      (get_local $16)
      (i32.const 16)
     )
    )
    (i32.store offset=96
     (get_local $16)
     (i32.add
      (get_local $16)
      (i32.const 16)
     )
    )
    (drop
     (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_14user_resourcesE
      (i32.add
       (get_local $16)
       (i32.const 96)
      )
      (get_local $6)
     )
    )
    (call $db_update_i64
     (i32.load offset=52
      (get_local $6)
     )
     (select
      (get_local $11)
      (i64.const 0)
      (i64.eq
       (get_local $11)
       (get_local $2)
      )
     )
     (i32.add
      (get_local $16)
      (i32.const 16)
     )
     (i32.const 48)
    )
    (br_if $label$45
     (i64.lt_u
      (get_local $12)
      (i64.load
       (tee_local $10
        (i32.add
         (i32.add
          (get_local $16)
          (i32.const 112)
         )
         (i32.const 16)
        )
       )
      )
     )
    )
    (i64.store
     (get_local $10)
     (select
      (i64.const -2)
      (i64.add
       (get_local $12)
       (i64.const 1)
      )
      (i64.gt_u
       (get_local $12)
       (i64.const -3)
      )
     )
    )
    (br $label$45)
   )
   (set_local $14
    (i64.load offset=152
     (get_local $16)
    )
   )
   (call $eosio_assert
    (i64.eq
     (i64.load offset=112
      (get_local $16)
     )
     (call $current_receiver)
    )
    (i32.const 1184)
   )
   (set_local $10
    (call $_ZN11eosiosystem14user_resourcesC2Ev
     (tee_local $6
      (call $_Znwj
       (i32.const 64)
      )
     )
    )
   )
   (i32.store offset=48
    (get_local $6)
    (i32.add
     (get_local $16)
     (i32.const 112)
    )
   )
   (i64.store
    (get_local $6)
    (get_local $2)
   )
   (i32.store
    (i32.add
     (get_local $6)
     (i32.const 20)
    )
    (i32.load
     (i32.add
      (get_local $3)
      (i32.const 12)
     )
    )
   )
   (i32.store
    (i32.add
     (get_local $6)
     (i32.const 16)
    )
    (i32.load
     (i32.add
      (get_local $3)
      (i32.const 8)
     )
    )
   )
   (i32.store
    (i32.add
     (get_local $6)
     (i32.const 12)
    )
    (i32.load
     (i32.add
      (get_local $3)
      (i32.const 4)
     )
    )
   )
   (i32.store offset=8
    (get_local $6)
    (i32.load
     (get_local $3)
    )
   )
   (i64.store
    (i32.add
     (get_local $6)
     (i32.const 32)
    )
    (i64.load
     (i32.add
      (get_local $4)
      (i32.const 8)
     )
    )
   )
   (i64.store offset=24
    (get_local $6)
    (i64.load
     (get_local $4)
    )
   )
   (i32.store offset=104
    (get_local $16)
    (i32.add
     (i32.add
      (get_local $16)
      (i32.const 16)
     )
     (i32.const 48)
    )
   )
   (i32.store offset=100
    (get_local $16)
    (i32.add
     (get_local $16)
     (i32.const 16)
    )
   )
   (i32.store offset=96
    (get_local $16)
    (i32.add
     (get_local $16)
     (i32.const 16)
    )
   )
   (drop
    (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_14user_resourcesE
     (i32.add
      (get_local $16)
      (i32.const 96)
     )
     (get_local $10)
    )
   )
   (i32.store offset=52
    (get_local $6)
    (tee_local $5
     (call $db_store_i64
      (i64.load
       (i32.add
        (i32.add
         (get_local $16)
         (i32.const 112)
        )
        (i32.const 8)
       )
      )
      (i64.const -3020372000712425472)
      (get_local $14)
      (tee_local $12
       (i64.load
        (get_local $6)
       )
      )
      (i32.add
       (get_local $16)
       (i32.const 16)
      )
      (i32.const 48)
     )
    )
   )
   (block $label$47
    (br_if $label$47
     (i64.lt_u
      (get_local $12)
      (i64.load
       (tee_local $10
        (i32.add
         (i32.add
          (get_local $16)
          (i32.const 112)
         )
         (i32.const 16)
        )
       )
      )
     )
    )
    (i64.store
     (get_local $10)
     (select
      (i64.const -2)
      (i64.add
       (get_local $12)
       (i64.const 1)
      )
      (i64.gt_u
       (get_local $12)
       (i64.const -3)
      )
     )
    )
   )
   (i32.store offset=96
    (get_local $16)
    (get_local $6)
   )
   (i64.store offset=16
    (get_local $16)
    (tee_local $12
     (i64.load
      (get_local $6)
     )
    )
   )
   (i32.store offset=80
    (get_local $16)
    (get_local $5)
   )
   (block $label$48
    (block $label$49
     (br_if $label$49
      (i32.ge_u
       (tee_local $10
        (i32.load
         (tee_local $9
          (i32.add
           (get_local $16)
           (i32.const 140)
          )
         )
        )
       )
       (i32.load
        (i32.add
         (get_local $16)
         (i32.const 144)
        )
       )
      )
     )
     (i64.store offset=8
      (get_local $10)
      (get_local $12)
     )
     (i32.store offset=16
      (get_local $10)
      (get_local $5)
     )
     (i32.store offset=96
      (get_local $16)
      (i32.const 0)
     )
     (i32.store
      (get_local $10)
      (get_local $6)
     )
     (i32.store
      (get_local $9)
      (i32.add
       (get_local $10)
       (i32.const 24)
      )
     )
     (br $label$48)
    )
    (call $_ZNSt3__16vectorIN5eosio11multi_indexILy15426372072997126144EN11eosiosystem14user_resourcesEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_
     (i32.add
      (get_local $16)
      (i32.const 136)
     )
     (i32.add
      (get_local $16)
      (i32.const 96)
     )
     (i32.add
      (get_local $16)
      (i32.const 16)
     )
     (i32.add
      (get_local $16)
      (i32.const 80)
     )
    )
   )
   (set_local $10
    (i32.load offset=96
     (get_local $16)
    )
   )
   (i32.store offset=96
    (get_local $16)
    (i32.const 0)
   )
   (br_if $label$45
    (i32.eqz
     (get_local $10)
    )
   )
   (call $_ZdlPv
    (get_local $10)
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $12
   (i64.const 5459781)
  )
  (set_local $10
   (i32.const 0)
  )
  (block $label$50
   (block $label$51
    (loop $label$52
     (br_if $label$51
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $12)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$53
      (br_if $label$53
       (i64.ne
        (i64.and
         (tee_local $12
          (i64.shr_u
           (get_local $12)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$54
       (br_if $label$51
        (i64.ne
         (i64.and
          (tee_local $12
           (i64.shr_u
            (get_local $12)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$54
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $5
      (i32.const 1)
     )
     (br_if $label$52
      (i32.lt_s
       (tee_local $10
        (i32.add
         (get_local $10)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$50)
    )
   )
   (set_local $5
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $5)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.const 1397703940)
    (i64.load
     (i32.add
      (get_local $6)
      (i32.const 16)
     )
    )
   )
   (i32.const 1584)
  )
  (call $eosio_assert
   (i32.xor
    (i32.wrap/i64
     (i64.shr_u
      (i64.load offset=8
       (get_local $6)
      )
      (i64.const 63)
     )
    )
    (i32.const 1)
   )
   (i32.const 1936)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $12
   (i64.const 5459781)
  )
  (set_local $10
   (i32.const 0)
  )
  (block $label$55
   (block $label$56
    (loop $label$57
     (br_if $label$56
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $12)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$58
      (br_if $label$58
       (i64.ne
        (i64.and
         (tee_local $12
          (i64.shr_u
           (get_local $12)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$59
       (br_if $label$56
        (i64.ne
         (i64.and
          (tee_local $12
           (i64.shr_u
            (get_local $12)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$59
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $5
      (i32.const 1)
     )
     (br_if $label$57
      (i32.lt_s
       (tee_local $10
        (i32.add
         (get_local $10)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$55)
    )
   )
   (set_local $5
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $5)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.const 1397703940)
    (i64.load
     (i32.add
      (get_local $6)
      (i32.const 32)
     )
    )
   )
   (i32.const 1584)
  )
  (call $eosio_assert
   (i32.xor
    (i32.wrap/i64
     (i64.shr_u
      (i64.load offset=24
       (get_local $6)
      )
      (i64.const 63)
     )
    )
    (i32.const 1)
   )
   (i32.const 1984)
  )
  (call $set_resource_limits
   (get_local $2)
   (i64.load offset=40
    (get_local $6)
   )
   (i64.load
    (i32.add
     (get_local $6)
     (i32.const 8)
    )
   )
   (i64.load offset=24
    (get_local $6)
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $12
   (i64.const 5459781)
  )
  (set_local $10
   (i32.const 0)
  )
  (block $label$60
   (block $label$61
    (loop $label$62
     (br_if $label$61
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $12)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$63
      (br_if $label$63
       (i64.ne
        (i64.and
         (tee_local $12
          (i64.shr_u
           (get_local $12)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$64
       (br_if $label$61
        (i64.ne
         (i64.and
          (tee_local $12
           (i64.shr_u
            (get_local $12)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$64
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $5
      (i32.const 1)
     )
     (br_if $label$62
      (i32.lt_s
       (tee_local $10
        (i32.add
         (get_local $10)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$60)
    )
   )
   (set_local $5
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $5)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (i32.add
      (get_local $6)
      (i32.const 16)
     )
    )
    (i64.const 1397703940)
   )
   (i32.const 1584)
  )
  (block $label$65
   (br_if $label$65
    (i32.eqz
     (i64.eqz
      (i64.load
       (i32.add
        (get_local $6)
        (i32.const 8)
       )
      )
     )
    )
   )
   (call $eosio_assert
    (i32.const 1)
    (i32.const 992)
   )
   (set_local $12
    (i64.const 5459781)
   )
   (set_local $10
    (i32.const 0)
   )
   (block $label$66
    (block $label$67
     (loop $label$68
      (br_if $label$67
       (i32.gt_u
        (i32.add
         (i32.shl
          (i32.wrap/i64
           (get_local $12)
          )
          (i32.const 24)
         )
         (i32.const -1073741825)
        )
        (i32.const 452984830)
       )
      )
      (block $label$69
       (br_if $label$69
        (i64.ne
         (i64.and
          (tee_local $12
           (i64.shr_u
            (get_local $12)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (loop $label$70
        (br_if $label$67
         (i64.ne
          (i64.and
           (tee_local $12
            (i64.shr_u
             (get_local $12)
             (i64.const 8)
            )
           )
           (i64.const 255)
          )
          (i64.const 0)
         )
        )
        (br_if $label$70
         (i32.lt_s
          (tee_local $10
           (i32.add
            (get_local $10)
            (i32.const 1)
           )
          )
          (i32.const 7)
         )
        )
       )
      )
      (set_local $5
       (i32.const 1)
      )
      (br_if $label$68
       (i32.lt_s
        (tee_local $10
         (i32.add
          (get_local $10)
          (i32.const 1)
         )
        )
        (i32.const 7)
       )
      )
      (br $label$66)
     )
    )
    (set_local $5
     (i32.const 0)
    )
   )
   (call $eosio_assert
    (get_local $5)
    (i32.const 704)
   )
   (call $eosio_assert
    (i64.eq
     (i64.load
      (i32.add
       (get_local $6)
       (i32.const 32)
      )
     )
     (i64.const 1397703940)
    )
    (i32.const 1584)
   )
   (br_if $label$65
    (i64.ne
     (i64.load
      (i32.add
       (get_local $6)
       (i32.const 24)
      )
     )
     (i64.const 0)
    )
   )
   (br_if $label$65
    (i64.ne
     (i64.load
      (i32.add
       (get_local $6)
       (i32.const 40)
      )
     )
     (i64.const 0)
    )
   )
   (call $eosio_assert
    (tee_local $10
     (i32.ne
      (get_local $6)
      (i32.const 0)
     )
    )
    (i32.const 1888)
   )
   (call $eosio_assert
    (get_local $10)
    (i32.const 384)
   )
   (block $label$71
    (br_if $label$71
     (i32.lt_s
      (tee_local $10
       (call $db_next_i64
        (i32.load offset=52
         (get_local $6)
        )
        (i32.add
         (get_local $16)
         (i32.const 16)
        )
       )
      )
      (i32.const 0)
     )
    )
    (drop
     (call $_ZNK5eosio11multi_indexILy15426372072997126144EN11eosiosystem14user_resourcesEJEE31load_object_by_primary_iteratorEl
      (i32.add
       (get_local $16)
       (i32.const 112)
      )
      (get_local $10)
     )
    )
   )
   (call $_ZN5eosio11multi_indexILy15426372072997126144EN11eosiosystem14user_resourcesEJEE5eraseERKS2_
    (i32.add
     (get_local $16)
     (i32.const 112)
    )
    (get_local $6)
   )
  )
  (block $label$72
   (br_if $label$72
    (i32.eqz
     (tee_local $5
      (i32.load offset=136
       (get_local $16)
      )
     )
    )
   )
   (block $label$73
    (block $label$74
     (br_if $label$74
      (i32.eq
       (tee_local $10
        (i32.load
         (tee_local $9
          (i32.add
           (get_local $16)
           (i32.const 140)
          )
         )
        )
       )
       (get_local $5)
      )
     )
     (loop $label$75
      (set_local $6
       (i32.load
        (tee_local $10
         (i32.add
          (get_local $10)
          (i32.const -24)
         )
        )
       )
      )
      (i32.store
       (get_local $10)
       (i32.const 0)
      )
      (block $label$76
       (br_if $label$76
        (i32.eqz
         (get_local $6)
        )
       )
       (call $_ZdlPv
        (get_local $6)
       )
      )
      (br_if $label$75
       (i32.ne
        (get_local $5)
        (get_local $10)
       )
      )
     )
     (set_local $10
      (i32.load
       (i32.add
        (get_local $16)
        (i32.const 136)
       )
      )
     )
     (br $label$73)
    )
    (set_local $10
     (get_local $5)
    )
   )
   (i32.store
    (get_local $9)
    (get_local $5)
   )
   (call $_ZdlPv
    (get_local $10)
   )
  )
  (set_local $12
   (i64.const 0)
  )
  (set_local $11
   (i64.const 59)
  )
  (set_local $10
   (i32.const 2032)
  )
  (set_local $13
   (i64.const 0)
  )
  (loop $label$77
   (block $label$78
    (block $label$79
     (block $label$80
      (block $label$81
       (block $label$82
        (br_if $label$82
         (i64.gt_u
          (get_local $12)
          (i64.const 10)
         )
        )
        (br_if $label$81
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $6
             (i32.load8_s
              (get_local $10)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $6
         (i32.add
          (get_local $6)
          (i32.const 165)
         )
        )
        (br $label$80)
       )
       (set_local $14
        (i64.const 0)
       )
       (br_if $label$79
        (i64.eq
         (get_local $12)
         (i64.const 11)
        )
       )
       (br $label$78)
      )
      (set_local $6
       (select
        (i32.add
         (get_local $6)
         (i32.const 208)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $6)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $14
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $6)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $14
     (i64.shl
      (i64.and
       (get_local $14)
       (i64.const 31)
      )
      (i64.and
       (get_local $11)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $10
    (i32.add
     (get_local $10)
     (i32.const 1)
    )
   )
   (set_local $11
    (i64.add
     (get_local $11)
     (i64.const -5)
    )
   )
   (set_local $13
    (i64.or
     (get_local $14)
     (get_local $13)
    )
   )
   (br_if $label$77
    (i64.ne
     (tee_local $12
      (i64.add
       (get_local $12)
       (i64.const 1)
      )
     )
     (i64.const 13)
    )
   )
  )
  (block $label$83
   (block $label$84
    (br_if $label$84
     (i64.eq
      (get_local $13)
      (get_local $1)
     )
    )
    (i64.store offset=128
     (get_local $16)
     (i64.const -1)
    )
    (set_local $6
     (i32.const 0)
    )
    (i32.store offset=136
     (get_local $16)
     (i32.const 0)
    )
    (set_local $12
     (i64.load offset=152
      (get_local $16)
     )
    )
    (i64.store offset=112
     (get_local $16)
     (tee_local $14
      (i64.load
       (get_local $0)
      )
     )
    )
    (i64.store offset=120
     (get_local $16)
     (get_local $12)
    )
    (i32.store
     (i32.add
      (get_local $16)
      (i32.const 140)
     )
     (i32.const 0)
    )
    (i32.store
     (i32.add
      (get_local $16)
      (i32.const 144)
     )
     (i32.const 0)
    )
    (block $label$85
     (br_if $label$85
      (i32.lt_s
       (tee_local $10
        (call $db_find_i64
         (get_local $14)
         (get_local $12)
         (i64.const -5001342326447013888)
         (get_local $12)
        )
       )
       (i32.const 0)
      )
     )
     (call $eosio_assert
      (i32.eq
       (i32.load offset=48
        (tee_local $6
         (call $_ZNK5eosio11multi_indexILy13445401747262537728EN11eosiosystem14refund_requestEJEE31load_object_by_primary_iteratorEl
          (i32.add
           (get_local $16)
           (i32.const 112)
          )
          (get_local $10)
         )
        )
       )
       (i32.add
        (get_local $16)
        (i32.const 112)
       )
      )
      (i32.const 32)
     )
    )
    (i64.store
     (i32.add
      (i32.add
       (get_local $16)
       (i32.const 96)
      )
      (i32.const 8)
     )
     (i64.load
      (i32.add
       (get_local $3)
       (i32.const 8)
      )
     )
    )
    (i64.store offset=96
     (get_local $16)
     (i64.load
      (get_local $3)
     )
    )
    (i64.store
     (i32.add
      (i32.add
       (get_local $16)
       (i32.const 80)
      )
      (i32.const 8)
     )
     (i64.load
      (i32.add
       (get_local $4)
       (i32.const 8)
      )
     )
    )
    (i64.store offset=80
     (get_local $16)
     (i64.load
      (get_local $4)
     )
    )
    (block $label$86
     (block $label$87
      (block $label$88
       (block $label$89
        (block $label$90
         (block $label$91
          (block $label$92
           (block $label$93
            (block $label$94
             (br_if $label$94
              (i32.eqz
               (get_local $6)
              )
             )
             (i32.store offset=20
              (get_local $16)
              (i32.add
               (get_local $16)
               (i32.const 80)
              )
             )
             (i32.store offset=16
              (get_local $16)
              (i32.add
               (get_local $16)
               (i32.const 96)
              )
             )
             (call $eosio_assert
              (i32.const 1)
              (i32.const 96)
             )
             (call $_ZN5eosio11multi_indexILy13445401747262537728EN11eosiosystem14refund_requestEJEE6modifyIZNS1_15system_contract8changebwEyyNS_5assetES6_bE4$_12EEvRKS2_yOT_
              (i32.add
               (get_local $16)
               (i32.const 112)
              )
              (get_local $6)
              (i32.add
               (get_local $16)
               (i32.const 16)
              )
             )
             (call $eosio_assert
              (i32.const 1)
              (i32.const 992)
             )
             (set_local $12
              (i64.const 5459781)
             )
             (set_local $10
              (i32.const 0)
             )
             (block $label$95
              (block $label$96
               (loop $label$97
                (br_if $label$96
                 (i32.gt_u
                  (i32.add
                   (i32.shl
                    (i32.wrap/i64
                     (get_local $12)
                    )
                    (i32.const 24)
                   )
                   (i32.const -1073741825)
                  )
                  (i32.const 452984830)
                 )
                )
                (block $label$98
                 (br_if $label$98
                  (i64.ne
                   (i64.and
                    (tee_local $12
                     (i64.shr_u
                      (get_local $12)
                      (i64.const 8)
                     )
                    )
                    (i64.const 255)
                   )
                   (i64.const 0)
                  )
                 )
                 (loop $label$99
                  (br_if $label$96
                   (i64.ne
                    (i64.and
                     (tee_local $12
                      (i64.shr_u
                       (get_local $12)
                       (i64.const 8)
                      )
                     )
                     (i64.const 255)
                    )
                    (i64.const 0)
                   )
                  )
                  (br_if $label$99
                   (i32.lt_s
                    (tee_local $10
                     (i32.add
                      (get_local $10)
                      (i32.const 1)
                     )
                    )
                    (i32.const 7)
                   )
                  )
                 )
                )
                (set_local $5
                 (i32.const 1)
                )
                (br_if $label$97
                 (i32.lt_s
                  (tee_local $10
                   (i32.add
                    (get_local $10)
                    (i32.const 1)
                   )
                  )
                  (i32.const 7)
                 )
                )
                (br $label$95)
               )
              )
              (set_local $5
               (i32.const 0)
              )
             )
             (call $eosio_assert
              (get_local $5)
              (i32.const 704)
             )
             (call $eosio_assert
              (i64.eq
               (i64.const 1397703940)
               (i64.load
                (i32.add
                 (get_local $6)
                 (i32.const 24)
                )
               )
              )
              (i32.const 1584)
             )
             (call $eosio_assert
              (i32.xor
               (i32.wrap/i64
                (i64.shr_u
                 (i64.load offset=16
                  (get_local $6)
                 )
                 (i64.const 63)
                )
               )
               (i32.const 1)
              )
              (i32.const 2048)
             )
             (call $eosio_assert
              (i32.const 1)
              (i32.const 992)
             )
             (set_local $12
              (i64.const 5459781)
             )
             (set_local $10
              (i32.const 0)
             )
             (block $label$100
              (block $label$101
               (loop $label$102
                (br_if $label$101
                 (i32.gt_u
                  (i32.add
                   (i32.shl
                    (i32.wrap/i64
                     (get_local $12)
                    )
                    (i32.const 24)
                   )
                   (i32.const -1073741825)
                  )
                  (i32.const 452984830)
                 )
                )
                (block $label$103
                 (br_if $label$103
                  (i64.ne
                   (i64.and
                    (tee_local $12
                     (i64.shr_u
                      (get_local $12)
                      (i64.const 8)
                     )
                    )
                    (i64.const 255)
                   )
                   (i64.const 0)
                  )
                 )
                 (loop $label$104
                  (br_if $label$101
                   (i64.ne
                    (i64.and
                     (tee_local $12
                      (i64.shr_u
                       (get_local $12)
                       (i64.const 8)
                      )
                     )
                     (i64.const 255)
                    )
                    (i64.const 0)
                   )
                  )
                  (br_if $label$104
                   (i32.lt_s
                    (tee_local $10
                     (i32.add
                      (get_local $10)
                      (i32.const 1)
                     )
                    )
                    (i32.const 7)
                   )
                  )
                 )
                )
                (set_local $5
                 (i32.const 1)
                )
                (br_if $label$102
                 (i32.lt_s
                  (tee_local $10
                   (i32.add
                    (get_local $10)
                    (i32.const 1)
                   )
                  )
                  (i32.const 7)
                 )
                )
                (br $label$100)
               )
              )
              (set_local $5
               (i32.const 0)
              )
             )
             (call $eosio_assert
              (get_local $5)
              (i32.const 704)
             )
             (call $eosio_assert
              (i64.eq
               (i64.const 1397703940)
               (i64.load
                (i32.add
                 (get_local $6)
                 (i32.const 40)
                )
               )
              )
              (i32.const 1584)
             )
             (call $eosio_assert
              (i32.xor
               (i32.wrap/i64
                (i64.shr_u
                 (i64.load offset=32
                  (get_local $6)
                 )
                 (i64.const 63)
                )
               )
               (i32.const 1)
              )
              (i32.const 2080)
             )
             (call $eosio_assert
              (i32.const 1)
              (i32.const 992)
             )
             (set_local $12
              (i64.const 5459781)
             )
             (set_local $10
              (i32.const 0)
             )
             (block $label$105
              (block $label$106
               (loop $label$107
                (br_if $label$106
                 (i32.gt_u
                  (i32.add
                   (i32.shl
                    (i32.wrap/i64
                     (get_local $12)
                    )
                    (i32.const 24)
                   )
                   (i32.const -1073741825)
                  )
                  (i32.const 452984830)
                 )
                )
                (block $label$108
                 (br_if $label$108
                  (i64.ne
                   (i64.and
                    (tee_local $12
                     (i64.shr_u
                      (get_local $12)
                      (i64.const 8)
                     )
                    )
                    (i64.const 255)
                   )
                   (i64.const 0)
                  )
                 )
                 (loop $label$109
                  (br_if $label$106
                   (i64.ne
                    (i64.and
                     (tee_local $12
                      (i64.shr_u
                       (get_local $12)
                       (i64.const 8)
                      )
                     )
                     (i64.const 255)
                    )
                    (i64.const 0)
                   )
                  )
                  (br_if $label$109
                   (i32.lt_s
                    (tee_local $10
                     (i32.add
                      (get_local $10)
                      (i32.const 1)
                     )
                    )
                    (i32.const 7)
                   )
                  )
                 )
                )
                (set_local $5
                 (i32.const 1)
                )
                (br_if $label$107
                 (i32.lt_s
                  (tee_local $10
                   (i32.add
                    (get_local $10)
                    (i32.const 1)
                   )
                  )
                  (i32.const 7)
                 )
                )
                (br $label$105)
               )
              )
              (set_local $5
               (i32.const 0)
              )
             )
             (call $eosio_assert
              (get_local $5)
              (i32.const 704)
             )
             (call $eosio_assert
              (i64.eq
               (i64.load
                (i32.add
                 (get_local $6)
                 (i32.const 24)
                )
               )
               (i64.const 1397703940)
              )
              (i32.const 1584)
             )
             (br_if $label$87
              (i32.eqz
               (i64.eqz
                (i64.load
                 (i32.add
                  (get_local $6)
                  (i32.const 16)
                 )
                )
               )
              )
             )
             (call $eosio_assert
              (i32.const 1)
              (i32.const 992)
             )
             (set_local $12
              (i64.const 5459781)
             )
             (set_local $10
              (i32.const 0)
             )
             (loop $label$110
              (br_if $label$93
               (i32.gt_u
                (i32.add
                 (i32.shl
                  (i32.wrap/i64
                   (get_local $12)
                  )
                  (i32.const 24)
                 )
                 (i32.const -1073741825)
                )
                (i32.const 452984830)
               )
              )
              (block $label$111
               (br_if $label$111
                (i64.ne
                 (i64.and
                  (tee_local $12
                   (i64.shr_u
                    (get_local $12)
                    (i64.const 8)
                   )
                  )
                  (i64.const 255)
                 )
                 (i64.const 0)
                )
               )
               (loop $label$112
                (br_if $label$93
                 (i64.ne
                  (i64.and
                   (tee_local $12
                    (i64.shr_u
                     (get_local $12)
                     (i64.const 8)
                    )
                   )
                   (i64.const 255)
                  )
                  (i64.const 0)
                 )
                )
                (br_if $label$112
                 (i32.lt_s
                  (tee_local $10
                   (i32.add
                    (get_local $10)
                    (i32.const 1)
                   )
                  )
                  (i32.const 7)
                 )
                )
               )
              )
              (set_local $5
               (i32.const 1)
              )
              (br_if $label$110
               (i32.lt_s
                (tee_local $10
                 (i32.add
                  (get_local $10)
                  (i32.const 1)
                 )
                )
                (i32.const 7)
               )
              )
              (br $label$92)
             )
            )
            (call $eosio_assert
             (i32.const 1)
             (i32.const 992)
            )
            (set_local $12
             (i64.const 5459781)
            )
            (set_local $10
             (i32.const 0)
            )
            (block $label$113
             (block $label$114
              (loop $label$115
               (br_if $label$114
                (i32.gt_u
                 (i32.add
                  (i32.shl
                   (i32.wrap/i64
                    (get_local $12)
                   )
                   (i32.const 24)
                  )
                  (i32.const -1073741825)
                 )
                 (i32.const 452984830)
                )
               )
               (block $label$116
                (br_if $label$116
                 (i64.ne
                  (i64.and
                   (tee_local $12
                    (i64.shr_u
                     (get_local $12)
                     (i64.const 8)
                    )
                   )
                   (i64.const 255)
                  )
                  (i64.const 0)
                 )
                )
                (loop $label$117
                 (br_if $label$114
                  (i64.ne
                   (i64.and
                    (tee_local $12
                     (i64.shr_u
                      (get_local $12)
                      (i64.const 8)
                     )
                    )
                    (i64.const 255)
                   )
                   (i64.const 0)
                  )
                 )
                 (br_if $label$117
                  (i32.lt_s
                   (tee_local $10
                    (i32.add
                     (get_local $10)
                     (i32.const 1)
                    )
                   )
                   (i32.const 7)
                  )
                 )
                )
               )
               (set_local $6
                (i32.const 1)
               )
               (br_if $label$115
                (i32.lt_s
                 (tee_local $10
                  (i32.add
                   (get_local $10)
                   (i32.const 1)
                  )
                 )
                 (i32.const 7)
                )
               )
               (br $label$113)
              )
             )
             (set_local $6
              (i32.const 0)
             )
            )
            (call $eosio_assert
             (get_local $6)
             (i32.const 704)
            )
            (call $eosio_assert
             (i64.eq
              (i64.load offset=104
               (get_local $16)
              )
              (i64.const 1397703940)
             )
             (i32.const 1584)
            )
            (br_if $label$88
             (i64.lt_s
              (i64.load offset=96
               (get_local $16)
              )
              (i64.const 0)
             )
            )
            (call $eosio_assert
             (i32.const 1)
             (i32.const 992)
            )
            (set_local $12
             (i64.const 5459781)
            )
            (set_local $10
             (i32.const 0)
            )
            (loop $label$118
             (br_if $label$91
              (i32.gt_u
               (i32.add
                (i32.shl
                 (i32.wrap/i64
                  (get_local $12)
                 )
                 (i32.const 24)
                )
                (i32.const -1073741825)
               )
               (i32.const 452984830)
              )
             )
             (block $label$119
              (br_if $label$119
               (i64.ne
                (i64.and
                 (tee_local $12
                  (i64.shr_u
                   (get_local $12)
                   (i64.const 8)
                  )
                 )
                 (i64.const 255)
                )
                (i64.const 0)
               )
              )
              (loop $label$120
               (br_if $label$91
                (i64.ne
                 (i64.and
                  (tee_local $12
                   (i64.shr_u
                    (get_local $12)
                    (i64.const 8)
                   )
                  )
                  (i64.const 255)
                 )
                 (i64.const 0)
                )
               )
               (br_if $label$120
                (i32.lt_s
                 (tee_local $10
                  (i32.add
                   (get_local $10)
                   (i32.const 1)
                  )
                 )
                 (i32.const 7)
                )
               )
              )
             )
             (set_local $6
              (i32.const 1)
             )
             (br_if $label$118
              (i32.lt_s
               (tee_local $10
                (i32.add
                 (get_local $10)
                 (i32.const 1)
                )
               )
               (i32.const 7)
              )
             )
             (br $label$90)
            )
           )
           (set_local $5
            (i32.const 0)
           )
          )
          (call $eosio_assert
           (get_local $5)
           (i32.const 704)
          )
          (call $eosio_assert
           (i64.eq
            (i64.load
             (i32.add
              (get_local $6)
              (i32.const 40)
             )
            )
            (i64.const 1397703940)
           )
           (i32.const 1584)
          )
          (br_if $label$87
           (i64.ne
            (i64.load
             (i32.add
              (get_local $6)
              (i32.const 32)
             )
            )
            (i64.const 0)
           )
          )
          (call $eosio_assert
           (i32.const 1)
           (i32.const 1888)
          )
          (call $eosio_assert
           (i32.const 1)
           (i32.const 384)
          )
          (block $label$121
           (br_if $label$121
            (i32.lt_s
             (tee_local $10
              (call $db_next_i64
               (i32.load offset=52
                (get_local $6)
               )
               (i32.add
                (get_local $16)
                (i32.const 16)
               )
              )
             )
             (i32.const 0)
            )
           )
           (drop
            (call $_ZNK5eosio11multi_indexILy13445401747262537728EN11eosiosystem14refund_requestEJEE31load_object_by_primary_iteratorEl
             (i32.add
              (get_local $16)
              (i32.const 112)
             )
             (get_local $10)
            )
           )
          )
          (call $_ZN5eosio11multi_indexILy13445401747262537728EN11eosiosystem14refund_requestEJEE5eraseERKS2_
           (i32.add
            (get_local $16)
            (i32.const 112)
           )
           (get_local $6)
          )
          (br $label$89)
         )
         (set_local $6
          (i32.const 0)
         )
        )
        (call $eosio_assert
         (get_local $6)
         (i32.const 704)
        )
        (call $eosio_assert
         (i64.eq
          (i64.load offset=88
           (get_local $16)
          )
          (i64.const 1397703940)
         )
         (i32.const 1584)
        )
        (br_if $label$88
         (i64.le_s
          (i64.load offset=80
           (get_local $16)
          )
          (i64.const -1)
         )
        )
       )
       (i64.store offset=24
        (get_local $16)
        (i64.const 0)
       )
       (i64.store offset=16
        (get_local $16)
        (i64.load offset=152
         (get_local $16)
        )
       )
       (drop
        (call $cancel_deferred
         (i32.add
          (get_local $16)
          (i32.const 16)
         )
        )
       )
       (br $label$86)
      )
      (set_local $12
       (i64.load offset=152
        (get_local $16)
       )
      )
      (i32.store offset=4
       (get_local $16)
       (i32.add
        (get_local $16)
        (i32.const 96)
       )
      )
      (i32.store
       (get_local $16)
       (i32.add
        (get_local $16)
        (i32.const 152)
       )
      )
      (i32.store offset=8
       (get_local $16)
       (i32.add
        (get_local $16)
        (i32.const 80)
       )
      )
      (i64.store offset=176
       (get_local $16)
       (get_local $12)
      )
      (call $eosio_assert
       (i64.eq
        (i64.load offset=112
         (get_local $16)
        )
        (call $current_receiver)
       )
       (i32.const 1184)
      )
      (i32.store offset=20
       (get_local $16)
       (get_local $16)
      )
      (i32.store offset=16
       (get_local $16)
       (i32.add
        (get_local $16)
        (i32.const 112)
       )
      )
      (i32.store offset=24
       (get_local $16)
       (i32.add
        (get_local $16)
        (i32.const 176)
       )
      )
      (drop
       (call $_ZN11eosiosystem14refund_requestC2Ev
        (tee_local $10
         (call $_Znwj
          (i32.const 64)
         )
        )
       )
      )
      (i32.store offset=48
       (get_local $10)
       (i32.add
        (get_local $16)
        (i32.const 112)
       )
      )
      (call $_ZZN5eosio11multi_indexILy13445401747262537728EN11eosiosystem14refund_requestEJEE7emplaceIZNS1_15system_contract8changebwEyyNS_5assetES6_bE4$_13EENS3_14const_iteratorEyOT_ENKUlRS9_E_clINS3_4itemEEEDaSB_
       (i32.add
        (get_local $16)
        (i32.const 16)
       )
       (get_local $10)
      )
      (i32.store offset=168
       (get_local $16)
       (get_local $10)
      )
      (i64.store offset=16
       (get_local $16)
       (tee_local $12
        (i64.load
         (get_local $10)
        )
       )
      )
      (i32.store offset=164
       (get_local $16)
       (tee_local $5
        (i32.load offset=52
         (get_local $10)
        )
       )
      )
      (block $label$122
       (block $label$123
        (br_if $label$123
         (i32.ge_u
          (tee_local $6
           (i32.load
            (tee_local $9
             (i32.add
              (get_local $16)
              (i32.const 140)
             )
            )
           )
          )
          (i32.load
           (i32.add
            (get_local $16)
            (i32.const 144)
           )
          )
         )
        )
        (i64.store offset=8
         (get_local $6)
         (get_local $12)
        )
        (i32.store offset=16
         (get_local $6)
         (get_local $5)
        )
        (i32.store offset=168
         (get_local $16)
         (i32.const 0)
        )
        (i32.store
         (get_local $6)
         (get_local $10)
        )
        (i32.store
         (get_local $9)
         (i32.add
          (get_local $6)
          (i32.const 24)
         )
        )
        (br $label$122)
       )
       (call $_ZNSt3__16vectorIN5eosio11multi_indexILy13445401747262537728EN11eosiosystem14refund_requestEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_
        (i32.add
         (get_local $16)
         (i32.const 136)
        )
        (i32.add
         (get_local $16)
         (i32.const 168)
        )
        (i32.add
         (get_local $16)
         (i32.const 16)
        )
        (i32.add
         (get_local $16)
         (i32.const 164)
        )
       )
      )
      (set_local $10
       (i32.load offset=168
        (get_local $16)
       )
      )
      (i32.store offset=168
       (get_local $16)
       (i32.const 0)
      )
      (br_if $label$87
       (i32.eqz
        (get_local $10)
       )
      )
      (call $_ZdlPv
       (get_local $10)
      )
     )
     (set_local $12
      (call $current_time)
     )
     (i32.store
      (i32.add
       (get_local $16)
       (i32.const 44)
      )
      (i32.const 0)
     )
     (i32.store
      (i32.add
       (get_local $16)
       (i32.const 48)
      )
      (i32.const 0)
     )
     (i32.store offset=28
      (get_local $16)
      (i32.const 0)
     )
     (i32.store8 offset=32
      (get_local $16)
      (i32.const 0)
     )
     (i32.store offset=36
      (get_local $16)
      (i32.const 0)
     )
     (i32.store offset=40
      (get_local $16)
      (i32.const 0)
     )
     (i32.store offset=16
      (get_local $16)
      (i32.add
       (i32.wrap/i64
        (i64.div_u
         (get_local $12)
         (i64.const 1000000)
        )
       )
       (i32.const 60)
      )
     )
     (i32.store offset=52
      (get_local $16)
      (i32.const 0)
     )
     (i32.store
      (i32.add
       (get_local $16)
       (i32.const 56)
      )
      (i32.const 0)
     )
     (i32.store
      (i32.add
       (get_local $16)
       (i32.const 60)
      )
      (i32.const 0)
     )
     (i32.store offset=64
      (get_local $16)
      (i32.const 0)
     )
     (i32.store
      (i32.add
       (get_local $16)
       (i32.const 68)
      )
      (i32.const 0)
     )
     (i32.store
      (i32.add
       (get_local $16)
       (i32.const 72)
      )
      (i32.const 0)
     )
     (set_local $5
      (i32.add
       (get_local $16)
       (i32.const 52)
      )
     )
     (set_local $12
      (i64.const 0)
     )
     (set_local $11
      (i64.const 59)
     )
     (set_local $10
      (i32.const 688)
     )
     (set_local $15
      (i64.load offset=152
       (get_local $16)
      )
     )
     (set_local $13
      (i64.const 0)
     )
     (loop $label$124
      (block $label$125
       (block $label$126
        (block $label$127
         (block $label$128
          (block $label$129
           (br_if $label$129
            (i64.gt_u
             (get_local $12)
             (i64.const 5)
            )
           )
           (br_if $label$128
            (i32.gt_u
             (i32.and
              (i32.add
               (tee_local $6
                (i32.load8_s
                 (get_local $10)
                )
               )
               (i32.const -97)
              )
              (i32.const 255)
             )
             (i32.const 25)
            )
           )
           (set_local $6
            (i32.add
             (get_local $6)
             (i32.const 165)
            )
           )
           (br $label$127)
          )
          (set_local $14
           (i64.const 0)
          )
          (br_if $label$126
           (i64.le_u
            (get_local $12)
            (i64.const 11)
           )
          )
          (br $label$125)
         )
         (set_local $6
          (select
           (i32.add
            (get_local $6)
            (i32.const 208)
           )
           (i32.const 0)
           (i32.lt_u
            (i32.and
             (i32.add
              (get_local $6)
              (i32.const -49)
             )
             (i32.const 255)
            )
            (i32.const 5)
           )
          )
         )
        )
        (set_local $14
         (i64.shr_s
          (i64.shl
           (i64.extend_u/i32
            (get_local $6)
           )
           (i64.const 56)
          )
          (i64.const 56)
         )
        )
       )
       (set_local $14
        (i64.shl
         (i64.and
          (get_local $14)
          (i64.const 31)
         )
         (i64.and
          (get_local $11)
          (i64.const 4294967295)
         )
        )
       )
      )
      (set_local $10
       (i32.add
        (get_local $10)
        (i32.const 1)
       )
      )
      (set_local $12
       (i64.add
        (get_local $12)
        (i64.const 1)
       )
      )
      (set_local $13
       (i64.or
        (get_local $14)
        (get_local $13)
       )
      )
      (br_if $label$124
       (i64.ne
        (tee_local $11
         (i64.add
          (get_local $11)
          (i64.const -5)
         )
        )
        (i64.const -6)
       )
      )
     )
     (i64.store offset=8
      (get_local $16)
      (get_local $13)
     )
     (i64.store
      (get_local $16)
      (get_local $15)
     )
     (set_local $12
      (i64.const 0)
     )
     (set_local $11
      (i64.const 59)
     )
     (set_local $10
      (i32.const 2112)
     )
     (set_local $13
      (i64.const 0)
     )
     (loop $label$130
      (block $label$131
       (block $label$132
        (block $label$133
         (block $label$134
          (block $label$135
           (br_if $label$135
            (i64.gt_u
             (get_local $12)
             (i64.const 5)
            )
           )
           (br_if $label$134
            (i32.gt_u
             (i32.and
              (i32.add
               (tee_local $6
                (i32.load8_s
                 (get_local $10)
                )
               )
               (i32.const -97)
              )
              (i32.const 255)
             )
             (i32.const 25)
            )
           )
           (set_local $6
            (i32.add
             (get_local $6)
             (i32.const 165)
            )
           )
           (br $label$133)
          )
          (set_local $14
           (i64.const 0)
          )
          (br_if $label$132
           (i64.le_u
            (get_local $12)
            (i64.const 11)
           )
          )
          (br $label$131)
         )
         (set_local $6
          (select
           (i32.add
            (get_local $6)
            (i32.const 208)
           )
           (i32.const 0)
           (i32.lt_u
            (i32.and
             (i32.add
              (get_local $6)
              (i32.const -49)
             )
             (i32.const 255)
            )
            (i32.const 5)
           )
          )
         )
        )
        (set_local $14
         (i64.shr_s
          (i64.shl
           (i64.extend_u/i32
            (get_local $6)
           )
           (i64.const 56)
          )
          (i64.const 56)
         )
        )
       )
       (set_local $14
        (i64.shl
         (i64.and
          (get_local $14)
          (i64.const 31)
         )
         (i64.and
          (get_local $11)
          (i64.const 4294967295)
         )
        )
       )
      )
      (set_local $10
       (i32.add
        (get_local $10)
        (i32.const 1)
       )
      )
      (set_local $12
       (i64.add
        (get_local $12)
        (i64.const 1)
       )
      )
      (set_local $13
       (i64.or
        (get_local $14)
        (get_local $13)
       )
      )
      (br_if $label$130
       (i64.ne
        (tee_local $11
         (i64.add
          (get_local $11)
          (i64.const -5)
         )
        )
        (i64.const -6)
       )
      )
     )
     (i64.store offset=176
      (get_local $16)
      (get_local $13)
     )
     (call $_ZNSt3__16vectorIN5eosio6actionENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJNS1_16permission_levelERyyS8_EEEvDpOT_
      (get_local $5)
      (get_local $16)
      (get_local $0)
      (i32.add
       (get_local $16)
       (i32.const 176)
      )
      (i32.add
       (get_local $16)
       (i32.const 152)
      )
     )
     (set_local $12
      (i64.load offset=152
       (get_local $16)
      )
     )
     (i32.store
      (i32.add
       (get_local $16)
       (i32.const 36)
      )
      (i32.const 259200)
     )
     (i64.store offset=8
      (get_local $16)
      (i64.const 0)
     )
     (i64.store
      (get_local $16)
      (get_local $12)
     )
     (call $_ZN5eosio4packINS_11transactionEEENSt3__16vectorIcNS2_9allocatorIcEEEERKT_
      (i32.add
       (get_local $16)
       (i32.const 176)
      )
      (i32.add
       (get_local $16)
       (i32.const 16)
      )
     )
     (call $send_deferred
      (get_local $16)
      (get_local $2)
      (tee_local $10
       (i32.load offset=176
        (get_local $16)
       )
      )
      (i32.sub
       (i32.load offset=180
        (get_local $16)
       )
       (get_local $10)
      )
      (i32.const 1)
     )
     (block $label$136
      (br_if $label$136
       (i32.eqz
        (tee_local $10
         (i32.load offset=176
          (get_local $16)
         )
        )
       )
      )
      (i32.store offset=180
       (get_local $16)
       (get_local $10)
      )
      (call $_ZdlPv
       (get_local $10)
      )
     )
     (drop
      (call $_ZN5eosio11transactionD2Ev
       (i32.add
        (get_local $16)
        (i32.const 16)
       )
      )
     )
    )
    (set_local $12
     (i64.load offset=96
      (get_local $16)
     )
    )
    (call $eosio_assert
     (i64.eq
      (i64.load offset=88
       (get_local $16)
      )
      (tee_local $7
       (i64.load offset=104
        (get_local $16)
       )
      )
     )
     (i32.const 1680)
    )
    (call $eosio_assert
     (i64.gt_s
      (tee_local $8
       (i64.add
        (get_local $12)
        (i64.load offset=80
         (get_local $16)
        )
       )
      )
      (i64.const -4611686018427387904)
     )
     (i32.const 1728)
    )
    (call $eosio_assert
     (i64.lt_s
      (get_local $8)
      (i64.const 4611686018427387904)
     )
     (i32.const 1760)
    )
    (call $eosio_assert
     (i32.const 1)
     (i32.const 992)
    )
    (set_local $12
     (i64.const 5459781)
    )
    (set_local $10
     (i32.const 0)
    )
    (block $label$137
     (block $label$138
      (loop $label$139
       (br_if $label$138
        (i32.gt_u
         (i32.add
          (i32.shl
           (i32.wrap/i64
            (get_local $12)
           )
           (i32.const 24)
          )
          (i32.const -1073741825)
         )
         (i32.const 452984830)
        )
       )
       (block $label$140
        (br_if $label$140
         (i64.ne
          (i64.and
           (tee_local $12
            (i64.shr_u
             (get_local $12)
             (i64.const 8)
            )
           )
           (i64.const 255)
          )
          (i64.const 0)
         )
        )
        (loop $label$141
         (br_if $label$138
          (i64.ne
           (i64.and
            (tee_local $12
             (i64.shr_u
              (get_local $12)
              (i64.const 8)
             )
            )
            (i64.const 255)
           )
           (i64.const 0)
          )
         )
         (br_if $label$141
          (i32.lt_s
           (tee_local $10
            (i32.add
             (get_local $10)
             (i32.const 1)
            )
           )
           (i32.const 7)
          )
         )
        )
       )
       (set_local $6
        (i32.const 1)
       )
       (br_if $label$139
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
       (br $label$137)
      )
     )
     (set_local $6
      (i32.const 0)
     )
    )
    (call $eosio_assert
     (get_local $6)
     (i32.const 704)
    )
    (call $eosio_assert
     (i64.eq
      (i64.const 1397703940)
      (get_local $7)
     )
     (i32.const 1584)
    )
    (block $label$142
     (br_if $label$142
      (i64.lt_s
       (get_local $8)
       (i64.const 1)
      )
     )
     (set_local $12
      (i64.const 0)
     )
     (set_local $11
      (i64.const 59)
     )
     (set_local $10
      (i32.const 672)
     )
     (set_local $13
      (i64.const 0)
     )
     (loop $label$143
      (block $label$144
       (block $label$145
        (block $label$146
         (block $label$147
          (block $label$148
           (br_if $label$148
            (i64.gt_u
             (get_local $12)
             (i64.const 10)
            )
           )
           (br_if $label$147
            (i32.gt_u
             (i32.and
              (i32.add
               (tee_local $6
                (i32.load8_s
                 (get_local $10)
                )
               )
               (i32.const -97)
              )
              (i32.const 255)
             )
             (i32.const 25)
            )
           )
           (set_local $6
            (i32.add
             (get_local $6)
             (i32.const 165)
            )
           )
           (br $label$146)
          )
          (set_local $14
           (i64.const 0)
          )
          (br_if $label$145
           (i64.eq
            (get_local $12)
            (i64.const 11)
           )
          )
          (br $label$144)
         )
         (set_local $6
          (select
           (i32.add
            (get_local $6)
            (i32.const 208)
           )
           (i32.const 0)
           (i32.lt_u
            (i32.and
             (i32.add
              (get_local $6)
              (i32.const -49)
             )
             (i32.const 255)
            )
            (i32.const 5)
           )
          )
         )
        )
        (set_local $14
         (i64.shr_s
          (i64.shl
           (i64.extend_u/i32
            (get_local $6)
           )
           (i64.const 56)
          )
          (i64.const 56)
         )
        )
       )
       (set_local $14
        (i64.shl
         (i64.and
          (get_local $14)
          (i64.const 31)
         )
         (i64.and
          (get_local $11)
          (i64.const 4294967295)
         )
        )
       )
      )
      (set_local $10
       (i32.add
        (get_local $10)
        (i32.const 1)
       )
      )
      (set_local $11
       (i64.add
        (get_local $11)
        (i64.const -5)
       )
      )
      (set_local $13
       (i64.or
        (get_local $14)
        (get_local $13)
       )
      )
      (br_if $label$143
       (i64.ne
        (tee_local $12
         (i64.add
          (get_local $12)
          (i64.const 1)
         )
        )
        (i64.const 13)
       )
      )
     )
     (set_local $12
      (i64.const 0)
     )
     (set_local $11
      (i64.const 59)
     )
     (set_local $10
      (i32.const 688)
     )
     (set_local $2
      (i64.const 0)
     )
     (loop $label$149
      (block $label$150
       (block $label$151
        (block $label$152
         (block $label$153
          (block $label$154
           (br_if $label$154
            (i64.gt_u
             (get_local $12)
             (i64.const 5)
            )
           )
           (br_if $label$153
            (i32.gt_u
             (i32.and
              (i32.add
               (tee_local $6
                (i32.load8_s
                 (get_local $10)
                )
               )
               (i32.const -97)
              )
              (i32.const 255)
             )
             (i32.const 25)
            )
           )
           (set_local $6
            (i32.add
             (get_local $6)
             (i32.const 165)
            )
           )
           (br $label$152)
          )
          (set_local $14
           (i64.const 0)
          )
          (br_if $label$151
           (i64.le_u
            (get_local $12)
            (i64.const 11)
           )
          )
          (br $label$150)
         )
         (set_local $6
          (select
           (i32.add
            (get_local $6)
            (i32.const 208)
           )
           (i32.const 0)
           (i32.lt_u
            (i32.and
             (i32.add
              (get_local $6)
              (i32.const -49)
             )
             (i32.const 255)
            )
            (i32.const 5)
           )
          )
         )
        )
        (set_local $14
         (i64.shr_s
          (i64.shl
           (i64.extend_u/i32
            (get_local $6)
           )
           (i64.const 56)
          )
          (i64.const 56)
         )
        )
       )
       (set_local $14
        (i64.shl
         (i64.and
          (get_local $14)
          (i64.const 31)
         )
         (i64.and
          (get_local $11)
          (i64.const 4294967295)
         )
        )
       )
      )
      (set_local $10
       (i32.add
        (get_local $10)
        (i32.const 1)
       )
      )
      (set_local $12
       (i64.add
        (get_local $12)
        (i64.const 1)
       )
      )
      (set_local $2
       (i64.or
        (get_local $14)
        (get_local $2)
       )
      )
      (br_if $label$149
       (i64.ne
        (tee_local $11
         (i64.add
          (get_local $11)
          (i64.const -5)
         )
        )
        (i64.const -6)
       )
      )
     )
     (set_local $12
      (i64.const 0)
     )
     (set_local $11
      (i64.const 59)
     )
     (set_local $10
      (i32.const 2032)
     )
     (set_local $15
      (i64.const 0)
     )
     (loop $label$155
      (block $label$156
       (block $label$157
        (block $label$158
         (block $label$159
          (block $label$160
           (br_if $label$160
            (i64.gt_u
             (get_local $12)
             (i64.const 10)
            )
           )
           (br_if $label$159
            (i32.gt_u
             (i32.and
              (i32.add
               (tee_local $6
                (i32.load8_s
                 (get_local $10)
                )
               )
               (i32.const -97)
              )
              (i32.const 255)
             )
             (i32.const 25)
            )
           )
           (set_local $6
            (i32.add
             (get_local $6)
             (i32.const 165)
            )
           )
           (br $label$158)
          )
          (set_local $14
           (i64.const 0)
          )
          (br_if $label$157
           (i64.eq
            (get_local $12)
            (i64.const 11)
           )
          )
          (br $label$156)
         )
         (set_local $6
          (select
           (i32.add
            (get_local $6)
            (i32.const 208)
           )
           (i32.const 0)
           (i32.lt_u
            (i32.and
             (i32.add
              (get_local $6)
              (i32.const -49)
             )
             (i32.const 255)
            )
            (i32.const 5)
           )
          )
         )
        )
        (set_local $14
         (i64.shr_s
          (i64.shl
           (i64.extend_u/i32
            (get_local $6)
           )
           (i64.const 56)
          )
          (i64.const 56)
         )
        )
       )
       (set_local $14
        (i64.shl
         (i64.and
          (get_local $14)
          (i64.const 31)
         )
         (i64.and
          (get_local $11)
          (i64.const 4294967295)
         )
        )
       )
      )
      (set_local $10
       (i32.add
        (get_local $10)
        (i32.const 1)
       )
      )
      (set_local $11
       (i64.add
        (get_local $11)
        (i64.const -5)
       )
      )
      (set_local $15
       (i64.or
        (get_local $14)
        (get_local $15)
       )
      )
      (br_if $label$155
       (i64.ne
        (tee_local $12
         (i64.add
          (get_local $12)
          (i64.const 1)
         )
        )
        (i64.const 13)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $16)
       (i32.const 184)
      )
      (i32.const 0)
     )
     (i64.store offset=176
      (get_local $16)
      (i64.const 0)
     )
     (br_if $label$83
      (i32.ge_u
       (tee_local $10
        (call $strlen
         (i32.const 2128)
        )
       )
       (i32.const -16)
      )
     )
     (block $label$161
      (block $label$162
       (block $label$163
        (br_if $label$163
         (i32.ge_u
          (get_local $10)
          (i32.const 11)
         )
        )
        (i32.store8 offset=176
         (get_local $16)
         (i32.shl
          (get_local $10)
          (i32.const 1)
         )
        )
        (set_local $6
         (i32.or
          (i32.add
           (get_local $16)
           (i32.const 176)
          )
          (i32.const 1)
         )
        )
        (br_if $label$162
         (get_local $10)
        )
        (br $label$161)
       )
       (set_local $6
        (call $_Znwj
         (tee_local $5
          (i32.and
           (i32.add
            (get_local $10)
            (i32.const 16)
           )
           (i32.const -16)
          )
         )
        )
       )
       (i32.store offset=176
        (get_local $16)
        (i32.or
         (get_local $5)
         (i32.const 1)
        )
       )
       (i32.store offset=184
        (get_local $16)
        (get_local $6)
       )
       (i32.store offset=180
        (get_local $16)
        (get_local $10)
       )
      )
      (drop
       (call $memcpy
        (get_local $6)
        (i32.const 2128)
        (get_local $10)
       )
      )
     )
     (i32.store8
      (i32.add
       (get_local $6)
       (get_local $10)
      )
      (i32.const 0)
     )
     (set_local $6
      (i32.load offset=176
       (get_local $16)
      )
     )
     (i32.store offset=176
      (get_local $16)
      (i32.const 0)
     )
     (set_local $5
      (i32.load offset=180
       (get_local $16)
      )
     )
     (i32.store offset=180
      (get_local $16)
      (i32.const 0)
     )
     (set_local $9
      (i32.load offset=184
       (get_local $16)
      )
     )
     (i32.store offset=184
      (get_local $16)
      (i32.const 0)
     )
     (i64.store
      (tee_local $10
       (call $_Znwj
        (i32.const 16)
       )
      )
      (get_local $1)
     )
     (i64.store offset=8
      (get_local $10)
      (get_local $2)
     )
     (i32.store
      (get_local $16)
      (get_local $10)
     )
     (i32.store offset=8
      (get_local $16)
      (tee_local $10
       (i32.add
        (get_local $10)
        (i32.const 16)
       )
      )
     )
     (i64.store offset=16
      (get_local $16)
      (get_local $1)
     )
     (i32.store offset=4
      (get_local $16)
      (get_local $10)
     )
     (i64.store offset=24
      (get_local $16)
      (get_local $15)
     )
     (i64.store offset=32
      (get_local $16)
      (get_local $8)
     )
     (i64.store
      (i32.add
       (get_local $16)
       (i32.const 40)
      )
      (get_local $7)
     )
     (i32.store offset=48
      (get_local $16)
      (get_local $6)
     )
     (i32.store
      (i32.add
       (get_local $16)
       (i32.const 52)
      )
      (get_local $5)
     )
     (i32.store
      (tee_local $10
       (i32.add
        (get_local $16)
        (i32.const 56)
       )
      )
      (get_local $9)
     )
     (call $_ZN5eosio15dispatch_inlineIJyyNS_5assetENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEEEvyyNS2_6vectorINS_16permission_levelENS6_ISA_EEEENS2_5tupleIJDpT_EEE
      (get_local $13)
      (i64.const -3617168760277827584)
      (get_local $16)
      (i32.add
       (get_local $16)
       (i32.const 16)
      )
     )
     (block $label$164
      (br_if $label$164
       (i32.eqz
        (i32.and
         (i32.load8_u offset=48
          (get_local $16)
         )
         (i32.const 1)
        )
       )
      )
      (call $_ZdlPv
       (i32.load
        (get_local $10)
       )
      )
     )
     (block $label$165
      (br_if $label$165
       (i32.eqz
        (tee_local $10
         (i32.load
          (get_local $16)
         )
        )
       )
      )
      (i32.store offset=4
       (get_local $16)
       (get_local $10)
      )
      (call $_ZdlPv
       (get_local $10)
      )
     )
     (br_if $label$142
      (i32.eqz
       (i32.and
        (i32.load8_u offset=176
         (get_local $16)
        )
        (i32.const 1)
       )
      )
     )
     (call $_ZdlPv
      (i32.load
       (i32.add
        (get_local $16)
        (i32.const 184)
       )
      )
     )
    )
    (br_if $label$84
     (i32.eqz
      (tee_local $5
       (i32.load offset=136
        (get_local $16)
       )
      )
     )
    )
    (block $label$166
     (block $label$167
      (br_if $label$167
       (i32.eq
        (tee_local $10
         (i32.load
          (tee_local $9
           (i32.add
            (get_local $16)
            (i32.const 140)
           )
          )
         )
        )
        (get_local $5)
       )
      )
      (loop $label$168
       (set_local $6
        (i32.load
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const -24)
          )
         )
        )
       )
       (i32.store
        (get_local $10)
        (i32.const 0)
       )
       (block $label$169
        (br_if $label$169
         (i32.eqz
          (get_local $6)
         )
        )
        (call $_ZdlPv
         (get_local $6)
        )
       )
       (br_if $label$168
        (i32.ne
         (get_local $5)
         (get_local $10)
        )
       )
      )
      (set_local $10
       (i32.load
        (i32.add
         (get_local $16)
         (i32.const 136)
        )
       )
      )
      (br $label$166)
     )
     (set_local $10
      (get_local $5)
     )
    )
    (i32.store
     (get_local $9)
     (get_local $5)
    )
    (call $_ZdlPv
     (get_local $10)
    )
   )
   (i64.store
    (i32.add
     (i32.add
      (get_local $16)
      (i32.const 16)
     )
     (i32.const 8)
    )
    (tee_local $12
     (i64.load
      (i32.add
       (get_local $3)
       (i32.const 8)
      )
     )
    )
   )
   (i64.store offset=16
    (get_local $16)
    (i64.load
     (get_local $3)
    )
   )
   (call $eosio_assert
    (i64.eq
     (get_local $12)
     (i64.load offset=8
      (get_local $4)
     )
    )
    (i32.const 1680)
   )
   (i64.store offset=16
    (get_local $16)
    (tee_local $12
     (i64.add
      (i64.load offset=16
       (get_local $16)
      )
      (i64.load
       (get_local $4)
      )
     )
    )
   )
   (call $eosio_assert
    (i64.gt_s
     (get_local $12)
     (i64.const -4611686018427387904)
    )
    (i32.const 1728)
   )
   (call $eosio_assert
    (i64.lt_s
     (get_local $12)
     (i64.const 4611686018427387904)
    )
    (i32.const 1760)
   )
   (set_local $12
    (i64.load offset=152
     (get_local $16)
    )
   )
   (block $label$170
    (br_if $label$170
     (i32.eq
      (tee_local $5
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 36)
        )
       )
      )
      (tee_local $4
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 32)
        )
       )
      )
     )
    )
    (set_local $10
     (i32.add
      (get_local $5)
      (i32.const -24)
     )
    )
    (set_local $3
     (i32.sub
      (i32.const 0)
      (get_local $4)
     )
    )
    (loop $label$171
     (br_if $label$170
      (i64.eq
       (i64.load
        (i32.load
         (get_local $10)
        )
       )
       (get_local $12)
      )
     )
     (set_local $5
      (get_local $10)
     )
     (set_local $10
      (tee_local $6
       (i32.add
        (get_local $10)
        (i32.const -24)
       )
      )
     )
     (br_if $label$171
      (i32.ne
       (i32.add
        (get_local $6)
        (get_local $3)
       )
       (i32.const -24)
      )
     )
    )
   )
   (set_local $6
    (i32.add
     (get_local $0)
     (i32.const 8)
    )
   )
   (block $label$172
    (block $label$173
     (block $label$174
      (block $label$175
       (br_if $label$175
        (i32.eq
         (get_local $5)
         (get_local $4)
        )
       )
       (call $eosio_assert
        (i32.eq
         (i32.load offset=88
          (tee_local $5
           (i32.load
            (i32.add
             (get_local $5)
             (i32.const -24)
            )
           )
          )
         )
         (get_local $6)
        )
        (i32.const 32)
       )
       (br_if $label$174
        (get_local $5)
       )
       (br $label$173)
      )
      (br_if $label$173
       (i32.lt_s
        (tee_local $10
         (call $db_find_i64
          (i64.load
           (i32.add
            (get_local $0)
            (i32.const 8)
           )
          )
          (i64.load
           (i32.add
            (get_local $0)
            (i32.const 16)
           )
          )
          (i64.const -2507753063930920960)
          (get_local $12)
         )
        )
        (i32.const 0)
       )
      )
      (call $eosio_assert
       (i32.eq
        (i32.load offset=88
         (tee_local $5
          (call $_ZNK5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE31load_object_by_primary_iteratorEl
           (get_local $6)
           (get_local $10)
          )
         )
        )
        (get_local $6)
       )
       (i32.const 32)
      )
     )
     (i32.store offset=112
      (get_local $16)
      (i32.add
       (get_local $16)
       (i32.const 16)
      )
     )
     (call $eosio_assert
      (i32.const 1)
      (i32.const 96)
     )
     (call $_ZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE6modifyIZNS1_15system_contract8changebwEyyNS_5assetES6_bE4$_15EEvRKS2_yOT_
      (get_local $6)
      (get_local $5)
      (i32.add
       (get_local $16)
       (i32.const 112)
      )
     )
     (br $label$172)
    )
    (set_local $12
     (i64.load offset=152
      (get_local $16)
     )
    )
    (i32.store offset=84
     (get_local $16)
     (i32.add
      (get_local $16)
      (i32.const 16)
     )
    )
    (i32.store offset=80
     (get_local $16)
     (i32.add
      (get_local $16)
      (i32.const 152)
     )
    )
    (i64.store offset=96
     (get_local $16)
     (get_local $12)
    )
    (call $eosio_assert
     (i64.eq
      (i64.load
       (get_local $6)
      )
      (call $current_receiver)
     )
     (i32.const 1184)
    )
    (i32.store offset=112
     (get_local $16)
     (get_local $6)
    )
    (i32.store offset=116
     (get_local $16)
     (i32.add
      (get_local $16)
      (i32.const 80)
     )
    )
    (i32.store offset=120
     (get_local $16)
     (i32.add
      (get_local $16)
      (i32.const 96)
     )
    )
    (i64.store offset=8
     (tee_local $5
      (call $_Znwj
       (i32.const 104)
      )
     )
     (i64.const 0)
    )
    (i64.store
     (get_local $5)
     (i64.const 0)
    )
    (i64.store offset=16 align=4
     (get_local $5)
     (i64.const 0)
    )
    (i32.store offset=24
     (get_local $5)
     (i32.const 0)
    )
    (i64.store offset=32
     (get_local $5)
     (i64.const 0)
    )
    (i64.store offset=40
     (get_local $5)
     (i64.const 0)
    )
    (i64.store offset=48
     (get_local $5)
     (i64.const 0)
    )
    (i32.store8 offset=56
     (get_local $5)
     (i32.const 0)
    )
    (i32.store offset=60
     (get_local $5)
     (i32.const 0)
    )
    (i32.store offset=64
     (get_local $5)
     (i32.const 0)
    )
    (i64.store offset=72
     (get_local $5)
     (i64.const 0)
    )
    (i64.store offset=80
     (get_local $5)
     (i64.const 1397703940)
    )
    (call $eosio_assert
     (i32.const 1)
     (i32.const 992)
    )
    (set_local $12
     (i64.const 5459781)
    )
    (set_local $10
     (i32.const 0)
    )
    (block $label$176
     (block $label$177
      (loop $label$178
       (br_if $label$177
        (i32.gt_u
         (i32.add
          (i32.shl
           (i32.wrap/i64
            (get_local $12)
           )
           (i32.const 24)
          )
          (i32.const -1073741825)
         )
         (i32.const 452984830)
        )
       )
       (block $label$179
        (br_if $label$179
         (i64.ne
          (i64.and
           (tee_local $12
            (i64.shr_u
             (get_local $12)
             (i64.const 8)
            )
           )
           (i64.const 255)
          )
          (i64.const 0)
         )
        )
        (loop $label$180
         (br_if $label$177
          (i64.ne
           (i64.and
            (tee_local $12
             (i64.shr_u
              (get_local $12)
              (i64.const 8)
             )
            )
            (i64.const 255)
           )
           (i64.const 0)
          )
         )
         (br_if $label$180
          (i32.lt_s
           (tee_local $10
            (i32.add
             (get_local $10)
             (i32.const 1)
            )
           )
           (i32.const 7)
          )
         )
        )
       )
       (set_local $3
        (i32.const 1)
       )
       (br_if $label$178
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
       (br $label$176)
      )
     )
     (set_local $3
      (i32.const 0)
     )
    )
    (call $eosio_assert
     (get_local $3)
     (i32.const 704)
    )
    (i32.store offset=88
     (get_local $5)
     (get_local $6)
    )
    (call $_ZZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE7emplaceIZNS1_15system_contract8changebwEyyNS_5assetES6_bE4$_14EENS3_14const_iteratorEyOT_ENKUlRS9_E_clINS3_4itemEEEDaSB_
     (i32.add
      (get_local $16)
      (i32.const 112)
     )
     (get_local $5)
    )
    (i32.store
     (get_local $16)
     (get_local $5)
    )
    (i64.store offset=112
     (get_local $16)
     (tee_local $12
      (i64.load
       (get_local $5)
      )
     )
    )
    (i32.store offset=176
     (get_local $16)
     (tee_local $6
      (i32.load offset=92
       (get_local $5)
      )
     )
    )
    (block $label$181
     (block $label$182
      (br_if $label$182
       (i32.ge_u
        (tee_local $10
         (i32.load
          (tee_local $3
           (i32.add
            (get_local $0)
            (i32.const 36)
           )
          )
         )
        )
        (i32.load
         (i32.add
          (get_local $0)
          (i32.const 40)
         )
        )
       )
      )
      (i64.store offset=8
       (get_local $10)
       (get_local $12)
      )
      (i32.store offset=16
       (get_local $10)
       (get_local $6)
      )
      (i32.store
       (get_local $16)
       (i32.const 0)
      )
      (i32.store
       (get_local $10)
       (get_local $5)
      )
      (i32.store
       (get_local $3)
       (i32.add
        (get_local $10)
        (i32.const 24)
       )
      )
      (br $label$181)
     )
     (call $_ZNSt3__16vectorIN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_
      (i32.add
       (get_local $0)
       (i32.const 32)
      )
      (get_local $16)
      (i32.add
       (get_local $16)
       (i32.const 112)
      )
      (i32.add
       (get_local $16)
       (i32.const 176)
      )
     )
    )
    (set_local $10
     (i32.load
      (get_local $16)
     )
    )
    (i32.store
     (get_local $16)
     (i32.const 0)
    )
    (br_if $label$172
     (i32.eqz
      (get_local $10)
     )
    )
    (block $label$183
     (br_if $label$183
      (i32.eqz
       (tee_local $6
        (i32.load offset=16
         (get_local $10)
        )
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $10)
       (i32.const 20)
      )
      (get_local $6)
     )
     (call $_ZdlPv
      (get_local $6)
     )
    )
    (call $_ZdlPv
     (get_local $10)
    )
   )
   (call $eosio_assert
    (i32.xor
     (i32.wrap/i64
      (i64.shr_u
       (i64.load offset=32
        (get_local $5)
       )
       (i64.const 63)
      )
     )
     (i32.const 1)
    )
    (i32.const 2144)
   )
   (set_local $12
    (i64.const 0)
   )
   (set_local $11
    (i64.const 59)
   )
   (set_local $10
    (i32.const 2192)
   )
   (set_local $2
    (i64.load offset=152
     (get_local $16)
    )
   )
   (set_local $13
    (i64.const 0)
   )
   (loop $label$184
    (block $label$185
     (block $label$186
      (block $label$187
       (block $label$188
        (block $label$189
         (br_if $label$189
          (i64.gt_u
           (get_local $12)
           (i64.const 1)
          )
         )
         (br_if $label$188
          (i32.gt_u
           (i32.and
            (i32.add
             (tee_local $6
              (i32.load8_s
               (get_local $10)
              )
             )
             (i32.const -97)
            )
            (i32.const 255)
           )
           (i32.const 25)
          )
         )
         (set_local $6
          (i32.add
           (get_local $6)
           (i32.const 165)
          )
         )
         (br $label$187)
        )
        (set_local $14
         (i64.const 0)
        )
        (br_if $label$186
         (i64.le_u
          (get_local $12)
          (i64.const 11)
         )
        )
        (br $label$185)
       )
       (set_local $6
        (select
         (i32.add
          (get_local $6)
          (i32.const 208)
         )
         (i32.const 0)
         (i32.lt_u
          (i32.and
           (i32.add
            (get_local $6)
            (i32.const -49)
           )
           (i32.const 255)
          )
          (i32.const 5)
         )
        )
       )
      )
      (set_local $14
       (i64.shr_s
        (i64.shl
         (i64.extend_u/i32
          (get_local $6)
         )
         (i64.const 56)
        )
        (i64.const 56)
       )
      )
     )
     (set_local $14
      (i64.shl
       (i64.and
        (get_local $14)
        (i64.const 31)
       )
       (i64.and
        (get_local $11)
        (i64.const 4294967295)
       )
      )
     )
    )
    (set_local $10
     (i32.add
      (get_local $10)
      (i32.const 1)
     )
    )
    (set_local $12
     (i64.add
      (get_local $12)
      (i64.const 1)
     )
    )
    (set_local $13
     (i64.or
      (get_local $14)
      (get_local $13)
     )
    )
    (br_if $label$184
     (i64.ne
      (tee_local $11
       (i64.add
        (get_local $11)
        (i64.const -5)
       )
      )
      (i64.const -6)
     )
    )
   )
   (block $label$190
    (br_if $label$190
     (i64.ne
      (get_local $2)
      (get_local $13)
     )
    )
    (set_local $12
     (i64.load
      (i32.add
       (get_local $5)
       (i32.const 32)
      )
     )
    )
    (call $eosio_assert
     (i64.le_s
      (i64.sub
       (i64.const 1000000000000)
       (i64.trunc_s/f64
        (f64.div
         (f64.mul
          (f64.convert_s/i64
           (i64.add
            (i64.and
             (i64.div_u
              (call $current_time)
              (i64.const 1000000)
             )
             (i64.const 4294967295)
            )
            (i64.const -1527811200)
           )
          )
          (f64.const 1e12)
         )
         (f64.const 314496e3)
        )
       )
      )
      (get_local $12)
     )
     (i32.const 1536)
    )
   )
   (set_local $12
    (i64.load offset=8
     (get_local $5)
    )
   )
   (block $label$191
    (block $label$192
     (br_if $label$192
      (i32.ne
       (i32.load
        (i32.add
         (get_local $5)
         (i32.const 20)
        )
       )
       (i32.load offset=16
        (get_local $5)
       )
      )
     )
     (br_if $label$191
      (i64.eqz
       (get_local $12)
      )
     )
    )
    (call $_ZN11eosiosystem15system_contract12update_votesEyyRKNSt3__16vectorIyNS1_9allocatorIyEEEEb
     (get_local $0)
     (i64.load offset=152
      (get_local $16)
     )
     (get_local $12)
     (i32.add
      (get_local $5)
      (i32.const 16)
     )
     (i32.const 0)
    )
   )
   (i32.store offset=4
    (i32.const 0)
    (i32.add
     (get_local $16)
     (i32.const 192)
    )
   )
   (return)
  )
  (call $_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv
   (i32.add
    (get_local $16)
    (i32.const 176)
   )
  )
  (unreachable)
 )
 (func $_ZNK5eosio11multi_indexILy5377987680120340480EN11eosiosystem19delegated_bandwidthEJEE31load_object_by_primary_iteratorEl (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (set_local $8
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 28)
       )
      )
     )
     (tee_local $2
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (set_local $3
    (i32.sub
     (i32.const 0)
     (get_local $2)
    )
   )
   (set_local $6
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i32.eq
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const 16)
       )
      )
      (get_local $1)
     )
    )
    (set_local $7
     (get_local $6)
    )
    (set_local $6
     (tee_local $4
      (i32.add
       (get_local $6)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $4)
       (get_local $3)
      )
      (i32.const -24)
     )
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (get_local $2)
     )
    )
    (set_local $6
     (i32.load
      (i32.add
       (get_local $7)
       (i32.const -24)
      )
     )
    )
    (br $label$2)
   )
   (call $eosio_assert
    (i32.xor
     (i32.shr_u
      (tee_local $6
       (call $db_get_i64
        (get_local $1)
        (i32.const 0)
        (i32.const 0)
       )
      )
      (i32.const 31)
     )
     (i32.const 1)
    )
    (i32.const 336)
   )
   (block $label$4
    (block $label$5
     (br_if $label$5
      (i32.lt_u
       (get_local $6)
       (i32.const 513)
      )
     )
     (set_local $4
      (call $malloc
       (get_local $6)
      )
     )
     (br $label$4)
    )
    (i32.store offset=4
     (i32.const 0)
     (tee_local $4
      (i32.sub
       (get_local $9)
       (i32.and
        (i32.add
         (get_local $6)
         (i32.const 15)
        )
        (i32.const -16)
       )
      )
     )
    )
   )
   (drop
    (call $db_get_i64
     (get_local $1)
     (get_local $4)
     (get_local $6)
    )
   )
   (i32.store offset=36
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=32
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=40
    (get_local $8)
    (i32.add
     (get_local $4)
     (get_local $6)
    )
   )
   (block $label$6
    (br_if $label$6
     (i32.lt_u
      (get_local $6)
      (i32.const 513)
     )
    )
    (call $free
     (get_local $4)
    )
   )
   (set_local $4
    (call $_ZN11eosiosystem19delegated_bandwidthC2Ev
     (tee_local $6
      (call $_Znwj
       (i32.const 64)
      )
     )
    )
   )
   (i32.store offset=48
    (get_local $6)
    (get_local $0)
   )
   (drop
    (call $_ZN11eosiosystemrsIN5eosio10datastreamIPKcEEEERT_S7_RNS_19delegated_bandwidthE
     (i32.add
      (get_local $8)
      (i32.const 32)
     )
     (get_local $4)
    )
   )
   (i32.store offset=52
    (get_local $6)
    (get_local $1)
   )
   (i32.store offset=24
    (get_local $8)
    (get_local $6)
   )
   (i64.store offset=16
    (get_local $8)
    (tee_local $5
     (i64.load offset=8
      (get_local $6)
     )
    )
   )
   (i32.store offset=12
    (get_local $8)
    (tee_local $7
     (i32.load offset=52
      (get_local $6)
     )
    )
   )
   (block $label$7
    (block $label$8
     (br_if $label$8
      (i32.ge_u
       (tee_local $4
        (i32.load
         (tee_local $1
          (i32.add
           (get_local $0)
           (i32.const 28)
          )
         )
        )
       )
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 32)
        )
       )
      )
     )
     (i64.store offset=8
      (get_local $4)
      (get_local $5)
     )
     (i32.store offset=16
      (get_local $4)
      (get_local $7)
     )
     (i32.store offset=24
      (get_local $8)
      (i32.const 0)
     )
     (i32.store
      (get_local $4)
      (get_local $6)
     )
     (i32.store
      (get_local $1)
      (i32.add
       (get_local $4)
       (i32.const 24)
      )
     )
     (br $label$7)
    )
    (call $_ZNSt3__16vectorIN5eosio11multi_indexILy5377987680120340480EN11eosiosystem19delegated_bandwidthEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_
     (i32.add
      (get_local $0)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 16)
     )
     (i32.add
      (get_local $8)
      (i32.const 12)
     )
    )
   )
   (set_local $4
    (i32.load offset=24
     (get_local $8)
    )
   )
   (i32.store offset=24
    (get_local $8)
    (i32.const 0)
   )
   (br_if $label$2
    (i32.eqz
     (get_local $4)
    )
   )
   (call $_ZdlPv
    (get_local $4)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 48)
   )
  )
  (get_local $6)
 )
 (func $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_19delegated_bandwidthE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (get_local $1)
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 16)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 24)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 32)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 40)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (get_local $0)
 )
 (func $_ZN11eosiosystem19delegated_bandwidthC2Ev (param $0 i32) (result i32)
  (local $1 i64)
  (local $2 i32)
  (local $3 i32)
  (i64.store offset=16
   (get_local $0)
   (i64.const 0)
  )
  (i64.store
   (tee_local $2
    (i32.add
     (get_local $0)
     (i32.const 24)
    )
   )
   (i64.const 1397703940)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $1
   (i64.shr_u
    (i64.load
     (get_local $2)
    )
    (i64.const 8)
   )
  )
  (set_local $2
   (i32.const 0)
  )
  (block $label$0
   (block $label$1
    (loop $label$2
     (br_if $label$1
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $1)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$3
      (br_if $label$3
       (i64.ne
        (i64.and
         (tee_local $1
          (i64.shr_u
           (get_local $1)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$4
       (br_if $label$1
        (i64.ne
         (i64.and
          (tee_local $1
           (i64.shr_u
            (get_local $1)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$4
        (i32.lt_s
         (tee_local $2
          (i32.add
           (get_local $2)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $3
      (i32.const 1)
     )
     (br_if $label$2
      (i32.lt_s
       (tee_local $2
        (i32.add
         (get_local $2)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$0)
    )
   )
   (set_local $3
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $3)
   (i32.const 704)
  )
  (i64.store
   (tee_local $2
    (i32.add
     (get_local $0)
     (i32.const 40)
    )
   )
   (i64.const 1397703940)
  )
  (i64.store offset=32
   (get_local $0)
   (i64.const 0)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $1
   (i64.shr_u
    (i64.load
     (get_local $2)
    )
    (i64.const 8)
   )
  )
  (set_local $2
   (i32.const 0)
  )
  (block $label$5
   (block $label$6
    (loop $label$7
     (br_if $label$6
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $1)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$8
      (br_if $label$8
       (i64.ne
        (i64.and
         (tee_local $1
          (i64.shr_u
           (get_local $1)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$9
       (br_if $label$6
        (i64.ne
         (i64.and
          (tee_local $1
           (i64.shr_u
            (get_local $1)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$9
        (i32.lt_s
         (tee_local $2
          (i32.add
           (get_local $2)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $3
      (i32.const 1)
     )
     (br_if $label$7
      (i32.lt_s
       (tee_local $2
        (i32.add
         (get_local $2)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$5)
    )
   )
   (set_local $3
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $3)
   (i32.const 704)
  )
  (get_local $0)
 )
 (func $_ZNSt3__16vectorIN5eosio11multi_indexILy5377987680120340480EN11eosiosystem19delegated_bandwidthEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_ (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.ge_u
      (tee_local $5
       (i32.add
        (tee_local $4
         (i32.div_s
          (i32.sub
           (i32.load offset=4
            (get_local $0)
           )
           (tee_local $6
            (i32.load
             (get_local $0)
            )
           )
          )
          (i32.const 24)
         )
        )
        (i32.const 1)
       )
      )
      (i32.const 178956971)
     )
    )
    (set_local $7
     (i32.const 178956970)
    )
    (block $label$2
     (block $label$3
      (br_if $label$3
       (i32.gt_u
        (tee_local $6
         (i32.div_s
          (i32.sub
           (i32.load offset=8
            (get_local $0)
           )
           (get_local $6)
          )
          (i32.const 24)
         )
        )
        (i32.const 89478484)
       )
      )
      (br_if $label$2
       (i32.eqz
        (tee_local $7
         (select
          (get_local $5)
          (tee_local $7
           (i32.shl
            (get_local $6)
            (i32.const 1)
           )
          )
          (i32.lt_u
           (get_local $7)
           (get_local $5)
          )
         )
        )
       )
      )
     )
     (set_local $6
      (call $_Znwj
       (i32.mul
        (get_local $7)
        (i32.const 24)
       )
      )
     )
     (br $label$0)
    )
    (set_local $7
     (i32.const 0)
    )
    (set_local $6
     (i32.const 0)
    )
    (br $label$0)
   )
   (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
    (get_local $0)
   )
   (unreachable)
  )
  (set_local $5
   (i32.load
    (get_local $1)
   )
  )
  (i32.store
   (get_local $1)
   (i32.const 0)
  )
  (i32.store
   (tee_local $1
    (i32.add
     (get_local $6)
     (i32.mul
      (get_local $4)
      (i32.const 24)
     )
    )
   )
   (get_local $5)
  )
  (i64.store offset=8
   (get_local $1)
   (i64.load
    (get_local $2)
   )
  )
  (i32.store offset=16
   (get_local $1)
   (i32.load
    (get_local $3)
   )
  )
  (set_local $4
   (i32.add
    (get_local $6)
    (i32.mul
     (get_local $7)
     (i32.const 24)
    )
   )
  )
  (set_local $5
   (i32.add
    (get_local $1)
    (i32.const 24)
   )
  )
  (block $label$4
   (block $label$5
    (br_if $label$5
     (i32.eq
      (tee_local $6
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 4)
        )
       )
      )
      (tee_local $7
       (i32.load
        (get_local $0)
       )
      )
     )
    )
    (loop $label$6
     (set_local $3
      (i32.load
       (tee_local $2
        (i32.add
         (get_local $6)
         (i32.const -24)
        )
       )
      )
     )
     (i32.store
      (get_local $2)
      (i32.const 0)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
      (get_local $3)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -8)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -8)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -12)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -12)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -16)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -16)
       )
      )
     )
     (set_local $1
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
     )
     (set_local $6
      (get_local $2)
     )
     (br_if $label$6
      (i32.ne
       (get_local $7)
       (get_local $2)
      )
     )
    )
    (set_local $7
     (i32.load
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (set_local $6
     (i32.load
      (get_local $0)
     )
    )
    (br $label$4)
   )
   (set_local $6
    (get_local $7)
   )
  )
  (i32.store
   (get_local $0)
   (get_local $1)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
   (get_local $5)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
   (get_local $4)
  )
  (block $label$7
   (br_if $label$7
    (i32.eq
     (get_local $7)
     (get_local $6)
    )
   )
   (loop $label$8
    (set_local $1
     (i32.load
      (tee_local $7
       (i32.add
        (get_local $7)
        (i32.const -24)
       )
      )
     )
    )
    (i32.store
     (get_local $7)
     (i32.const 0)
    )
    (block $label$9
     (br_if $label$9
      (i32.eqz
       (get_local $1)
      )
     )
     (call $_ZdlPv
      (get_local $1)
     )
    )
    (br_if $label$8
     (i32.ne
      (get_local $6)
      (get_local $7)
     )
    )
   )
  )
  (block $label$10
   (br_if $label$10
    (i32.eqz
     (get_local $6)
    )
   )
   (call $_ZdlPv
    (get_local $6)
   )
  )
 )
 (func $_ZN5eosio11multi_indexILy5377987680120340480EN11eosiosystem19delegated_bandwidthEJEE5eraseERKS2_ (param $0 i32) (param $1 i32)
  (local $2 i64)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (call $eosio_assert
   (i32.eq
    (i32.load offset=48
     (get_local $1)
    )
    (get_local $0)
   )
   (i32.const 2704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 2752)
  )
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (tee_local $5
        (i32.add
         (get_local $0)
         (i32.const 28)
        )
       )
      )
     )
     (tee_local $3
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (set_local $2
    (i64.load offset=8
     (get_local $1)
    )
   )
   (set_local $6
    (i32.sub
     (i32.const 0)
     (get_local $3)
    )
   )
   (set_local $8
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i64.eq
      (i64.load offset=8
       (i32.load
        (get_local $8)
       )
      )
      (get_local $2)
     )
    )
    (set_local $7
     (get_local $8)
    )
    (set_local $8
     (tee_local $4
      (i32.add
       (get_local $8)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $4)
       (get_local $6)
      )
      (i32.const -24)
     )
    )
   )
  )
  (call $eosio_assert
   (i32.ne
    (get_local $7)
    (get_local $3)
   )
   (i32.const 2816)
  )
  (set_local $8
   (i32.add
    (get_local $7)
    (i32.const -24)
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (tee_local $4
       (i32.load
        (get_local $5)
       )
      )
     )
    )
    (set_local $3
     (i32.sub
      (i32.const 0)
      (get_local $4)
     )
    )
    (set_local $7
     (get_local $8)
    )
    (loop $label$4
     (set_local $6
      (i32.load
       (tee_local $8
        (i32.add
         (get_local $7)
         (i32.const 24)
        )
       )
      )
     )
     (i32.store
      (get_local $8)
      (i32.const 0)
     )
     (set_local $4
      (i32.load
       (get_local $7)
      )
     )
     (i32.store
      (get_local $7)
      (get_local $6)
     )
     (block $label$5
      (br_if $label$5
       (i32.eqz
        (get_local $4)
       )
      )
      (call $_ZdlPv
       (get_local $4)
      )
     )
     (i32.store
      (i32.add
       (get_local $7)
       (i32.const 16)
      )
      (i32.load
       (i32.add
        (get_local $7)
        (i32.const 40)
       )
      )
     )
     (i64.store
      (i32.add
       (get_local $7)
       (i32.const 8)
      )
      (i64.load
       (i32.add
        (get_local $7)
        (i32.const 32)
       )
      )
     )
     (set_local $7
      (get_local $8)
     )
     (br_if $label$4
      (i32.ne
       (i32.add
        (get_local $8)
        (get_local $3)
       )
       (i32.const -24)
      )
     )
    )
    (br_if $label$2
     (i32.eq
      (tee_local $7
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 28)
        )
       )
      )
      (get_local $8)
     )
    )
   )
   (loop $label$6
    (set_local $4
     (i32.load
      (tee_local $7
       (i32.add
        (get_local $7)
        (i32.const -24)
       )
      )
     )
    )
    (i32.store
     (get_local $7)
     (i32.const 0)
    )
    (block $label$7
     (br_if $label$7
      (i32.eqz
       (get_local $4)
      )
     )
     (call $_ZdlPv
      (get_local $4)
     )
    )
    (br_if $label$6
     (i32.ne
      (get_local $8)
      (get_local $7)
     )
    )
   )
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 28)
   )
   (get_local $8)
  )
  (call $db_remove_i64
   (i32.load offset=52
    (get_local $1)
   )
  )
 )
 (func $_ZN5eosio11multi_indexILy15426372072997126144EN11eosiosystem14user_resourcesEJEE5eraseERKS2_ (param $0 i32) (param $1 i32)
  (local $2 i64)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (call $eosio_assert
   (i32.eq
    (i32.load offset=48
     (get_local $1)
    )
    (get_local $0)
   )
   (i32.const 2704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 2752)
  )
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (tee_local $5
        (i32.add
         (get_local $0)
         (i32.const 28)
        )
       )
      )
     )
     (tee_local $3
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (set_local $2
    (i64.load
     (get_local $1)
    )
   )
   (set_local $6
    (i32.sub
     (i32.const 0)
     (get_local $3)
    )
   )
   (set_local $8
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i64.eq
      (i64.load
       (i32.load
        (get_local $8)
       )
      )
      (get_local $2)
     )
    )
    (set_local $7
     (get_local $8)
    )
    (set_local $8
     (tee_local $4
      (i32.add
       (get_local $8)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $4)
       (get_local $6)
      )
      (i32.const -24)
     )
    )
   )
  )
  (call $eosio_assert
   (i32.ne
    (get_local $7)
    (get_local $3)
   )
   (i32.const 2816)
  )
  (set_local $8
   (i32.add
    (get_local $7)
    (i32.const -24)
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (tee_local $4
       (i32.load
        (get_local $5)
       )
      )
     )
    )
    (set_local $3
     (i32.sub
      (i32.const 0)
      (get_local $4)
     )
    )
    (set_local $7
     (get_local $8)
    )
    (loop $label$4
     (set_local $6
      (i32.load
       (tee_local $8
        (i32.add
         (get_local $7)
         (i32.const 24)
        )
       )
      )
     )
     (i32.store
      (get_local $8)
      (i32.const 0)
     )
     (set_local $4
      (i32.load
       (get_local $7)
      )
     )
     (i32.store
      (get_local $7)
      (get_local $6)
     )
     (block $label$5
      (br_if $label$5
       (i32.eqz
        (get_local $4)
       )
      )
      (call $_ZdlPv
       (get_local $4)
      )
     )
     (i32.store
      (i32.add
       (get_local $7)
       (i32.const 16)
      )
      (i32.load
       (i32.add
        (get_local $7)
        (i32.const 40)
       )
      )
     )
     (i64.store
      (i32.add
       (get_local $7)
       (i32.const 8)
      )
      (i64.load
       (i32.add
        (get_local $7)
        (i32.const 32)
       )
      )
     )
     (set_local $7
      (get_local $8)
     )
     (br_if $label$4
      (i32.ne
       (i32.add
        (get_local $8)
        (get_local $3)
       )
       (i32.const -24)
      )
     )
    )
    (br_if $label$2
     (i32.eq
      (tee_local $7
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 28)
        )
       )
      )
      (get_local $8)
     )
    )
   )
   (loop $label$6
    (set_local $4
     (i32.load
      (tee_local $7
       (i32.add
        (get_local $7)
        (i32.const -24)
       )
      )
     )
    )
    (i32.store
     (get_local $7)
     (i32.const 0)
    )
    (block $label$7
     (br_if $label$7
      (i32.eqz
       (get_local $4)
      )
     )
     (call $_ZdlPv
      (get_local $4)
     )
    )
    (br_if $label$6
     (i32.ne
      (get_local $8)
      (get_local $7)
     )
    )
   )
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 28)
   )
   (get_local $8)
  )
  (call $db_remove_i64
   (i32.load offset=52
    (get_local $1)
   )
  )
 )
 (func $_ZNK5eosio11multi_indexILy13445401747262537728EN11eosiosystem14refund_requestEJEE31load_object_by_primary_iteratorEl (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (set_local $8
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 28)
       )
      )
     )
     (tee_local $2
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (set_local $3
    (i32.sub
     (i32.const 0)
     (get_local $2)
    )
   )
   (set_local $6
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i32.eq
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const 16)
       )
      )
      (get_local $1)
     )
    )
    (set_local $7
     (get_local $6)
    )
    (set_local $6
     (tee_local $4
      (i32.add
       (get_local $6)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $4)
       (get_local $3)
      )
      (i32.const -24)
     )
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (get_local $2)
     )
    )
    (set_local $6
     (i32.load
      (i32.add
       (get_local $7)
       (i32.const -24)
      )
     )
    )
    (br $label$2)
   )
   (call $eosio_assert
    (i32.xor
     (i32.shr_u
      (tee_local $6
       (call $db_get_i64
        (get_local $1)
        (i32.const 0)
        (i32.const 0)
       )
      )
      (i32.const 31)
     )
     (i32.const 1)
    )
    (i32.const 336)
   )
   (block $label$4
    (block $label$5
     (br_if $label$5
      (i32.lt_u
       (get_local $6)
       (i32.const 513)
      )
     )
     (set_local $4
      (call $malloc
       (get_local $6)
      )
     )
     (br $label$4)
    )
    (i32.store offset=4
     (i32.const 0)
     (tee_local $4
      (i32.sub
       (get_local $9)
       (i32.and
        (i32.add
         (get_local $6)
         (i32.const 15)
        )
        (i32.const -16)
       )
      )
     )
    )
   )
   (drop
    (call $db_get_i64
     (get_local $1)
     (get_local $4)
     (get_local $6)
    )
   )
   (i32.store offset=36
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=32
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=40
    (get_local $8)
    (i32.add
     (get_local $4)
     (get_local $6)
    )
   )
   (block $label$6
    (br_if $label$6
     (i32.lt_u
      (get_local $6)
      (i32.const 513)
     )
    )
    (call $free
     (get_local $4)
    )
   )
   (set_local $4
    (call $_ZN11eosiosystem14refund_requestC2Ev
     (tee_local $6
      (call $_Znwj
       (i32.const 64)
      )
     )
    )
   )
   (i32.store offset=48
    (get_local $6)
    (get_local $0)
   )
   (drop
    (call $_ZN11eosiosystemrsIN5eosio10datastreamIPKcEEEERT_S7_RNS_14refund_requestE
     (i32.add
      (get_local $8)
      (i32.const 32)
     )
     (get_local $4)
    )
   )
   (i32.store offset=52
    (get_local $6)
    (get_local $1)
   )
   (i32.store offset=24
    (get_local $8)
    (get_local $6)
   )
   (i64.store offset=16
    (get_local $8)
    (tee_local $5
     (i64.load
      (get_local $6)
     )
    )
   )
   (i32.store offset=12
    (get_local $8)
    (tee_local $7
     (i32.load offset=52
      (get_local $6)
     )
    )
   )
   (block $label$7
    (block $label$8
     (br_if $label$8
      (i32.ge_u
       (tee_local $4
        (i32.load
         (tee_local $1
          (i32.add
           (get_local $0)
           (i32.const 28)
          )
         )
        )
       )
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 32)
        )
       )
      )
     )
     (i64.store offset=8
      (get_local $4)
      (get_local $5)
     )
     (i32.store offset=16
      (get_local $4)
      (get_local $7)
     )
     (i32.store offset=24
      (get_local $8)
      (i32.const 0)
     )
     (i32.store
      (get_local $4)
      (get_local $6)
     )
     (i32.store
      (get_local $1)
      (i32.add
       (get_local $4)
       (i32.const 24)
      )
     )
     (br $label$7)
    )
    (call $_ZNSt3__16vectorIN5eosio11multi_indexILy13445401747262537728EN11eosiosystem14refund_requestEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_
     (i32.add
      (get_local $0)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 16)
     )
     (i32.add
      (get_local $8)
      (i32.const 12)
     )
    )
   )
   (set_local $4
    (i32.load offset=24
     (get_local $8)
    )
   )
   (i32.store offset=24
    (get_local $8)
    (i32.const 0)
   )
   (br_if $label$2
    (i32.eqz
     (get_local $4)
    )
   )
   (call $_ZdlPv
    (get_local $4)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 48)
   )
  )
  (get_local $6)
 )
 (func $_ZN5eosio11multi_indexILy13445401747262537728EN11eosiosystem14refund_requestEJEE6modifyIZNS1_15system_contract8changebwEyyNS_5assetES6_bE4$_12EEvRKS2_yOT_ (param $0 i32) (param $1 i32) (param $2 i32)
  (local $3 i64)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (set_local $8
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (call $eosio_assert
   (i32.eq
    (i32.load offset=48
     (get_local $1)
    )
    (get_local $0)
   )
   (i32.const 144)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 192)
  )
  (set_local $4
   (i32.load
    (get_local $2)
   )
  )
  (set_local $3
   (i64.load
    (get_local $1)
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $5
   (i64.const 5459781)
  )
  (set_local $6
   (i32.const 0)
  )
  (block $label$0
   (block $label$1
    (loop $label$2
     (br_if $label$1
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $5)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$3
      (br_if $label$3
       (i64.ne
        (i64.and
         (tee_local $5
          (i64.shr_u
           (get_local $5)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$4
       (br_if $label$1
        (i64.ne
         (i64.and
          (tee_local $5
           (i64.shr_u
            (get_local $5)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$4
        (i32.lt_s
         (tee_local $6
          (i32.add
           (get_local $6)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $7
      (i32.const 1)
     )
     (br_if $label$2
      (i32.lt_s
       (tee_local $6
        (i32.add
         (get_local $6)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$0)
    )
   )
   (set_local $7
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $7)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load offset=8
     (get_local $4)
    )
    (i64.const 1397703940)
   )
   (i32.const 1584)
  )
  (block $label$5
   (block $label$6
    (br_if $label$6
     (i64.lt_s
      (i64.load
       (get_local $4)
      )
      (i64.const 0)
     )
    )
    (set_local $4
     (i32.load offset=4
      (get_local $2)
     )
    )
    (call $eosio_assert
     (i32.const 1)
     (i32.const 992)
    )
    (set_local $5
     (i64.const 5459781)
    )
    (set_local $6
     (i32.const 0)
    )
    (block $label$7
     (block $label$8
      (loop $label$9
       (br_if $label$8
        (i32.gt_u
         (i32.add
          (i32.shl
           (i32.wrap/i64
            (get_local $5)
           )
           (i32.const 24)
          )
          (i32.const -1073741825)
         )
         (i32.const 452984830)
        )
       )
       (block $label$10
        (br_if $label$10
         (i64.ne
          (i64.and
           (tee_local $5
            (i64.shr_u
             (get_local $5)
             (i64.const 8)
            )
           )
           (i64.const 255)
          )
          (i64.const 0)
         )
        )
        (loop $label$11
         (br_if $label$8
          (i64.ne
           (i64.and
            (tee_local $5
             (i64.shr_u
              (get_local $5)
              (i64.const 8)
             )
            )
            (i64.const 255)
           )
           (i64.const 0)
          )
         )
         (br_if $label$11
          (i32.lt_s
           (tee_local $6
            (i32.add
             (get_local $6)
             (i32.const 1)
            )
           )
           (i32.const 7)
          )
         )
        )
       )
       (set_local $7
        (i32.const 1)
       )
       (br_if $label$9
        (i32.lt_s
         (tee_local $6
          (i32.add
           (get_local $6)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
       (br $label$7)
      )
     )
     (set_local $7
      (i32.const 0)
     )
    )
    (call $eosio_assert
     (get_local $7)
     (i32.const 704)
    )
    (call $eosio_assert
     (i64.eq
      (i64.load offset=8
       (get_local $4)
      )
      (i64.const 1397703940)
     )
     (i32.const 1584)
    )
    (br_if $label$5
     (i64.gt_s
      (i64.load
       (get_local $4)
      )
      (i64.const -1)
     )
    )
   )
   (i64.store32 offset=8
    (get_local $1)
    (i64.div_u
     (call $current_time)
     (i64.const 1000000)
    )
   )
  )
  (call $eosio_assert
   (i64.eq
    (i64.load offset=8
     (tee_local $6
      (i32.load
       (get_local $2)
      )
     )
    )
    (i64.load
     (tee_local $4
      (i32.add
       (get_local $1)
       (i32.const 24)
      )
     )
    )
   )
   (i32.const 2880)
  )
  (i64.store offset=16
   (get_local $1)
   (tee_local $5
    (i64.sub
     (i64.load offset=16
      (get_local $1)
     )
     (i64.load
      (get_local $6)
     )
    )
   )
  )
  (call $eosio_assert
   (i64.gt_s
    (get_local $5)
    (i64.const -4611686018427387904)
   )
   (i32.const 2928)
  )
  (call $eosio_assert
   (i64.lt_s
    (i64.load offset=16
     (get_local $1)
    )
    (i64.const 4611686018427387904)
   )
   (i32.const 2960)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $5
   (i64.const 5459781)
  )
  (set_local $6
   (i32.const 0)
  )
  (block $label$12
   (block $label$13
    (loop $label$14
     (br_if $label$13
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $5)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$15
      (br_if $label$15
       (i64.ne
        (i64.and
         (tee_local $5
          (i64.shr_u
           (get_local $5)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$16
       (br_if $label$13
        (i64.ne
         (i64.and
          (tee_local $5
           (i64.shr_u
            (get_local $5)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$16
        (i32.lt_s
         (tee_local $6
          (i32.add
           (get_local $6)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $7
      (i32.const 1)
     )
     (br_if $label$14
      (i32.lt_s
       (tee_local $6
        (i32.add
         (get_local $6)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$12)
    )
   )
   (set_local $7
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $7)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (i32.add
      (get_local $1)
      (i32.const 24)
     )
    )
    (i64.const 1397703940)
   )
   (i32.const 1584)
  )
  (block $label$17
   (block $label$18
    (br_if $label$18
     (i64.lt_s
      (tee_local $5
       (i64.load
        (i32.add
         (get_local $1)
         (i32.const 16)
        )
       )
      )
      (i64.const 0)
     )
    )
    (call $eosio_assert
     (i32.const 1)
     (i32.const 992)
    )
    (set_local $5
     (i64.const 5459781)
    )
    (set_local $6
     (i32.const 0)
    )
    (block $label$19
     (block $label$20
      (loop $label$21
       (br_if $label$20
        (i32.gt_u
         (i32.add
          (i32.shl
           (i32.wrap/i64
            (get_local $5)
           )
           (i32.const 24)
          )
          (i32.const -1073741825)
         )
         (i32.const 452984830)
        )
       )
       (block $label$22
        (br_if $label$22
         (i64.ne
          (i64.and
           (tee_local $5
            (i64.shr_u
             (get_local $5)
             (i64.const 8)
            )
           )
           (i64.const 255)
          )
          (i64.const 0)
         )
        )
        (loop $label$23
         (br_if $label$20
          (i64.ne
           (i64.and
            (tee_local $5
             (i64.shr_u
              (get_local $5)
              (i64.const 8)
             )
            )
            (i64.const 255)
           )
           (i64.const 0)
          )
         )
         (br_if $label$23
          (i32.lt_s
           (tee_local $6
            (i32.add
             (get_local $6)
             (i32.const 1)
            )
           )
           (i32.const 7)
          )
         )
        )
       )
       (set_local $7
        (i32.const 1)
       )
       (br_if $label$21
        (i32.lt_s
         (tee_local $6
          (i32.add
           (get_local $6)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
       (br $label$19)
      )
     )
     (set_local $7
      (i32.const 0)
     )
    )
    (call $eosio_assert
     (get_local $7)
     (i32.const 704)
    )
    (i64.store
     (tee_local $6
      (i32.load
       (get_local $2)
      )
     )
     (i64.const 0)
    )
    (set_local $4
     (i32.add
      (get_local $6)
      (i32.const 8)
     )
    )
    (br $label$17)
   )
   (i64.store offset=8
    (tee_local $6
     (i32.load
      (get_local $2)
     )
    )
    (i64.load
     (get_local $4)
    )
   )
   (i64.store
    (get_local $6)
    (i64.sub
     (i64.const 0)
     (get_local $5)
    )
   )
   (call $eosio_assert
    (i32.const 1)
    (i32.const 992)
   )
   (set_local $5
    (i64.const 5459781)
   )
   (set_local $6
    (i32.const 0)
   )
   (block $label$24
    (block $label$25
     (loop $label$26
      (br_if $label$25
       (i32.gt_u
        (i32.add
         (i32.shl
          (i32.wrap/i64
           (get_local $5)
          )
          (i32.const 24)
         )
         (i32.const -1073741825)
        )
        (i32.const 452984830)
       )
      )
      (block $label$27
       (br_if $label$27
        (i64.ne
         (i64.and
          (tee_local $5
           (i64.shr_u
            (get_local $5)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (loop $label$28
        (br_if $label$25
         (i64.ne
          (i64.and
           (tee_local $5
            (i64.shr_u
             (get_local $5)
             (i64.const 8)
            )
           )
           (i64.const 255)
          )
          (i64.const 0)
         )
        )
        (br_if $label$28
         (i32.lt_s
          (tee_local $6
           (i32.add
            (get_local $6)
            (i32.const 1)
           )
          )
          (i32.const 7)
         )
        )
       )
      )
      (set_local $7
       (i32.const 1)
      )
      (br_if $label$26
       (i32.lt_s
        (tee_local $6
         (i32.add
          (get_local $6)
          (i32.const 1)
         )
        )
        (i32.const 7)
       )
      )
      (br $label$24)
     )
    )
    (set_local $7
     (i32.const 0)
    )
   )
   (call $eosio_assert
    (get_local $7)
    (i32.const 704)
   )
   (i64.store
    (i32.add
     (get_local $1)
     (i32.const 16)
    )
    (i64.const 0)
   )
  )
  (i64.store
   (get_local $4)
   (i64.const 1397703940)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load offset=8
     (tee_local $6
      (i32.load offset=4
       (get_local $2)
      )
     )
    )
    (i64.load
     (tee_local $4
      (i32.add
       (get_local $1)
       (i32.const 40)
      )
     )
    )
   )
   (i32.const 2880)
  )
  (i64.store offset=32
   (get_local $1)
   (tee_local $5
    (i64.sub
     (i64.load offset=32
      (get_local $1)
     )
     (i64.load
      (get_local $6)
     )
    )
   )
  )
  (call $eosio_assert
   (i64.gt_s
    (get_local $5)
    (i64.const -4611686018427387904)
   )
   (i32.const 2928)
  )
  (call $eosio_assert
   (i64.lt_s
    (i64.load offset=32
     (get_local $1)
    )
    (i64.const 4611686018427387904)
   )
   (i32.const 2960)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $5
   (i64.const 5459781)
  )
  (set_local $6
   (i32.const 0)
  )
  (block $label$29
   (block $label$30
    (loop $label$31
     (br_if $label$30
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $5)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$32
      (br_if $label$32
       (i64.ne
        (i64.and
         (tee_local $5
          (i64.shr_u
           (get_local $5)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$33
       (br_if $label$30
        (i64.ne
         (i64.and
          (tee_local $5
           (i64.shr_u
            (get_local $5)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$33
        (i32.lt_s
         (tee_local $6
          (i32.add
           (get_local $6)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $7
      (i32.const 1)
     )
     (br_if $label$31
      (i32.lt_s
       (tee_local $6
        (i32.add
         (get_local $6)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$29)
    )
   )
   (set_local $7
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $7)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (i32.add
      (get_local $1)
      (i32.const 40)
     )
    )
    (i64.const 1397703940)
   )
   (i32.const 1584)
  )
  (block $label$34
   (block $label$35
    (br_if $label$35
     (i64.lt_s
      (tee_local $5
       (i64.load
        (i32.add
         (get_local $1)
         (i32.const 32)
        )
       )
      )
      (i64.const 0)
     )
    )
    (call $eosio_assert
     (i32.const 1)
     (i32.const 992)
    )
    (set_local $5
     (i64.const 5459781)
    )
    (set_local $6
     (i32.const 0)
    )
    (block $label$36
     (block $label$37
      (loop $label$38
       (br_if $label$37
        (i32.gt_u
         (i32.add
          (i32.shl
           (i32.wrap/i64
            (get_local $5)
           )
           (i32.const 24)
          )
          (i32.const -1073741825)
         )
         (i32.const 452984830)
        )
       )
       (block $label$39
        (br_if $label$39
         (i64.ne
          (i64.and
           (tee_local $5
            (i64.shr_u
             (get_local $5)
             (i64.const 8)
            )
           )
           (i64.const 255)
          )
          (i64.const 0)
         )
        )
        (loop $label$40
         (br_if $label$37
          (i64.ne
           (i64.and
            (tee_local $5
             (i64.shr_u
              (get_local $5)
              (i64.const 8)
             )
            )
            (i64.const 255)
           )
           (i64.const 0)
          )
         )
         (br_if $label$40
          (i32.lt_s
           (tee_local $6
            (i32.add
             (get_local $6)
             (i32.const 1)
            )
           )
           (i32.const 7)
          )
         )
        )
       )
       (set_local $7
        (i32.const 1)
       )
       (br_if $label$38
        (i32.lt_s
         (tee_local $6
          (i32.add
           (get_local $6)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
       (br $label$36)
      )
     )
     (set_local $7
      (i32.const 0)
     )
    )
    (call $eosio_assert
     (get_local $7)
     (i32.const 704)
    )
    (i64.store
     (tee_local $6
      (i32.load
       (i32.add
        (get_local $2)
        (i32.const 4)
       )
      )
     )
     (i64.const 0)
    )
    (set_local $4
     (i32.add
      (get_local $6)
      (i32.const 8)
     )
    )
    (br $label$34)
   )
   (i64.store offset=8
    (tee_local $6
     (i32.load
      (i32.add
       (get_local $2)
       (i32.const 4)
      )
     )
    )
    (i64.load
     (get_local $4)
    )
   )
   (i64.store
    (get_local $6)
    (i64.sub
     (i64.const 0)
     (get_local $5)
    )
   )
   (call $eosio_assert
    (i32.const 1)
    (i32.const 992)
   )
   (set_local $5
    (i64.const 5459781)
   )
   (set_local $6
    (i32.const 0)
   )
   (block $label$41
    (block $label$42
     (loop $label$43
      (br_if $label$42
       (i32.gt_u
        (i32.add
         (i32.shl
          (i32.wrap/i64
           (get_local $5)
          )
          (i32.const 24)
         )
         (i32.const -1073741825)
        )
        (i32.const 452984830)
       )
      )
      (block $label$44
       (br_if $label$44
        (i64.ne
         (i64.and
          (tee_local $5
           (i64.shr_u
            (get_local $5)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (loop $label$45
        (br_if $label$42
         (i64.ne
          (i64.and
           (tee_local $5
            (i64.shr_u
             (get_local $5)
             (i64.const 8)
            )
           )
           (i64.const 255)
          )
          (i64.const 0)
         )
        )
        (br_if $label$45
         (i32.lt_s
          (tee_local $6
           (i32.add
            (get_local $6)
            (i32.const 1)
           )
          )
          (i32.const 7)
         )
        )
       )
      )
      (set_local $2
       (i32.const 1)
      )
      (br_if $label$43
       (i32.lt_s
        (tee_local $6
         (i32.add
          (get_local $6)
          (i32.const 1)
         )
        )
        (i32.const 7)
       )
      )
      (br $label$41)
     )
    )
    (set_local $2
     (i32.const 0)
    )
   )
   (call $eosio_assert
    (get_local $2)
    (i32.const 704)
   )
   (i64.store
    (i32.add
     (get_local $1)
     (i32.const 32)
    )
    (i64.const 0)
   )
  )
  (i64.store
   (get_local $4)
   (i64.const 1397703940)
  )
  (call $eosio_assert
   (i64.eq
    (get_local $3)
    (i64.load
     (get_local $1)
    )
   )
   (i32.const 256)
  )
  (i32.store offset=4
   (i32.const 0)
   (tee_local $6
    (i32.add
     (tee_local $2
      (get_local $9)
     )
     (i32.const -48)
    )
   )
  )
  (i32.store offset=4
   (get_local $8)
   (get_local $6)
  )
  (i32.store
   (get_local $8)
   (get_local $6)
  )
  (i32.store offset=8
   (get_local $8)
   (i32.add
    (get_local $2)
    (i32.const -4)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_14refund_requestE
    (get_local $8)
    (get_local $1)
   )
  )
  (call $db_update_i64
   (i32.load offset=52
    (get_local $1)
   )
   (i64.const 0)
   (get_local $6)
   (i32.const 44)
  )
  (block $label$46
   (br_if $label$46
    (i64.lt_u
     (get_local $3)
     (i64.load offset=16
      (get_local $0)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $0)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $3)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $3)
      (i64.const -3)
     )
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
 )
 (func $_ZN5eosio11multi_indexILy13445401747262537728EN11eosiosystem14refund_requestEJEE5eraseERKS2_ (param $0 i32) (param $1 i32)
  (local $2 i64)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (call $eosio_assert
   (i32.eq
    (i32.load offset=48
     (get_local $1)
    )
    (get_local $0)
   )
   (i32.const 2704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 2752)
  )
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (tee_local $5
        (i32.add
         (get_local $0)
         (i32.const 28)
        )
       )
      )
     )
     (tee_local $3
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (set_local $2
    (i64.load
     (get_local $1)
    )
   )
   (set_local $6
    (i32.sub
     (i32.const 0)
     (get_local $3)
    )
   )
   (set_local $8
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i64.eq
      (i64.load
       (i32.load
        (get_local $8)
       )
      )
      (get_local $2)
     )
    )
    (set_local $7
     (get_local $8)
    )
    (set_local $8
     (tee_local $4
      (i32.add
       (get_local $8)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $4)
       (get_local $6)
      )
      (i32.const -24)
     )
    )
   )
  )
  (call $eosio_assert
   (i32.ne
    (get_local $7)
    (get_local $3)
   )
   (i32.const 2816)
  )
  (set_local $8
   (i32.add
    (get_local $7)
    (i32.const -24)
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (tee_local $4
       (i32.load
        (get_local $5)
       )
      )
     )
    )
    (set_local $3
     (i32.sub
      (i32.const 0)
      (get_local $4)
     )
    )
    (set_local $7
     (get_local $8)
    )
    (loop $label$4
     (set_local $6
      (i32.load
       (tee_local $8
        (i32.add
         (get_local $7)
         (i32.const 24)
        )
       )
      )
     )
     (i32.store
      (get_local $8)
      (i32.const 0)
     )
     (set_local $4
      (i32.load
       (get_local $7)
      )
     )
     (i32.store
      (get_local $7)
      (get_local $6)
     )
     (block $label$5
      (br_if $label$5
       (i32.eqz
        (get_local $4)
       )
      )
      (call $_ZdlPv
       (get_local $4)
      )
     )
     (i32.store
      (i32.add
       (get_local $7)
       (i32.const 16)
      )
      (i32.load
       (i32.add
        (get_local $7)
        (i32.const 40)
       )
      )
     )
     (i64.store
      (i32.add
       (get_local $7)
       (i32.const 8)
      )
      (i64.load
       (i32.add
        (get_local $7)
        (i32.const 32)
       )
      )
     )
     (set_local $7
      (get_local $8)
     )
     (br_if $label$4
      (i32.ne
       (i32.add
        (get_local $8)
        (get_local $3)
       )
       (i32.const -24)
      )
     )
    )
    (br_if $label$2
     (i32.eq
      (tee_local $7
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 28)
        )
       )
      )
      (get_local $8)
     )
    )
   )
   (loop $label$6
    (set_local $4
     (i32.load
      (tee_local $7
       (i32.add
        (get_local $7)
        (i32.const -24)
       )
      )
     )
    )
    (i32.store
     (get_local $7)
     (i32.const 0)
    )
    (block $label$7
     (br_if $label$7
      (i32.eqz
       (get_local $4)
      )
     )
     (call $_ZdlPv
      (get_local $4)
     )
    )
    (br_if $label$6
     (i32.ne
      (get_local $8)
      (get_local $7)
     )
    )
   )
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 28)
   )
   (get_local $8)
  )
  (call $db_remove_i64
   (i32.load offset=52
    (get_local $1)
   )
  )
 )
 (func $_ZN11eosiosystem14refund_requestC2Ev (param $0 i32) (result i32)
  (local $1 i64)
  (local $2 i32)
  (local $3 i32)
  (i64.store offset=16
   (get_local $0)
   (i64.const 0)
  )
  (i64.store
   (tee_local $2
    (i32.add
     (get_local $0)
     (i32.const 24)
    )
   )
   (i64.const 1397703940)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $1
   (i64.shr_u
    (i64.load
     (get_local $2)
    )
    (i64.const 8)
   )
  )
  (set_local $2
   (i32.const 0)
  )
  (block $label$0
   (block $label$1
    (loop $label$2
     (br_if $label$1
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $1)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$3
      (br_if $label$3
       (i64.ne
        (i64.and
         (tee_local $1
          (i64.shr_u
           (get_local $1)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$4
       (br_if $label$1
        (i64.ne
         (i64.and
          (tee_local $1
           (i64.shr_u
            (get_local $1)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$4
        (i32.lt_s
         (tee_local $2
          (i32.add
           (get_local $2)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $3
      (i32.const 1)
     )
     (br_if $label$2
      (i32.lt_s
       (tee_local $2
        (i32.add
         (get_local $2)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$0)
    )
   )
   (set_local $3
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $3)
   (i32.const 704)
  )
  (i64.store
   (tee_local $2
    (i32.add
     (get_local $0)
     (i32.const 40)
    )
   )
   (i64.const 1397703940)
  )
  (i64.store offset=32
   (get_local $0)
   (i64.const 0)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $1
   (i64.shr_u
    (i64.load
     (get_local $2)
    )
    (i64.const 8)
   )
  )
  (set_local $2
   (i32.const 0)
  )
  (block $label$5
   (block $label$6
    (loop $label$7
     (br_if $label$6
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $1)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$8
      (br_if $label$8
       (i64.ne
        (i64.and
         (tee_local $1
          (i64.shr_u
           (get_local $1)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$9
       (br_if $label$6
        (i64.ne
         (i64.and
          (tee_local $1
           (i64.shr_u
            (get_local $1)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$9
        (i32.lt_s
         (tee_local $2
          (i32.add
           (get_local $2)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $3
      (i32.const 1)
     )
     (br_if $label$7
      (i32.lt_s
       (tee_local $2
        (i32.add
         (get_local $2)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$5)
    )
   )
   (set_local $3
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $3)
   (i32.const 704)
  )
  (get_local $0)
 )
 (func $_ZZN5eosio11multi_indexILy13445401747262537728EN11eosiosystem14refund_requestEJEE7emplaceIZNS1_15system_contract8changebwEyyNS_5assetES6_bE4$_13EENS3_14const_iteratorEyOT_ENKUlRS9_E_clINS3_4itemEEEDaSB_ (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (set_local $8
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (i64.store
   (get_local $1)
   (i64.load
    (i32.load
     (tee_local $3
      (i32.load offset=4
       (get_local $0)
      )
     )
    )
   )
  )
  (set_local $2
   (i32.load
    (get_local $0)
   )
  )
  (set_local $4
   (i32.load offset=4
    (get_local $3)
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $5
   (i64.const 5459781)
  )
  (set_local $6
   (i32.const 0)
  )
  (block $label$0
   (block $label$1
    (loop $label$2
     (br_if $label$1
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $5)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$3
      (br_if $label$3
       (i64.ne
        (i64.and
         (tee_local $5
          (i64.shr_u
           (get_local $5)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$4
       (br_if $label$1
        (i64.ne
         (i64.and
          (tee_local $5
           (i64.shr_u
            (get_local $5)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$4
        (i32.lt_s
         (tee_local $6
          (i32.add
           (get_local $6)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $7
      (i32.const 1)
     )
     (br_if $label$2
      (i32.lt_s
       (tee_local $6
        (i32.add
         (get_local $6)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$0)
    )
   )
   (set_local $7
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $7)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load offset=8
     (get_local $4)
    )
    (i64.const 1397703940)
   )
   (i32.const 1584)
  )
  (block $label$5
   (br_if $label$5
    (i64.ge_s
     (i64.load
      (get_local $4)
     )
     (i64.const 0)
    )
   )
   (set_local $5
    (i64.load
     (tee_local $6
      (i32.load
       (i32.add
        (get_local $3)
        (i32.const 4)
       )
      )
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $1)
     (i32.const 24)
    )
    (i64.load offset=8
     (get_local $6)
    )
   )
   (i64.store offset=16
    (get_local $1)
    (i64.sub
     (i64.const 0)
     (get_local $5)
    )
   )
   (call $eosio_assert
    (i32.const 1)
    (i32.const 992)
   )
   (set_local $5
    (i64.const 5459781)
   )
   (set_local $6
    (i32.const 0)
   )
   (block $label$6
    (block $label$7
     (loop $label$8
      (br_if $label$7
       (i32.gt_u
        (i32.add
         (i32.shl
          (i32.wrap/i64
           (get_local $5)
          )
          (i32.const 24)
         )
         (i32.const -1073741825)
        )
        (i32.const 452984830)
       )
      )
      (block $label$9
       (br_if $label$9
        (i64.ne
         (i64.and
          (tee_local $5
           (i64.shr_u
            (get_local $5)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (loop $label$10
        (br_if $label$7
         (i64.ne
          (i64.and
           (tee_local $5
            (i64.shr_u
             (get_local $5)
             (i64.const 8)
            )
           )
           (i64.const 255)
          )
          (i64.const 0)
         )
        )
        (br_if $label$10
         (i32.lt_s
          (tee_local $6
           (i32.add
            (get_local $6)
            (i32.const 1)
           )
          )
          (i32.const 7)
         )
        )
       )
      )
      (set_local $7
       (i32.const 1)
      )
      (br_if $label$8
       (i32.lt_s
        (tee_local $6
         (i32.add
          (get_local $6)
          (i32.const 1)
         )
        )
        (i32.const 7)
       )
      )
      (br $label$6)
     )
    )
    (set_local $7
     (i32.const 0)
    )
   )
   (call $eosio_assert
    (get_local $7)
    (i32.const 704)
   )
   (i64.store offset=8
    (tee_local $6
     (i32.load
      (i32.add
       (get_local $3)
       (i32.const 4)
      )
     )
    )
    (i64.const 1397703940)
   )
   (i64.store
    (get_local $6)
    (i64.const 0)
   )
  )
  (set_local $4
   (i32.load offset=8
    (get_local $3)
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $5
   (i64.const 5459781)
  )
  (set_local $6
   (i32.const 0)
  )
  (block $label$11
   (block $label$12
    (loop $label$13
     (br_if $label$12
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $5)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$14
      (br_if $label$14
       (i64.ne
        (i64.and
         (tee_local $5
          (i64.shr_u
           (get_local $5)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$15
       (br_if $label$12
        (i64.ne
         (i64.and
          (tee_local $5
           (i64.shr_u
            (get_local $5)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$15
        (i32.lt_s
         (tee_local $6
          (i32.add
           (get_local $6)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $7
      (i32.const 1)
     )
     (br_if $label$13
      (i32.lt_s
       (tee_local $6
        (i32.add
         (get_local $6)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$11)
    )
   )
   (set_local $7
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $7)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load offset=8
     (get_local $4)
    )
    (i64.const 1397703940)
   )
   (i32.const 1584)
  )
  (block $label$16
   (br_if $label$16
    (i64.ge_s
     (i64.load
      (get_local $4)
     )
     (i64.const 0)
    )
   )
   (set_local $5
    (i64.load
     (tee_local $6
      (i32.load
       (i32.add
        (get_local $3)
        (i32.const 8)
       )
      )
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $1)
     (i32.const 40)
    )
    (i64.load offset=8
     (get_local $6)
    )
   )
   (i64.store offset=32
    (get_local $1)
    (i64.sub
     (i64.const 0)
     (get_local $5)
    )
   )
   (call $eosio_assert
    (i32.const 1)
    (i32.const 992)
   )
   (set_local $5
    (i64.const 5459781)
   )
   (set_local $6
    (i32.const 0)
   )
   (block $label$17
    (block $label$18
     (loop $label$19
      (br_if $label$18
       (i32.gt_u
        (i32.add
         (i32.shl
          (i32.wrap/i64
           (get_local $5)
          )
          (i32.const 24)
         )
         (i32.const -1073741825)
        )
        (i32.const 452984830)
       )
      )
      (block $label$20
       (br_if $label$20
        (i64.ne
         (i64.and
          (tee_local $5
           (i64.shr_u
            (get_local $5)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (loop $label$21
        (br_if $label$18
         (i64.ne
          (i64.and
           (tee_local $5
            (i64.shr_u
             (get_local $5)
             (i64.const 8)
            )
           )
           (i64.const 255)
          )
          (i64.const 0)
         )
        )
        (br_if $label$21
         (i32.lt_s
          (tee_local $6
           (i32.add
            (get_local $6)
            (i32.const 1)
           )
          )
          (i32.const 7)
         )
        )
       )
      )
      (set_local $7
       (i32.const 1)
      )
      (br_if $label$19
       (i32.lt_s
        (tee_local $6
         (i32.add
          (get_local $6)
          (i32.const 1)
         )
        )
        (i32.const 7)
       )
      )
      (br $label$17)
     )
    )
    (set_local $7
     (i32.const 0)
    )
   )
   (call $eosio_assert
    (get_local $7)
    (i32.const 704)
   )
   (i64.store offset=8
    (tee_local $6
     (i32.load
      (i32.add
       (get_local $3)
       (i32.const 8)
      )
     )
    )
    (i64.const 1397703940)
   )
   (i64.store
    (get_local $6)
    (i64.const 0)
   )
  )
  (i64.store32 offset=8
   (get_local $1)
   (i64.div_u
    (call $current_time)
    (i64.const 1000000)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (tee_local $6
    (i32.add
     (tee_local $7
      (get_local $9)
     )
     (i32.const -48)
    )
   )
  )
  (i32.store offset=4
   (get_local $8)
   (get_local $6)
  )
  (i32.store
   (get_local $8)
   (get_local $6)
  )
  (i32.store offset=8
   (get_local $8)
   (i32.add
    (get_local $7)
    (i32.const -4)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_14refund_requestE
    (get_local $8)
    (get_local $1)
   )
  )
  (i32.store offset=52
   (get_local $1)
   (call $db_store_i64
    (i64.load offset=8
     (get_local $2)
    )
    (i64.const -5001342326447013888)
    (i64.load
     (i32.load offset=8
      (get_local $0)
     )
    )
    (tee_local $5
     (i64.load
      (get_local $1)
     )
    )
    (get_local $6)
    (i32.const 44)
   )
  )
  (block $label$22
   (br_if $label$22
    (i64.lt_u
     (get_local $5)
     (i64.load offset=16
      (get_local $2)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $2)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $5)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $5)
      (i64.const -3)
     )
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
 )
 (func $_ZNSt3__16vectorIN5eosio11multi_indexILy13445401747262537728EN11eosiosystem14refund_requestEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_ (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.ge_u
      (tee_local $5
       (i32.add
        (tee_local $4
         (i32.div_s
          (i32.sub
           (i32.load offset=4
            (get_local $0)
           )
           (tee_local $6
            (i32.load
             (get_local $0)
            )
           )
          )
          (i32.const 24)
         )
        )
        (i32.const 1)
       )
      )
      (i32.const 178956971)
     )
    )
    (set_local $7
     (i32.const 178956970)
    )
    (block $label$2
     (block $label$3
      (br_if $label$3
       (i32.gt_u
        (tee_local $6
         (i32.div_s
          (i32.sub
           (i32.load offset=8
            (get_local $0)
           )
           (get_local $6)
          )
          (i32.const 24)
         )
        )
        (i32.const 89478484)
       )
      )
      (br_if $label$2
       (i32.eqz
        (tee_local $7
         (select
          (get_local $5)
          (tee_local $7
           (i32.shl
            (get_local $6)
            (i32.const 1)
           )
          )
          (i32.lt_u
           (get_local $7)
           (get_local $5)
          )
         )
        )
       )
      )
     )
     (set_local $6
      (call $_Znwj
       (i32.mul
        (get_local $7)
        (i32.const 24)
       )
      )
     )
     (br $label$0)
    )
    (set_local $7
     (i32.const 0)
    )
    (set_local $6
     (i32.const 0)
    )
    (br $label$0)
   )
   (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
    (get_local $0)
   )
   (unreachable)
  )
  (set_local $5
   (i32.load
    (get_local $1)
   )
  )
  (i32.store
   (get_local $1)
   (i32.const 0)
  )
  (i32.store
   (tee_local $1
    (i32.add
     (get_local $6)
     (i32.mul
      (get_local $4)
      (i32.const 24)
     )
    )
   )
   (get_local $5)
  )
  (i64.store offset=8
   (get_local $1)
   (i64.load
    (get_local $2)
   )
  )
  (i32.store offset=16
   (get_local $1)
   (i32.load
    (get_local $3)
   )
  )
  (set_local $4
   (i32.add
    (get_local $6)
    (i32.mul
     (get_local $7)
     (i32.const 24)
    )
   )
  )
  (set_local $5
   (i32.add
    (get_local $1)
    (i32.const 24)
   )
  )
  (block $label$4
   (block $label$5
    (br_if $label$5
     (i32.eq
      (tee_local $6
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 4)
        )
       )
      )
      (tee_local $7
       (i32.load
        (get_local $0)
       )
      )
     )
    )
    (loop $label$6
     (set_local $3
      (i32.load
       (tee_local $2
        (i32.add
         (get_local $6)
         (i32.const -24)
        )
       )
      )
     )
     (i32.store
      (get_local $2)
      (i32.const 0)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
      (get_local $3)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -8)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -8)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -12)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -12)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -16)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -16)
       )
      )
     )
     (set_local $1
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
     )
     (set_local $6
      (get_local $2)
     )
     (br_if $label$6
      (i32.ne
       (get_local $7)
       (get_local $2)
      )
     )
    )
    (set_local $7
     (i32.load
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (set_local $6
     (i32.load
      (get_local $0)
     )
    )
    (br $label$4)
   )
   (set_local $6
    (get_local $7)
   )
  )
  (i32.store
   (get_local $0)
   (get_local $1)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
   (get_local $5)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
   (get_local $4)
  )
  (block $label$7
   (br_if $label$7
    (i32.eq
     (get_local $7)
     (get_local $6)
    )
   )
   (loop $label$8
    (set_local $1
     (i32.load
      (tee_local $7
       (i32.add
        (get_local $7)
        (i32.const -24)
       )
      )
     )
    )
    (i32.store
     (get_local $7)
     (i32.const 0)
    )
    (block $label$9
     (br_if $label$9
      (i32.eqz
       (get_local $1)
      )
     )
     (call $_ZdlPv
      (get_local $1)
     )
    )
    (br_if $label$8
     (i32.ne
      (get_local $6)
      (get_local $7)
     )
    )
   )
  )
  (block $label$10
   (br_if $label$10
    (i32.eqz
     (get_local $6)
    )
   )
   (call $_ZdlPv
    (get_local $6)
   )
  )
 )
 (func $_ZNSt3__16vectorIN5eosio6actionENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJNS1_16permission_levelERyyS8_EEEvDpOT_ (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32) (param $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.ge_u
      (tee_local $7
       (i32.add
        (tee_local $5
         (i32.div_s
          (i32.sub
           (i32.load offset=4
            (get_local $0)
           )
           (tee_local $8
            (i32.load
             (get_local $0)
            )
           )
          )
          (i32.const 40)
         )
        )
        (i32.const 1)
       )
      )
      (i32.const 107374183)
     )
    )
    (set_local $6
     (i32.const 107374182)
    )
    (block $label$2
     (block $label$3
      (br_if $label$3
       (i32.gt_u
        (tee_local $8
         (i32.div_s
          (i32.sub
           (i32.load offset=8
            (get_local $0)
           )
           (get_local $8)
          )
          (i32.const 40)
         )
        )
        (i32.const 53687090)
       )
      )
      (br_if $label$2
       (i32.eqz
        (tee_local $6
         (select
          (get_local $7)
          (tee_local $8
           (i32.shl
            (get_local $8)
            (i32.const 1)
           )
          )
          (i32.lt_u
           (get_local $8)
           (get_local $7)
          )
         )
        )
       )
      )
     )
     (set_local $7
      (call $_Znwj
       (i32.mul
        (get_local $6)
        (i32.const 40)
       )
      )
     )
     (br $label$0)
    )
    (set_local $6
     (i32.const 0)
    )
    (set_local $7
     (i32.const 0)
    )
    (br $label$0)
   )
   (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
    (get_local $0)
   )
   (unreachable)
  )
  (i64.store
   (tee_local $8
    (i32.add
     (get_local $7)
     (i32.mul
      (get_local $5)
      (i32.const 40)
     )
    )
   )
   (i64.load
    (get_local $2)
   )
  )
  (i64.store offset=8
   (get_local $8)
   (i64.load
    (get_local $3)
   )
  )
  (i64.store offset=16 align=4
   (get_local $8)
   (i64.const 0)
  )
  (i32.store
   (tee_local $3
    (i32.add
     (get_local $8)
     (i32.const 24)
    )
   )
   (i32.const 0)
  )
  (i32.store offset=16
   (get_local $8)
   (tee_local $2
    (call $_Znwj
     (i32.const 16)
    )
   )
  )
  (i32.store
   (get_local $3)
   (tee_local $5
    (i32.add
     (get_local $2)
     (i32.const 16)
    )
   )
  )
  (i32.store
   (i32.add
    (get_local $2)
    (i32.const 12)
   )
   (i32.load
    (i32.add
     (get_local $1)
     (i32.const 12)
    )
   )
  )
  (i32.store
   (i32.add
    (get_local $2)
    (i32.const 8)
   )
   (i32.load
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
   )
  )
  (i32.store
   (i32.add
    (get_local $2)
    (i32.const 4)
   )
   (i32.load
    (i32.add
     (get_local $1)
     (i32.const 4)
    )
   )
  )
  (i32.store
   (get_local $2)
   (i32.load
    (get_local $1)
   )
  )
  (i32.store
   (i32.add
    (get_local $8)
    (i32.const 20)
   )
   (get_local $5)
  )
  (i32.store offset=28
   (get_local $8)
   (i32.const 0)
  )
  (i32.store
   (tee_local $2
    (i32.add
     (get_local $8)
     (i32.const 32)
    )
   )
   (i32.const 0)
  )
  (i32.store
   (i32.add
    (get_local $8)
    (i32.const 36)
   )
   (i32.const 0)
  )
  (call $_ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj
   (i32.add
    (get_local $8)
    (i32.const 28)
   )
   (i32.const 8)
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load
      (get_local $2)
     )
     (tee_local $2
      (i32.load offset=28
       (get_local $8)
      )
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (get_local $2)
    (get_local $4)
    (i32.const 8)
   )
  )
  (set_local $4
   (i32.add
    (get_local $7)
    (i32.mul
     (get_local $6)
     (i32.const 40)
    )
   )
  )
  (set_local $5
   (i32.add
    (get_local $8)
    (i32.const 40)
   )
  )
  (block $label$4
   (block $label$5
    (br_if $label$5
     (i32.eq
      (tee_local $1
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 4)
        )
       )
      )
      (tee_local $2
       (i32.load
        (get_local $0)
       )
      )
     )
    )
    (set_local $3
     (i32.sub
      (i32.const 0)
      (get_local $2)
     )
    )
    (set_local $2
     (i32.add
      (get_local $1)
      (i32.const -20)
     )
    )
    (loop $label$6
     (i64.store
      (i32.add
       (get_local $8)
       (i32.const -32)
      )
      (i64.load
       (i32.add
        (get_local $2)
        (i32.const -12)
       )
      )
     )
     (i64.store
      (i32.add
       (get_local $8)
       (i32.const -40)
      )
      (i64.load
       (i32.add
        (get_local $2)
        (i32.const -20)
       )
      )
     )
     (i64.store align=4
      (tee_local $1
       (i32.add
        (get_local $8)
        (i32.const -24)
       )
      )
      (i64.const 0)
     )
     (i32.store
      (tee_local $6
       (i32.add
        (get_local $8)
        (i32.const -16)
       )
      )
      (i32.const 0)
     )
     (i32.store
      (get_local $1)
      (i32.load
       (tee_local $7
        (i32.add
         (get_local $2)
         (i32.const -4)
        )
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $8)
       (i32.const -20)
      )
      (i32.load
       (get_local $2)
      )
     )
     (i32.store
      (get_local $6)
      (i32.load
       (tee_local $1
        (i32.add
         (get_local $2)
         (i32.const 4)
        )
       )
      )
     )
     (i32.store
      (get_local $1)
      (i32.const 0)
     )
     (i64.store align=4
      (tee_local $1
       (i32.add
        (get_local $8)
        (i32.const -12)
       )
      )
      (i64.const 0)
     )
     (i64.store align=4
      (get_local $7)
      (i64.const 0)
     )
     (i32.store
      (tee_local $6
       (i32.add
        (get_local $8)
        (i32.const -4)
       )
      )
      (i32.const 0)
     )
     (i32.store
      (get_local $1)
      (i32.load
       (tee_local $7
        (i32.add
         (get_local $2)
         (i32.const 8)
        )
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $8)
       (i32.const -8)
      )
      (i32.load
       (i32.add
        (get_local $2)
        (i32.const 12)
       )
      )
     )
     (i32.store
      (get_local $6)
      (i32.load
       (tee_local $1
        (i32.add
         (get_local $2)
         (i32.const 16)
        )
       )
      )
     )
     (i32.store
      (get_local $1)
      (i32.const 0)
     )
     (i64.store align=4
      (get_local $7)
      (i64.const 0)
     )
     (set_local $8
      (i32.add
       (get_local $8)
       (i32.const -40)
      )
     )
     (br_if $label$6
      (i32.ne
       (i32.add
        (tee_local $2
         (i32.add
          (get_local $2)
          (i32.const -40)
         )
        )
        (get_local $3)
       )
       (i32.const -20)
      )
     )
    )
    (set_local $2
     (i32.load
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (set_local $6
     (i32.load
      (get_local $0)
     )
    )
    (br $label$4)
   )
   (set_local $6
    (get_local $2)
   )
  )
  (i32.store
   (get_local $0)
   (get_local $8)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
   (get_local $5)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
   (get_local $4)
  )
  (block $label$7
   (br_if $label$7
    (i32.eq
     (get_local $2)
     (get_local $6)
    )
   )
   (set_local $1
    (i32.sub
     (i32.const 0)
     (get_local $6)
    )
   )
   (set_local $8
    (i32.add
     (get_local $2)
     (i32.const -24)
    )
   )
   (loop $label$8
    (block $label$9
     (br_if $label$9
      (i32.eqz
       (tee_local $2
        (i32.load
         (i32.add
          (get_local $8)
          (i32.const 12)
         )
        )
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $8)
       (i32.const 16)
      )
      (get_local $2)
     )
     (call $_ZdlPv
      (get_local $2)
     )
    )
    (block $label$10
     (br_if $label$10
      (i32.eqz
       (tee_local $2
        (i32.load
         (get_local $8)
        )
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $8)
       (i32.const 4)
      )
      (get_local $2)
     )
     (call $_ZdlPv
      (get_local $2)
     )
    )
    (br_if $label$8
     (i32.ne
      (i32.add
       (tee_local $8
        (i32.add
         (get_local $8)
         (i32.const -40)
        )
       )
       (get_local $1)
      )
      (i32.const -24)
     )
    )
   )
  )
  (block $label$11
   (br_if $label$11
    (i32.eqz
     (get_local $6)
    )
   )
   (call $_ZdlPv
    (get_local $6)
   )
  )
 )
 (func $_ZN5eosio4packINS_11transactionEEENSt3__16vectorIcNS2_9allocatorIcEEEERKT_ (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $4
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (set_local $3
   (i32.const 0)
  )
  (i32.store offset=8
   (get_local $0)
   (i32.const 0)
  )
  (i64.store align=4
   (get_local $0)
   (i64.const 0)
  )
  (i32.store
   (get_local $4)
   (i32.const 0)
  )
  (drop
   (call $_ZN5eosiolsINS_10datastreamIjEEEERT_S4_RKNS_11transactionE
    (get_local $4)
    (get_local $1)
   )
  )
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.eqz
      (tee_local $2
       (i32.load
        (get_local $4)
       )
      )
     )
    )
    (call $_ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj
     (get_local $0)
     (get_local $2)
    )
    (set_local $3
     (i32.load
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (set_local $0
     (i32.load
      (get_local $0)
     )
    )
    (br $label$0)
   )
   (set_local $0
    (i32.const 0)
   )
  )
  (i32.store offset=4
   (get_local $4)
   (get_local $0)
  )
  (i32.store
   (get_local $4)
   (get_local $0)
  )
  (i32.store offset=8
   (get_local $4)
   (get_local $3)
  )
  (drop
   (call $_ZN5eosiolsINS_10datastreamIPcEEEERT_S5_RKNS_18transaction_headerE
    (get_local $4)
    (get_local $1)
   )
  )
  (drop
   (call $_ZN5eosiolsINS_10datastreamIPcEENSt3__15tupleIJtNS4_6vectorIcNS4_9allocatorIcEEEEEEEEERT_SC_RKNS6_IT0_NS7_ISD_EEEE
    (call $_ZN5eosiolsINS_10datastreamIPcEENS_6actionEEERT_S6_RKNSt3__16vectorIT0_NS7_9allocatorIS9_EEEE
     (call $_ZN5eosiolsINS_10datastreamIPcEENS_6actionEEERT_S6_RKNSt3__16vectorIT0_NS7_9allocatorIS9_EEEE
      (get_local $4)
      (i32.add
       (get_local $1)
       (i32.const 24)
      )
     )
     (i32.add
      (get_local $1)
      (i32.const 36)
     )
    )
    (i32.add
     (get_local $1)
     (i32.const 48)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $4)
    (i32.const 16)
   )
  )
 )
 (func $_ZN5eosio11transactionD2Ev (param $0 i32) (result i32)
  (local $1 i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (block $label$0
   (br_if $label$0
    (i32.eqz
     (tee_local $1
      (i32.load offset=48
       (get_local $0)
      )
     )
    )
   )
   (block $label$1
    (block $label$2
     (br_if $label$2
      (i32.eq
       (tee_local $5
        (i32.load
         (tee_local $4
          (i32.add
           (get_local $0)
           (i32.const 52)
          )
         )
        )
       )
       (get_local $1)
      )
     )
     (set_local $2
      (i32.sub
       (i32.const 0)
       (get_local $1)
      )
     )
     (set_local $5
      (i32.add
       (get_local $5)
       (i32.const -12)
      )
     )
     (loop $label$3
      (block $label$4
       (br_if $label$4
        (i32.eqz
         (tee_local $3
          (i32.load
           (get_local $5)
          )
         )
        )
       )
       (i32.store
        (i32.add
         (get_local $5)
         (i32.const 4)
        )
        (get_local $3)
       )
       (call $_ZdlPv
        (get_local $3)
       )
      )
      (br_if $label$3
       (i32.ne
        (i32.add
         (tee_local $5
          (i32.add
           (get_local $5)
           (i32.const -16)
          )
         )
         (get_local $2)
        )
        (i32.const -12)
       )
      )
     )
     (set_local $5
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 48)
       )
      )
     )
     (br $label$1)
    )
    (set_local $5
     (get_local $1)
    )
   )
   (i32.store
    (get_local $4)
    (get_local $1)
   )
   (call $_ZdlPv
    (get_local $5)
   )
  )
  (block $label$5
   (br_if $label$5
    (i32.eqz
     (tee_local $1
      (i32.load offset=36
       (get_local $0)
      )
     )
    )
   )
   (block $label$6
    (block $label$7
     (br_if $label$7
      (i32.eq
       (tee_local $5
        (i32.load
         (tee_local $4
          (i32.add
           (get_local $0)
           (i32.const 40)
          )
         )
        )
       )
       (get_local $1)
      )
     )
     (set_local $2
      (i32.sub
       (i32.const 0)
       (get_local $1)
      )
     )
     (set_local $5
      (i32.add
       (get_local $5)
       (i32.const -24)
      )
     )
     (loop $label$8
      (block $label$9
       (br_if $label$9
        (i32.eqz
         (tee_local $3
          (i32.load
           (i32.add
            (get_local $5)
            (i32.const 12)
           )
          )
         )
        )
       )
       (i32.store
        (i32.add
         (get_local $5)
         (i32.const 16)
        )
        (get_local $3)
       )
       (call $_ZdlPv
        (get_local $3)
       )
      )
      (block $label$10
       (br_if $label$10
        (i32.eqz
         (tee_local $3
          (i32.load
           (get_local $5)
          )
         )
        )
       )
       (i32.store
        (i32.add
         (get_local $5)
         (i32.const 4)
        )
        (get_local $3)
       )
       (call $_ZdlPv
        (get_local $3)
       )
      )
      (br_if $label$8
       (i32.ne
        (i32.add
         (tee_local $5
          (i32.add
           (get_local $5)
           (i32.const -40)
          )
         )
         (get_local $2)
        )
        (i32.const -24)
       )
      )
     )
     (set_local $5
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 36)
       )
      )
     )
     (br $label$6)
    )
    (set_local $5
     (get_local $1)
    )
   )
   (i32.store
    (get_local $4)
    (get_local $1)
   )
   (call $_ZdlPv
    (get_local $5)
   )
  )
  (block $label$11
   (br_if $label$11
    (i32.eqz
     (tee_local $1
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (block $label$12
    (block $label$13
     (br_if $label$13
      (i32.eq
       (tee_local $5
        (i32.load
         (tee_local $4
          (i32.add
           (get_local $0)
           (i32.const 28)
          )
         )
        )
       )
       (get_local $1)
      )
     )
     (set_local $2
      (i32.sub
       (i32.const 0)
       (get_local $1)
      )
     )
     (set_local $5
      (i32.add
       (get_local $5)
       (i32.const -24)
      )
     )
     (loop $label$14
      (block $label$15
       (br_if $label$15
        (i32.eqz
         (tee_local $3
          (i32.load
           (i32.add
            (get_local $5)
            (i32.const 12)
           )
          )
         )
        )
       )
       (i32.store
        (i32.add
         (get_local $5)
         (i32.const 16)
        )
        (get_local $3)
       )
       (call $_ZdlPv
        (get_local $3)
       )
      )
      (block $label$16
       (br_if $label$16
        (i32.eqz
         (tee_local $3
          (i32.load
           (get_local $5)
          )
         )
        )
       )
       (i32.store
        (i32.add
         (get_local $5)
         (i32.const 4)
        )
        (get_local $3)
       )
       (call $_ZdlPv
        (get_local $3)
       )
      )
      (br_if $label$14
       (i32.ne
        (i32.add
         (tee_local $5
          (i32.add
           (get_local $5)
           (i32.const -40)
          )
         )
         (get_local $2)
        )
        (i32.const -24)
       )
      )
     )
     (set_local $5
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 24)
       )
      )
     )
     (br $label$12)
    )
    (set_local $5
     (get_local $1)
    )
   )
   (i32.store
    (get_local $4)
    (get_local $1)
   )
   (call $_ZdlPv
    (get_local $5)
   )
  )
  (get_local $0)
 )
 (func $_ZNK5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE31load_object_by_primary_iteratorEl (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (i32.store offset=44
   (tee_local $8
    (get_local $9)
   )
   (get_local $1)
  )
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 28)
       )
      )
     )
     (tee_local $2
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (set_local $3
    (i32.sub
     (i32.const 0)
     (get_local $2)
    )
   )
   (set_local $6
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i32.eq
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const 16)
       )
      )
      (get_local $1)
     )
    )
    (set_local $7
     (get_local $6)
    )
    (set_local $6
     (tee_local $4
      (i32.add
       (get_local $6)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $4)
       (get_local $3)
      )
      (i32.const -24)
     )
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (get_local $2)
     )
    )
    (set_local $6
     (i32.load
      (i32.add
       (get_local $7)
       (i32.const -24)
      )
     )
    )
    (br $label$2)
   )
   (call $eosio_assert
    (i32.xor
     (i32.shr_u
      (tee_local $6
       (call $db_get_i64
        (get_local $1)
        (i32.const 0)
        (i32.const 0)
       )
      )
      (i32.const 31)
     )
     (i32.const 1)
    )
    (i32.const 336)
   )
   (block $label$4
    (block $label$5
     (br_if $label$5
      (i32.lt_u
       (get_local $6)
       (i32.const 513)
      )
     )
     (set_local $4
      (call $malloc
       (get_local $6)
      )
     )
     (br $label$4)
    )
    (i32.store offset=4
     (i32.const 0)
     (tee_local $4
      (i32.sub
       (get_local $9)
       (i32.and
        (i32.add
         (get_local $6)
         (i32.const 15)
        )
        (i32.const -16)
       )
      )
     )
    )
   )
   (drop
    (call $db_get_i64
     (get_local $1)
     (get_local $4)
     (get_local $6)
    )
   )
   (i32.store offset=36
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=32
    (get_local $8)
    (get_local $4)
   )
   (i32.store offset=40
    (get_local $8)
    (i32.add
     (get_local $4)
     (get_local $6)
    )
   )
   (block $label$6
    (br_if $label$6
     (i32.lt_u
      (get_local $6)
      (i32.const 513)
     )
    )
    (call $free
     (get_local $4)
    )
   )
   (i32.store offset=12
    (get_local $8)
    (i32.add
     (get_local $8)
     (i32.const 32)
    )
   )
   (i32.store offset=16
    (get_local $8)
    (i32.add
     (get_local $8)
     (i32.const 44)
    )
   )
   (i32.store offset=8
    (get_local $8)
    (get_local $0)
   )
   (set_local $6
    (call $_ZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE4itemC2IZNKS3_31load_object_by_primary_iteratorElEUlRT_E_EEPKS3_OS6_
     (tee_local $4
      (call $_Znwj
       (i32.const 104)
      )
     )
     (get_local $0)
     (i32.add
      (get_local $8)
      (i32.const 8)
     )
    )
   )
   (i32.store offset=24
    (get_local $8)
    (get_local $4)
   )
   (i64.store offset=8
    (get_local $8)
    (tee_local $5
     (i64.load
      (get_local $4)
     )
    )
   )
   (i32.store offset=4
    (get_local $8)
    (tee_local $1
     (i32.load offset=92
      (get_local $4)
     )
    )
   )
   (block $label$7
    (block $label$8
     (br_if $label$8
      (i32.ge_u
       (tee_local $7
        (i32.load
         (tee_local $3
          (i32.add
           (get_local $0)
           (i32.const 28)
          )
         )
        )
       )
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 32)
        )
       )
      )
     )
     (i64.store offset=8
      (get_local $7)
      (get_local $5)
     )
     (i32.store offset=16
      (get_local $7)
      (get_local $1)
     )
     (i32.store offset=24
      (get_local $8)
      (i32.const 0)
     )
     (i32.store
      (get_local $7)
      (get_local $4)
     )
     (i32.store
      (get_local $3)
      (i32.add
       (get_local $7)
       (i32.const 24)
      )
     )
     (br $label$7)
    )
    (call $_ZNSt3__16vectorIN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_
     (i32.add
      (get_local $0)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 24)
     )
     (i32.add
      (get_local $8)
      (i32.const 8)
     )
     (i32.add
      (get_local $8)
      (i32.const 4)
     )
    )
   )
   (set_local $4
    (i32.load offset=24
     (get_local $8)
    )
   )
   (i32.store offset=24
    (get_local $8)
    (i32.const 0)
   )
   (br_if $label$2
    (i32.eqz
     (get_local $4)
    )
   )
   (block $label$9
    (br_if $label$9
     (i32.eqz
      (tee_local $7
       (i32.load offset=16
        (get_local $4)
       )
      )
     )
    )
    (i32.store
     (i32.add
      (get_local $4)
      (i32.const 20)
     )
     (get_local $7)
    )
    (call $_ZdlPv
     (get_local $7)
    )
   )
   (call $_ZdlPv
    (get_local $4)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 48)
   )
  )
  (get_local $6)
 )
 (func $_ZZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE7emplaceIZNS1_15system_contract8changebwEyyNS_5assetES6_bE4$_14EENS3_14const_iteratorEyOT_ENKUlRS9_E_clINS3_4itemEEEDaSB_ (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i64)
  (local $8 i32)
  (local $9 i32)
  (set_local $8
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (i64.store
   (get_local $1)
   (i64.load
    (i32.load
     (tee_local $6
      (i32.load offset=4
       (get_local $0)
      )
     )
    )
   )
  )
  (i64.store offset=32
   (get_local $1)
   (i64.load
    (i32.load offset=4
     (get_local $6)
    )
   )
  )
  (set_local $2
   (i32.load
    (get_local $0)
   )
  )
  (set_local $7
   (i64.extend_u/i32
    (i32.shr_s
     (tee_local $5
      (i32.sub
       (tee_local $4
        (i32.load
         (i32.add
          (get_local $1)
          (i32.const 20)
         )
        )
       )
       (tee_local $3
        (i32.load offset=16
         (get_local $1)
        )
       )
      )
     )
     (i32.const 3)
    )
   )
  )
  (set_local $6
   (i32.const 16)
  )
  (loop $label$0
   (set_local $6
    (i32.add
     (get_local $6)
     (i32.const 1)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $7
      (i64.shr_u
       (get_local $7)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (block $label$1
   (br_if $label$1
    (i32.eq
     (get_local $3)
     (get_local $4)
    )
   )
   (set_local $6
    (i32.add
     (i32.and
      (get_local $5)
      (i32.const -8)
     )
     (get_local $6)
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.lt_u
      (tee_local $4
       (i32.add
        (get_local $6)
        (i32.const 49)
       )
      )
      (i32.const 513)
     )
    )
    (set_local $6
     (call $malloc
      (get_local $4)
     )
    )
    (br $label$2)
   )
   (i32.store offset=4
    (i32.const 0)
    (tee_local $6
     (i32.sub
      (get_local $9)
      (i32.and
       (i32.add
        (get_local $4)
        (i32.const 15)
       )
       (i32.const -16)
      )
     )
    )
   )
  )
  (i32.store offset=4
   (get_local $8)
   (get_local $6)
  )
  (i32.store
   (get_local $8)
   (get_local $6)
  )
  (i32.store offset=8
   (get_local $8)
   (i32.add
    (get_local $6)
    (get_local $4)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_10voter_infoE
    (get_local $8)
    (get_local $1)
   )
  )
  (i32.store offset=92
   (get_local $1)
   (call $db_store_i64
    (i64.load offset=8
     (get_local $2)
    )
    (i64.const -2507753063930920960)
    (i64.load
     (i32.load offset=8
      (get_local $0)
     )
    )
    (tee_local $7
     (i64.load
      (get_local $1)
     )
    )
    (get_local $6)
    (get_local $4)
   )
  )
  (block $label$4
   (br_if $label$4
    (i32.lt_u
     (get_local $4)
     (i32.const 513)
    )
   )
   (call $free
    (get_local $6)
   )
  )
  (block $label$5
   (br_if $label$5
    (i64.lt_u
     (get_local $7)
     (i64.load offset=16
      (get_local $2)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $2)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $7)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $7)
      (i64.const -3)
     )
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
 )
 (func $_ZNSt3__16vectorIN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE8item_ptrENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINS5_4itemENS_14default_deleteISC_EEEERyRlEEEvDpOT_ (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (block $label$0
   (block $label$1
    (br_if $label$1
     (i32.ge_u
      (tee_local $5
       (i32.add
        (tee_local $4
         (i32.div_s
          (i32.sub
           (i32.load offset=4
            (get_local $0)
           )
           (tee_local $6
            (i32.load
             (get_local $0)
            )
           )
          )
          (i32.const 24)
         )
        )
        (i32.const 1)
       )
      )
      (i32.const 178956971)
     )
    )
    (set_local $7
     (i32.const 178956970)
    )
    (block $label$2
     (block $label$3
      (br_if $label$3
       (i32.gt_u
        (tee_local $6
         (i32.div_s
          (i32.sub
           (i32.load offset=8
            (get_local $0)
           )
           (get_local $6)
          )
          (i32.const 24)
         )
        )
        (i32.const 89478484)
       )
      )
      (br_if $label$2
       (i32.eqz
        (tee_local $7
         (select
          (get_local $5)
          (tee_local $7
           (i32.shl
            (get_local $6)
            (i32.const 1)
           )
          )
          (i32.lt_u
           (get_local $7)
           (get_local $5)
          )
         )
        )
       )
      )
     )
     (set_local $6
      (call $_Znwj
       (i32.mul
        (get_local $7)
        (i32.const 24)
       )
      )
     )
     (br $label$0)
    )
    (set_local $7
     (i32.const 0)
    )
    (set_local $6
     (i32.const 0)
    )
    (br $label$0)
   )
   (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
    (get_local $0)
   )
   (unreachable)
  )
  (set_local $5
   (i32.load
    (get_local $1)
   )
  )
  (i32.store
   (get_local $1)
   (i32.const 0)
  )
  (i32.store
   (tee_local $1
    (i32.add
     (get_local $6)
     (i32.mul
      (get_local $4)
      (i32.const 24)
     )
    )
   )
   (get_local $5)
  )
  (i64.store offset=8
   (get_local $1)
   (i64.load
    (get_local $2)
   )
  )
  (i32.store offset=16
   (get_local $1)
   (i32.load
    (get_local $3)
   )
  )
  (set_local $4
   (i32.add
    (get_local $6)
    (i32.mul
     (get_local $7)
     (i32.const 24)
    )
   )
  )
  (set_local $5
   (i32.add
    (get_local $1)
    (i32.const 24)
   )
  )
  (block $label$4
   (block $label$5
    (br_if $label$5
     (i32.eq
      (tee_local $6
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 4)
        )
       )
      )
      (tee_local $7
       (i32.load
        (get_local $0)
       )
      )
     )
    )
    (loop $label$6
     (set_local $3
      (i32.load
       (tee_local $2
        (i32.add
         (get_local $6)
         (i32.const -24)
        )
       )
      )
     )
     (i32.store
      (get_local $2)
      (i32.const 0)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
      (get_local $3)
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -8)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -8)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -12)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -12)
       )
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const -16)
      )
      (i32.load
       (i32.add
        (get_local $6)
        (i32.const -16)
       )
      )
     )
     (set_local $1
      (i32.add
       (get_local $1)
       (i32.const -24)
      )
     )
     (set_local $6
      (get_local $2)
     )
     (br_if $label$6
      (i32.ne
       (get_local $7)
       (get_local $2)
      )
     )
    )
    (set_local $7
     (i32.load
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (set_local $2
     (i32.load
      (get_local $0)
     )
    )
    (br $label$4)
   )
   (set_local $2
    (get_local $7)
   )
  )
  (i32.store
   (get_local $0)
   (get_local $1)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
   (get_local $5)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
   (get_local $4)
  )
  (block $label$7
   (br_if $label$7
    (i32.eq
     (get_local $7)
     (get_local $2)
    )
   )
   (loop $label$8
    (set_local $1
     (i32.load
      (tee_local $7
       (i32.add
        (get_local $7)
        (i32.const -24)
       )
      )
     )
    )
    (i32.store
     (get_local $7)
     (i32.const 0)
    )
    (block $label$9
     (br_if $label$9
      (i32.eqz
       (get_local $1)
      )
     )
     (block $label$10
      (br_if $label$10
       (i32.eqz
        (tee_local $6
         (i32.load offset=16
          (get_local $1)
         )
        )
       )
      )
      (i32.store
       (i32.add
        (get_local $1)
        (i32.const 20)
       )
       (get_local $6)
      )
      (call $_ZdlPv
       (get_local $6)
      )
     )
     (call $_ZdlPv
      (get_local $1)
     )
    )
    (br_if $label$8
     (i32.ne
      (get_local $2)
      (get_local $7)
     )
    )
   )
  )
  (block $label$11
   (br_if $label$11
    (i32.eqz
     (get_local $2)
    )
   )
   (call $_ZdlPv
    (get_local $2)
   )
  )
 )
 (func $_ZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE6modifyIZNS1_15system_contract8changebwEyyNS_5assetES6_bE4$_15EEvRKS2_yOT_ (param $0 i32) (param $1 i32) (param $2 i32)
  (local $3 i64)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i64)
  (local $8 i32)
  (local $9 i32)
  (set_local $8
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (call $eosio_assert
   (i32.eq
    (i32.load offset=88
     (get_local $1)
    )
    (get_local $0)
   )
   (i32.const 144)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 192)
  )
  (i64.store offset=32
   (get_local $1)
   (i64.add
    (i64.load offset=32
     (get_local $1)
    )
    (i64.load
     (i32.load
      (get_local $2)
     )
    )
   )
  )
  (set_local $3
   (i64.load
    (get_local $1)
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 256)
  )
  (set_local $7
   (i64.extend_u/i32
    (i32.shr_s
     (tee_local $6
      (i32.sub
       (tee_local $5
        (i32.load
         (i32.add
          (get_local $1)
          (i32.const 20)
         )
        )
       )
       (tee_local $4
        (i32.load offset=16
         (get_local $1)
        )
       )
      )
     )
     (i32.const 3)
    )
   )
  )
  (set_local $2
   (i32.const 16)
  )
  (loop $label$0
   (set_local $2
    (i32.add
     (get_local $2)
     (i32.const 1)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $7
      (i64.shr_u
       (get_local $7)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (block $label$1
   (br_if $label$1
    (i32.eq
     (get_local $4)
     (get_local $5)
    )
   )
   (set_local $2
    (i32.add
     (i32.and
      (get_local $6)
      (i32.const -8)
     )
     (get_local $2)
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.lt_u
      (tee_local $5
       (i32.add
        (get_local $2)
        (i32.const 49)
       )
      )
      (i32.const 513)
     )
    )
    (set_local $2
     (call $malloc
      (get_local $5)
     )
    )
    (br $label$2)
   )
   (i32.store offset=4
    (i32.const 0)
    (tee_local $2
     (i32.sub
      (get_local $9)
      (i32.and
       (i32.add
        (get_local $5)
        (i32.const 15)
       )
       (i32.const -16)
      )
     )
    )
   )
  )
  (i32.store offset=4
   (get_local $8)
   (get_local $2)
  )
  (i32.store
   (get_local $8)
   (get_local $2)
  )
  (i32.store offset=8
   (get_local $8)
   (i32.add
    (get_local $2)
    (get_local $5)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_10voter_infoE
    (get_local $8)
    (get_local $1)
   )
  )
  (call $db_update_i64
   (i32.load offset=92
    (get_local $1)
   )
   (i64.const 0)
   (get_local $2)
   (get_local $5)
  )
  (block $label$4
   (br_if $label$4
    (i32.lt_u
     (get_local $5)
     (i32.const 513)
    )
   )
   (call $free
    (get_local $2)
   )
  )
  (block $label$5
   (br_if $label$5
    (i64.lt_u
     (get_local $3)
     (i64.load offset=16
      (get_local $0)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $0)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $3)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $3)
      (i64.const -3)
     )
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
 )
 (func $_ZN11eosiosystem15system_contract12update_votesEyyRKNSt3__16vectorIyNS1_9allocatorIyEEEEb (param $0 i32) (param $1 i64) (param $2 i64) (param $3 i32) (param $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (local $10 i32)
  (local $11 i32)
  (local $12 i32)
  (local $13 i32)
  (local $14 i32)
  (local $15 i32)
  (local $16 i32)
  (local $17 i32)
  (local $18 i32)
  (local $19 f64)
  (local $20 i32)
  (local $21 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $21
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 80)
    )
   )
  )
  (i64.store offset=32
   (get_local $21)
   (get_local $2)
  )
  (set_local $20
   (i32.shr_s
    (i32.sub
     (i32.load offset=4
      (get_local $3)
     )
     (i32.load
      (get_local $3)
     )
    )
    (i32.const 3)
   )
  )
  (block $label$0
   (block $label$1
    (br_if $label$1
     (tee_local $10
      (i64.eqz
       (get_local $2)
      )
     )
    )
    (call $eosio_assert
     (i32.eqz
      (get_local $20)
     )
     (i32.const 2208)
    )
    (call $eosio_assert
     (i64.ne
      (get_local $2)
      (get_local $1)
     )
     (i32.const 2272)
    )
    (call $require_recipient
     (get_local $2)
    )
    (br $label$0)
   )
   (call $eosio_assert
    (i32.lt_u
     (get_local $20)
     (i32.const 31)
    )
    (i32.const 2304)
   )
   (br_if $label$0
    (i32.lt_u
     (i32.shr_s
      (i32.sub
       (i32.load
        (tee_local $9
         (i32.add
          (get_local $3)
          (i32.const 4)
         )
        )
       )
       (tee_local $17
        (i32.load
         (get_local $3)
        )
       )
      )
      (i32.const 3)
     )
     (i32.const 2)
    )
   )
   (set_local $20
    (i32.const 0)
   )
   (set_local $8
    (i32.const 1)
   )
   (loop $label$2
    (call $eosio_assert
     (i64.lt_u
      (i64.load
       (tee_local $17
        (i32.add
         (get_local $17)
         (get_local $20)
        )
       )
      )
      (i64.load
       (i32.add
        (get_local $17)
        (i32.const 8)
       )
      )
     )
     (i32.const 2352)
    )
    (set_local $20
     (i32.add
      (get_local $20)
      (i32.const 8)
     )
    )
    (br_if $label$2
     (i32.lt_u
      (tee_local $8
       (i32.add
        (get_local $8)
        (i32.const 1)
       )
      )
      (i32.shr_s
       (i32.sub
        (i32.load
         (get_local $9)
        )
        (tee_local $17
         (i32.load
          (get_local $3)
         )
        )
       )
       (i32.const 3)
      )
     )
    )
   )
  )
  (block $label$3
   (br_if $label$3
    (i32.eq
     (tee_local $8
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 36)
       )
      )
     )
     (tee_local $18
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 32)
       )
      )
     )
    )
   )
   (set_local $20
    (i32.add
     (get_local $8)
     (i32.const -24)
    )
   )
   (set_local $9
    (i32.sub
     (i32.const 0)
     (get_local $18)
    )
   )
   (loop $label$4
    (br_if $label$3
     (i64.eq
      (i64.load
       (i32.load
        (get_local $20)
       )
      )
      (get_local $1)
     )
    )
    (set_local $8
     (get_local $20)
    )
    (set_local $20
     (tee_local $17
      (i32.add
       (get_local $20)
       (i32.const -24)
      )
     )
    )
    (br_if $label$4
     (i32.ne
      (i32.add
       (get_local $17)
       (get_local $9)
      )
      (i32.const -24)
     )
    )
   )
  )
  (set_local $5
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
  )
  (block $label$5
   (block $label$6
    (br_if $label$6
     (i32.eq
      (get_local $8)
      (get_local $18)
     )
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=88
       (tee_local $7
        (i32.load
         (i32.add
          (get_local $8)
          (i32.const -24)
         )
        )
       )
      )
      (get_local $5)
     )
     (i32.const 32)
    )
    (i32.store offset=28
     (get_local $21)
     (get_local $7)
    )
    (i32.store offset=24
     (get_local $21)
     (get_local $5)
    )
    (set_local $16
     (i32.or
      (i32.add
       (get_local $21)
       (i32.const 24)
      )
      (i32.const 4)
     )
    )
    (br $label$5)
   )
   (block $label$7
    (br_if $label$7
     (i32.le_s
      (tee_local $20
       (call $db_find_i64
        (i64.load
         (i32.add
          (get_local $0)
          (i32.const 8)
         )
        )
        (i64.load
         (i32.add
          (get_local $0)
          (i32.const 16)
         )
        )
        (i64.const -2507753063930920960)
        (get_local $1)
       )
      )
      (i32.const -1)
     )
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=88
       (tee_local $7
        (call $_ZNK5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE31load_object_by_primary_iteratorEl
         (get_local $5)
         (get_local $20)
        )
       )
      )
      (get_local $5)
     )
     (i32.const 32)
    )
    (i32.store offset=28
     (get_local $21)
     (get_local $7)
    )
    (i32.store offset=24
     (get_local $21)
     (get_local $5)
    )
    (set_local $16
     (i32.or
      (i32.add
       (get_local $21)
       (i32.const 24)
      )
      (i32.const 4)
     )
    )
    (br $label$5)
   )
   (set_local $7
    (i32.const 0)
   )
   (i32.store offset=28
    (get_local $21)
    (i32.const 0)
   )
   (i32.store offset=24
    (get_local $21)
    (get_local $5)
   )
   (set_local $16
    (i32.or
     (i32.add
      (get_local $21)
      (i32.const 24)
     )
     (i32.const 4)
    )
   )
  )
  (call $eosio_assert
   (i32.ne
    (get_local $7)
    (i32.const 0)
   )
   (i32.const 2400)
  )
  (set_local $20
   (i32.const 1)
  )
  (block $label$8
   (br_if $label$8
    (get_local $10)
   )
   (set_local $20
    (i32.xor
     (i32.load8_u offset=56
      (get_local $7)
     )
     (i32.const 1)
    )
   )
  )
  (call $eosio_assert
   (i32.and
    (get_local $20)
    (i32.const 1)
   )
   (i32.const 2448)
  )
  (block $label$9
   (br_if $label$9
    (i32.or
     (f64.gt
      (tee_local $19
       (f64.load offset=40
        (get_local $7)
       )
      )
      (f64.const 0)
     )
     (f64.ne
      (get_local $19)
      (get_local $19)
     )
    )
   )
   (i64.store
    (tee_local $20
     (i32.add
      (get_local $0)
      (i32.const 264)
     )
    )
    (tee_local $1
     (i64.add
      (i64.load
       (get_local $20)
      )
      (i64.load
       (i32.add
        (get_local $7)
        (i32.const 32)
       )
      )
     )
    )
   )
   (br_if $label$9
    (i64.lt_s
     (get_local $1)
     (i64.const 1500000000000)
    )
   )
   (br_if $label$9
    (i64.ne
     (i64.load
      (tee_local $20
       (i32.add
        (get_local $0)
        (i32.const 272)
       )
      )
     )
     (i64.const 0)
    )
   )
   (i64.store
    (get_local $20)
    (call $current_time)
   )
  )
  (f64.store offset=16
   (get_local $21)
   (tee_local $19
    (f64.mul
     (f64.convert_s/i64
      (i64.load
       (i32.add
        (get_local $7)
        (i32.const 32)
       )
      )
     )
     (call $pow
      (f64.const 2)
      (f64.div
       (f64.convert_s/i64
        (i64.div_s
         (i64.add
          (i64.and
           (i64.div_u
            (call $current_time)
            (i64.const 1000000)
           )
           (i64.const 4294967295)
          )
          (i64.const -946684800)
         )
         (i64.const 604800)
        )
       )
       (f64.const 52)
      )
     )
    )
   )
  )
  (block $label$10
   (br_if $label$10
    (i32.eqz
     (i32.load8_u offset=56
      (get_local $7)
     )
    )
   )
   (f64.store offset=16
    (get_local $21)
    (f64.add
     (get_local $19)
     (f64.load offset=48
      (get_local $7)
     )
    )
   )
  )
  (i32.store offset=8
   (get_local $21)
   (i32.const 0)
  )
  (i64.store
   (get_local $21)
   (i64.const 0)
  )
  (block $label$11
   (br_if $label$11
    (i32.or
     (f64.le
      (tee_local $19
       (f64.load
        (i32.add
         (get_local $7)
         (i32.const 40)
        )
       )
      )
      (f64.const 0)
     )
     (f64.ne
      (get_local $19)
      (get_local $19)
     )
    )
   )
   (block $label$12
    (block $label$13
     (block $label$14
      (br_if $label$14
       (i64.eqz
        (tee_local $1
         (i64.load offset=8
          (get_local $7)
         )
        )
       )
      )
      (block $label$15
       (br_if $label$15
        (i32.eq
         (tee_local $8
          (i32.load
           (i32.add
            (get_local $0)
            (i32.const 36)
           )
          )
         )
         (tee_local $18
          (i32.load
           (i32.add
            (get_local $0)
            (i32.const 32)
           )
          )
         )
        )
       )
       (set_local $20
        (i32.add
         (get_local $8)
         (i32.const -24)
        )
       )
       (set_local $9
        (i32.sub
         (i32.const 0)
         (get_local $18)
        )
       )
       (loop $label$16
        (br_if $label$15
         (i64.eq
          (i64.load
           (i32.load
            (get_local $20)
           )
          )
          (get_local $1)
         )
        )
        (set_local $8
         (get_local $20)
        )
        (set_local $20
         (tee_local $17
          (i32.add
           (get_local $20)
           (i32.const -24)
          )
         )
        )
        (br_if $label$16
         (i32.ne
          (i32.add
           (get_local $17)
           (get_local $9)
          )
          (i32.const -24)
         )
        )
       )
      )
      (br_if $label$13
       (i32.eq
        (get_local $8)
        (get_local $18)
       )
      )
      (call $eosio_assert
       (i32.eq
        (i32.load offset=88
         (tee_local $20
          (i32.load
           (i32.add
            (get_local $8)
            (i32.const -24)
           )
          )
         )
        )
        (get_local $5)
       )
       (i32.const 32)
      )
      (br $label$12)
     )
     (br_if $label$11
      (i32.eq
       (tee_local $6
        (i32.load offset=16
         (get_local $7)
        )
       )
       (tee_local $15
        (i32.load
         (i32.add
          (get_local $7)
          (i32.const 20)
         )
        )
       )
      )
     )
     (set_local $13
      (i32.add
       (get_local $21)
       (i32.const 65)
      )
     )
     (set_local $11
      (i32.add
       (i32.add
        (get_local $21)
        (i32.const 48)
       )
       (i32.const 8)
      )
     )
     (set_local $12
      (i32.add
       (i32.add
        (get_local $21)
        (i32.const 48)
       )
       (i32.const 16)
      )
     )
     (set_local $20
      (i32.const 0)
     )
     (set_local $18
      (i32.const 0)
     )
     (loop $label$17
      (set_local $14
       (i32.add
        (get_local $18)
        (tee_local $20
         (i32.mul
          (get_local $20)
          (i32.const 24)
         )
        )
       )
      )
      (block $label$18
       (br_if $label$18
        (i32.eqz
         (get_local $20)
        )
       )
       (set_local $20
        (i32.div_s
         (get_local $20)
         (i32.const 24)
        )
       )
       (set_local $1
        (i64.load
         (get_local $6)
        )
       )
       (set_local $17
        (get_local $18)
       )
       (loop $label$19
        (set_local $17
         (select
          (tee_local $10
           (i32.add
            (tee_local $9
             (i32.add
              (get_local $17)
              (i32.mul
               (tee_local $8
                (i32.shr_u
                 (get_local $20)
                 (i32.const 1)
                )
               )
               (i32.const 24)
              )
             )
            )
            (i32.const 24)
           )
          )
          (get_local $17)
          (tee_local $9
           (i64.lt_u
            (i64.load
             (get_local $9)
            )
            (get_local $1)
           )
          )
         )
        )
        (set_local $18
         (select
          (get_local $10)
          (get_local $18)
          (get_local $9)
         )
        )
        (br_if $label$19
         (tee_local $20
          (select
           (i32.sub
            (i32.add
             (get_local $20)
             (i32.const -1)
            )
            (get_local $8)
           )
           (get_local $8)
           (get_local $9)
          )
         )
        )
       )
      )
      (block $label$20
       (block $label$21
        (block $label$22
         (br_if $label$22
          (i32.eq
           (get_local $18)
           (get_local $14)
          )
         )
         (br_if $label$21
          (i64.lt_u
           (tee_local $1
            (i64.load
             (get_local $6)
            )
           )
           (i64.load
            (get_local $18)
           )
          )
         )
         (br $label$20)
        )
        (set_local $1
         (i64.load
          (get_local $6)
         )
        )
       )
       (i64.store
        (get_local $11)
        (i64.const 0)
       )
       (i32.store8
        (get_local $12)
        (i32.const 0)
       )
       (i64.store offset=48
        (get_local $21)
        (get_local $1)
       )
       (i32.store8
        (i32.add
         (get_local $13)
         (i32.const 6)
        )
        (i32.load8_u
         (i32.add
          (i32.add
           (get_local $21)
           (i32.const 41)
          )
          (i32.const 6)
         )
        )
       )
       (i32.store16 align=1
        (i32.add
         (get_local $13)
         (i32.const 4)
        )
        (i32.load16_u align=1
         (i32.add
          (i32.add
           (get_local $21)
           (i32.const 41)
          )
          (i32.const 4)
         )
        )
       )
       (i32.store align=1
        (get_local $13)
        (i32.load offset=41 align=1
         (get_local $21)
        )
       )
       (call $_ZN5boost9container3dtl9flat_treeINS1_4pairIyNSt3__14pairIdbEEEENS1_9select1stIyEENS4_4lessIyEENS0_13new_allocatorIS7_EEE13insert_uniqueENS0_12vec_iteratorIPS7_Lb1EEEOS7_
        (i32.add
         (get_local $21)
         (i32.const 72)
        )
        (get_local $21)
        (get_local $18)
        (i32.add
         (get_local $21)
         (i32.const 48)
        )
       )
       (set_local $18
        (i32.load offset=72
         (get_local $21)
        )
       )
       (set_local $7
        (i32.load
         (get_local $16)
        )
       )
      )
      (i32.store8
       (i32.add
        (get_local $18)
        (i32.const 16)
       )
       (i32.const 0)
      )
      (f64.store offset=8
       (get_local $18)
       (f64.sub
        (f64.load offset=8
         (get_local $18)
        )
        (f64.load offset=40
         (get_local $7)
        )
       )
      )
      (br_if $label$11
       (i32.eq
        (tee_local $6
         (i32.add
          (get_local $6)
          (i32.const 8)
         )
        )
        (get_local $15)
       )
      )
      (set_local $20
       (i32.load offset=4
        (get_local $21)
       )
      )
      (set_local $18
       (i32.load
        (get_local $21)
       )
      )
      (br $label$17)
     )
    )
    (set_local $20
     (i32.const 0)
    )
    (br_if $label$12
     (i32.lt_s
      (tee_local $17
       (call $db_find_i64
        (i64.load
         (i32.add
          (get_local $0)
          (i32.const 8)
         )
        )
        (i64.load
         (i32.add
          (get_local $0)
          (i32.const 16)
         )
        )
        (i64.const -2507753063930920960)
        (get_local $1)
       )
      )
      (i32.const 0)
     )
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=88
       (tee_local $20
        (call $_ZNK5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE31load_object_by_primary_iteratorEl
         (get_local $5)
         (get_local $17)
        )
       )
      )
      (get_local $5)
     )
     (i32.const 32)
    )
   )
   (call $eosio_assert
    (tee_local $17
     (i32.ne
      (get_local $20)
      (i32.const 0)
     )
    )
    (i32.const 2512)
   )
   (i32.store offset=48
    (get_local $21)
    (i32.add
     (get_local $21)
     (i32.const 24)
    )
   )
   (call $eosio_assert
    (get_local $17)
    (i32.const 96)
   )
   (call $_ZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE6modifyIZNS1_15system_contract12update_votesEyyRKNSt3__16vectorIyNS6_9allocatorIyEEEEbE4$_19EEvRKS2_yOT_
    (get_local $5)
    (get_local $20)
    (i32.add
     (get_local $21)
     (i32.const 48)
    )
   )
   (call $_ZN11eosiosystem15system_contract23propagate_weight_changeERKNS_10voter_infoE
    (get_local $0)
    (get_local $20)
   )
  )
  (block $label$23
   (block $label$24
    (block $label$25
     (block $label$26
      (br_if $label$26
       (i64.eqz
        (tee_local $1
         (i64.load offset=32
          (get_local $21)
         )
        )
       )
      )
      (block $label$27
       (br_if $label$27
        (i32.eq
         (tee_local $8
          (i32.load
           (i32.add
            (get_local $0)
            (i32.const 36)
           )
          )
         )
         (tee_local $18
          (i32.load
           (i32.add
            (get_local $0)
            (i32.const 32)
           )
          )
         )
        )
       )
       (set_local $20
        (i32.add
         (get_local $8)
         (i32.const -24)
        )
       )
       (set_local $9
        (i32.sub
         (i32.const 0)
         (get_local $18)
        )
       )
       (loop $label$28
        (br_if $label$27
         (i64.eq
          (i64.load
           (i32.load
            (get_local $20)
           )
          )
          (get_local $1)
         )
        )
        (set_local $8
         (get_local $20)
        )
        (set_local $20
         (tee_local $17
          (i32.add
           (get_local $20)
           (i32.const -24)
          )
         )
        )
        (br_if $label$28
         (i32.ne
          (i32.add
           (get_local $17)
           (get_local $9)
          )
          (i32.const -24)
         )
        )
       )
      )
      (br_if $label$25
       (i32.eq
        (get_local $8)
        (get_local $18)
       )
      )
      (call $eosio_assert
       (i32.eq
        (i32.load offset=88
         (tee_local $20
          (i32.load
           (i32.add
            (get_local $8)
            (i32.const -24)
           )
          )
         )
        )
        (get_local $5)
       )
       (i32.const 32)
      )
      (br $label$24)
     )
     (br_if $label$23
      (i32.or
       (f64.lt
        (tee_local $19
         (f64.load offset=16
          (get_local $21)
         )
        )
        (f64.const 0)
       )
       (f64.ne
        (get_local $19)
        (get_local $19)
       )
      )
     )
     (br_if $label$23
      (i32.eq
       (tee_local $7
        (i32.load
         (get_local $3)
        )
       )
       (tee_local $14
        (i32.load
         (i32.add
          (get_local $3)
          (i32.const 4)
         )
        )
       )
      )
     )
     (set_local $6
      (i32.add
       (get_local $21)
       (i32.const 65)
      )
     )
     (set_local $15
      (i32.add
       (i32.add
        (get_local $21)
        (i32.const 48)
       )
       (i32.const 8)
      )
     )
     (set_local $16
      (i32.add
       (i32.add
        (get_local $21)
        (i32.const 48)
       )
       (i32.const 16)
      )
     )
     (loop $label$29
      (set_local $13
       (i32.add
        (tee_local $18
         (i32.load
          (get_local $21)
         )
        )
        (tee_local $20
         (i32.mul
          (i32.load offset=4
           (get_local $21)
          )
          (i32.const 24)
         )
        )
       )
      )
      (block $label$30
       (br_if $label$30
        (i32.eqz
         (get_local $20)
        )
       )
       (set_local $20
        (i32.div_s
         (get_local $20)
         (i32.const 24)
        )
       )
       (set_local $1
        (i64.load
         (get_local $7)
        )
       )
       (set_local $17
        (get_local $18)
       )
       (loop $label$31
        (set_local $17
         (select
          (tee_local $10
           (i32.add
            (tee_local $9
             (i32.add
              (get_local $17)
              (i32.mul
               (tee_local $8
                (i32.shr_u
                 (get_local $20)
                 (i32.const 1)
                )
               )
               (i32.const 24)
              )
             )
            )
            (i32.const 24)
           )
          )
          (get_local $17)
          (tee_local $9
           (i64.lt_u
            (i64.load
             (get_local $9)
            )
            (get_local $1)
           )
          )
         )
        )
        (set_local $18
         (select
          (get_local $10)
          (get_local $18)
          (get_local $9)
         )
        )
        (br_if $label$31
         (tee_local $20
          (select
           (i32.sub
            (i32.add
             (get_local $20)
             (i32.const -1)
            )
            (get_local $8)
           )
           (get_local $8)
           (get_local $9)
          )
         )
        )
       )
      )
      (block $label$32
       (block $label$33
        (block $label$34
         (br_if $label$34
          (i32.eq
           (get_local $18)
           (get_local $13)
          )
         )
         (br_if $label$33
          (i64.lt_u
           (tee_local $1
            (i64.load
             (get_local $7)
            )
           )
           (i64.load
            (get_local $18)
           )
          )
         )
         (br $label$32)
        )
        (set_local $1
         (i64.load
          (get_local $7)
         )
        )
       )
       (i64.store
        (get_local $15)
        (i64.const 0)
       )
       (i32.store8
        (get_local $16)
        (i32.const 0)
       )
       (i64.store offset=48
        (get_local $21)
        (get_local $1)
       )
       (i32.store8
        (i32.add
         (get_local $6)
         (i32.const 6)
        )
        (i32.load8_u
         (i32.add
          (i32.add
           (get_local $21)
           (i32.const 41)
          )
          (i32.const 6)
         )
        )
       )
       (i32.store16 align=1
        (i32.add
         (get_local $6)
         (i32.const 4)
        )
        (i32.load16_u align=1
         (i32.add
          (i32.add
           (get_local $21)
           (i32.const 41)
          )
          (i32.const 4)
         )
        )
       )
       (i32.store align=1
        (get_local $6)
        (i32.load offset=41 align=1
         (get_local $21)
        )
       )
       (call $_ZN5boost9container3dtl9flat_treeINS1_4pairIyNSt3__14pairIdbEEEENS1_9select1stIyEENS4_4lessIyEENS0_13new_allocatorIS7_EEE13insert_uniqueENS0_12vec_iteratorIPS7_Lb1EEEOS7_
        (i32.add
         (get_local $21)
         (i32.const 72)
        )
        (get_local $21)
        (get_local $18)
        (i32.add
         (get_local $21)
         (i32.const 48)
        )
       )
       (set_local $18
        (i32.load offset=72
         (get_local $21)
        )
       )
       (set_local $19
        (f64.load offset=16
         (get_local $21)
        )
       )
      )
      (i32.store8
       (i32.add
        (get_local $18)
        (i32.const 16)
       )
       (i32.const 1)
      )
      (f64.store offset=8
       (get_local $18)
       (f64.add
        (get_local $19)
        (f64.load offset=8
         (get_local $18)
        )
       )
      )
      (br_if $label$29
       (i32.ne
        (tee_local $7
         (i32.add
          (get_local $7)
          (i32.const 8)
         )
        )
        (get_local $14)
       )
      )
      (br $label$23)
     )
    )
    (set_local $20
     (i32.const 0)
    )
    (br_if $label$24
     (i32.lt_s
      (tee_local $17
       (call $db_find_i64
        (i64.load
         (i32.add
          (get_local $0)
          (i32.const 8)
         )
        )
        (i64.load
         (i32.add
          (get_local $0)
          (i32.const 16)
         )
        )
        (i64.const -2507753063930920960)
        (get_local $1)
       )
      )
      (i32.const 0)
     )
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=88
       (tee_local $20
        (call $_ZNK5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE31load_object_by_primary_iteratorEl
         (get_local $5)
         (get_local $17)
        )
       )
      )
      (get_local $5)
     )
     (i32.const 32)
    )
   )
   (call $eosio_assert
    (tee_local $8
     (i32.ne
      (get_local $20)
      (i32.const 0)
     )
    )
    (i32.const 2544)
   )
   (set_local $17
    (i32.const 1)
   )
   (block $label$35
    (br_if $label$35
     (i32.eqz
      (get_local $4)
     )
    )
    (set_local $17
     (i32.load8_u offset=56
      (get_local $20)
     )
    )
   )
   (call $eosio_assert
    (get_local $17)
    (i32.const 2576)
   )
   (br_if $label$23
    (i32.or
     (f64.lt
      (tee_local $19
       (f64.load offset=16
        (get_local $21)
       )
      )
      (f64.const 0)
     )
     (f64.ne
      (get_local $19)
      (get_local $19)
     )
    )
   )
   (i32.store offset=48
    (get_local $21)
    (i32.add
     (get_local $21)
     (i32.const 16)
    )
   )
   (call $eosio_assert
    (get_local $8)
    (i32.const 96)
   )
   (call $_ZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE6modifyIZNS1_15system_contract12update_votesEyyRKNSt3__16vectorIyNS6_9allocatorIyEEEEbE4$_20EEvRKS2_yOT_
    (get_local $5)
    (get_local $20)
    (i32.add
     (get_local $21)
     (i32.const 48)
    )
   )
   (call $_ZN11eosiosystem15system_contract23propagate_weight_changeERKNS_10voter_infoE
    (get_local $0)
    (get_local $20)
   )
  )
  (block $label$36
   (br_if $label$36
    (i32.eqz
     (tee_local $20
      (i32.mul
       (i32.load offset=4
        (get_local $21)
       )
       (i32.const 24)
      )
     )
    )
   )
   (set_local $6
    (i32.add
     (tee_local $18
      (i32.load
       (get_local $21)
      )
     )
     (get_local $20)
    )
   )
   (set_local $10
    (i32.add
     (get_local $0)
     (i32.const 48)
    )
   )
   (block $label$37
    (br_if $label$37
     (i32.eqz
      (get_local $4)
     )
    )
    (set_local $13
     (i32.add
      (get_local $0)
      (i32.const 72)
     )
    )
    (set_local $14
     (i32.add
      (get_local $0)
      (i32.const 76)
     )
    )
    (set_local $15
     (i32.add
      (get_local $0)
      (i32.const 56)
     )
    )
    (loop $label$38
     (set_local $1
      (i64.load
       (get_local $18)
      )
     )
     (block $label$39
      (br_if $label$39
       (i32.eq
        (tee_local $8
         (i32.load
          (get_local $14)
         )
        )
        (tee_local $7
         (i32.load
          (get_local $13)
         )
        )
       )
      )
      (set_local $20
       (i32.add
        (get_local $8)
        (i32.const -24)
       )
      )
      (set_local $9
       (i32.sub
        (i32.const 0)
        (get_local $7)
       )
      )
      (loop $label$40
       (br_if $label$39
        (i64.eq
         (i64.load
          (i32.load
           (get_local $20)
          )
         )
         (get_local $1)
        )
       )
       (set_local $8
        (get_local $20)
       )
       (set_local $20
        (tee_local $17
         (i32.add
          (get_local $20)
          (i32.const -24)
         )
        )
       )
       (br_if $label$40
        (i32.ne
         (i32.add
          (get_local $17)
          (get_local $9)
         )
         (i32.const -24)
        )
       )
      )
     )
     (block $label$41
      (block $label$42
       (block $label$43
        (block $label$44
         (br_if $label$44
          (i32.eq
           (get_local $8)
           (get_local $7)
          )
         )
         (call $eosio_assert
          (i32.eq
           (i32.load
            (i32.add
             (tee_local $20
              (i32.load
               (i32.add
                (get_local $8)
                (i32.const -24)
               )
              )
             )
             (i32.const 92)
            )
           )
           (get_local $10)
          )
          (i32.const 32)
         )
         (br_if $label$43
          (get_local $20)
         )
         (br $label$42)
        )
        (br_if $label$42
         (i32.lt_s
          (tee_local $20
           (call $db_find_i64
            (i64.load
             (get_local $10)
            )
            (i64.load
             (get_local $15)
            )
            (i64.const -5915305344019464192)
            (get_local $1)
           )
          )
          (i32.const 0)
         )
        )
        (call $eosio_assert
         (i32.eq
          (i32.load offset=92
           (tee_local $20
            (call $_ZNK5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE31load_object_by_primary_iteratorEl
             (get_local $10)
             (get_local $20)
            )
           )
          )
          (get_local $10)
         )
         (i32.const 32)
        )
       )
       (set_local $17
        (i32.const 1)
       )
       (block $label$45
        (br_if $label$45
         (i32.load8_u offset=56
          (get_local $20)
         )
        )
        (set_local $17
         (i32.xor
          (i32.load8_u
           (i32.add
            (get_local $18)
            (i32.const 16)
           )
          )
          (i32.const 1)
         )
        )
       )
       (call $eosio_assert
        (i32.and
         (get_local $17)
         (i32.const 1)
        )
        (i32.const 2592)
       )
       (i32.store offset=52
        (get_local $21)
        (get_local $0)
       )
       (i32.store offset=48
        (get_local $21)
        (get_local $18)
       )
       (call $eosio_assert
        (i32.const 1)
        (i32.const 96)
       )
       (call $_ZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE6modifyIZNS1_15system_contract12update_votesEyyRKNSt3__16vectorIyNSC_9allocatorIyEEEEbE4$_21EEvRKS2_yOT_
        (get_local $10)
        (get_local $20)
        (i32.add
         (get_local $21)
         (i32.const 48)
        )
       )
       (br $label$41)
      )
      (call $eosio_assert
       (i32.xor
        (i32.load8_u
         (i32.add
          (get_local $18)
          (i32.const 16)
         )
        )
        (i32.const 1)
       )
       (i32.const 2640)
      )
     )
     (br_if $label$38
      (i32.ne
       (tee_local $18
        (i32.add
         (get_local $18)
         (i32.const 24)
        )
       )
       (get_local $6)
      )
     )
     (br $label$36)
    )
   )
   (set_local $13
    (i32.add
     (get_local $0)
     (i32.const 72)
    )
   )
   (set_local $14
    (i32.add
     (get_local $0)
     (i32.const 76)
    )
   )
   (set_local $15
    (i32.add
     (get_local $0)
     (i32.const 56)
    )
   )
   (loop $label$46
    (set_local $1
     (i64.load
      (get_local $18)
     )
    )
    (block $label$47
     (br_if $label$47
      (i32.eq
       (tee_local $8
        (i32.load
         (get_local $14)
        )
       )
       (tee_local $7
        (i32.load
         (get_local $13)
        )
       )
      )
     )
     (set_local $20
      (i32.add
       (get_local $8)
       (i32.const -24)
      )
     )
     (set_local $9
      (i32.sub
       (i32.const 0)
       (get_local $7)
      )
     )
     (loop $label$48
      (br_if $label$47
       (i64.eq
        (i64.load
         (i32.load
          (get_local $20)
         )
        )
        (get_local $1)
       )
      )
      (set_local $8
       (get_local $20)
      )
      (set_local $20
       (tee_local $17
        (i32.add
         (get_local $20)
         (i32.const -24)
        )
       )
      )
      (br_if $label$48
       (i32.ne
        (i32.add
         (get_local $17)
         (get_local $9)
        )
        (i32.const -24)
       )
      )
     )
    )
    (block $label$49
     (block $label$50
      (block $label$51
       (block $label$52
        (br_if $label$52
         (i32.eq
          (get_local $8)
          (get_local $7)
         )
        )
        (call $eosio_assert
         (i32.eq
          (i32.load
           (i32.add
            (tee_local $20
             (i32.load
              (i32.add
               (get_local $8)
               (i32.const -24)
              )
             )
            )
            (i32.const 92)
           )
          )
          (get_local $10)
         )
         (i32.const 32)
        )
        (br_if $label$51
         (get_local $20)
        )
        (br $label$50)
       )
       (br_if $label$50
        (i32.lt_s
         (tee_local $20
          (call $db_find_i64
           (i64.load
            (get_local $10)
           )
           (i64.load
            (get_local $15)
           )
           (i64.const -5915305344019464192)
           (get_local $1)
          )
         )
         (i32.const 0)
        )
       )
       (call $eosio_assert
        (i32.eq
         (i32.load offset=92
          (tee_local $20
           (call $_ZNK5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE31load_object_by_primary_iteratorEl
            (get_local $10)
            (get_local $20)
           )
          )
         )
         (get_local $10)
        )
        (i32.const 32)
       )
      )
      (call $eosio_assert
       (i32.const 1)
       (i32.const 2592)
      )
      (i32.store offset=52
       (get_local $21)
       (get_local $0)
      )
      (i32.store offset=48
       (get_local $21)
       (get_local $18)
      )
      (call $eosio_assert
       (i32.const 1)
       (i32.const 96)
      )
      (call $_ZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE6modifyIZNS1_15system_contract12update_votesEyyRKNSt3__16vectorIyNSC_9allocatorIyEEEEbE4$_21EEvRKS2_yOT_
       (get_local $10)
       (get_local $20)
       (i32.add
        (get_local $21)
        (i32.const 48)
       )
      )
      (br $label$49)
     )
     (call $eosio_assert
      (i32.xor
       (i32.load8_u
        (i32.add
         (get_local $18)
         (i32.const 16)
        )
       )
       (i32.const 1)
      )
      (i32.const 2640)
     )
    )
    (br_if $label$46
     (i32.ne
      (tee_local $18
       (i32.add
        (get_local $18)
        (i32.const 24)
       )
      )
      (get_local $6)
     )
    )
   )
  )
  (set_local $20
   (i32.load offset=28
    (get_local $21)
   )
  )
  (i32.store offset=52
   (get_local $21)
   (get_local $3)
  )
  (i32.store offset=48
   (get_local $21)
   (i32.add
    (get_local $21)
    (i32.const 16)
   )
  )
  (i32.store offset=56
   (get_local $21)
   (i32.add
    (get_local $21)
    (i32.const 32)
   )
  )
  (call $eosio_assert
   (i32.ne
    (get_local $20)
    (i32.const 0)
   )
   (i32.const 96)
  )
  (call $_ZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE6modifyIZNS1_15system_contract12update_votesEyyRKNSt3__16vectorIyNS6_9allocatorIyEEEEbE4$_22EEvRKS2_yOT_
   (get_local $5)
   (get_local $20)
   (i32.add
    (get_local $21)
    (i32.const 48)
   )
  )
  (block $label$53
   (br_if $label$53
    (i32.eqz
     (i32.load
      (i32.add
       (get_local $21)
       (i32.const 8)
      )
     )
    )
   )
   (call $_ZdlPv
    (i32.load
     (get_local $21)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $21)
    (i32.const 80)
   )
  )
 )
 (func $_ZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE6modifyIZNS1_15system_contract12update_votesEyyRKNSt3__16vectorIyNS6_9allocatorIyEEEEbE4$_19EEvRKS2_yOT_ (param $0 i32) (param $1 i32) (param $2 i32)
  (local $3 i64)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i64)
  (local $8 i32)
  (local $9 i32)
  (set_local $8
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (call $eosio_assert
   (i32.eq
    (i32.load offset=88
     (get_local $1)
    )
    (get_local $0)
   )
   (i32.const 144)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 192)
  )
  (f64.store offset=48
   (get_local $1)
   (f64.sub
    (f64.load offset=48
     (get_local $1)
    )
    (f64.load offset=40
     (i32.load offset=4
      (i32.load
       (get_local $2)
      )
     )
    )
   )
  )
  (set_local $3
   (i64.load
    (get_local $1)
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 256)
  )
  (set_local $7
   (i64.extend_u/i32
    (i32.shr_s
     (tee_local $6
      (i32.sub
       (tee_local $5
        (i32.load
         (i32.add
          (get_local $1)
          (i32.const 20)
         )
        )
       )
       (tee_local $4
        (i32.load offset=16
         (get_local $1)
        )
       )
      )
     )
     (i32.const 3)
    )
   )
  )
  (set_local $2
   (i32.const 16)
  )
  (loop $label$0
   (set_local $2
    (i32.add
     (get_local $2)
     (i32.const 1)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $7
      (i64.shr_u
       (get_local $7)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (block $label$1
   (br_if $label$1
    (i32.eq
     (get_local $4)
     (get_local $5)
    )
   )
   (set_local $2
    (i32.add
     (i32.and
      (get_local $6)
      (i32.const -8)
     )
     (get_local $2)
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.lt_u
      (tee_local $5
       (i32.add
        (get_local $2)
        (i32.const 49)
       )
      )
      (i32.const 513)
     )
    )
    (set_local $2
     (call $malloc
      (get_local $5)
     )
    )
    (br $label$2)
   )
   (i32.store offset=4
    (i32.const 0)
    (tee_local $2
     (i32.sub
      (get_local $9)
      (i32.and
       (i32.add
        (get_local $5)
        (i32.const 15)
       )
       (i32.const -16)
      )
     )
    )
   )
  )
  (i32.store offset=4
   (get_local $8)
   (get_local $2)
  )
  (i32.store
   (get_local $8)
   (get_local $2)
  )
  (i32.store offset=8
   (get_local $8)
   (i32.add
    (get_local $2)
    (get_local $5)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_10voter_infoE
    (get_local $8)
    (get_local $1)
   )
  )
  (call $db_update_i64
   (i32.load offset=92
    (get_local $1)
   )
   (i64.const 0)
   (get_local $2)
   (get_local $5)
  )
  (block $label$4
   (br_if $label$4
    (i32.lt_u
     (get_local $5)
     (i32.const 513)
    )
   )
   (call $free
    (get_local $2)
   )
  )
  (block $label$5
   (br_if $label$5
    (i64.lt_u
     (get_local $3)
     (i64.load offset=16
      (get_local $0)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $0)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $3)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $3)
      (i64.const -3)
     )
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
 )
 (func $_ZN11eosiosystem15system_contract23propagate_weight_changeERKNS_10voter_infoE (param $0 i32) (param $1 i32)
  (local $2 i64)
  (local $3 i32)
  (local $4 i32)
  (local $5 f64)
  (local $6 i32)
  (local $7 f64)
  (local $8 i32)
  (local $9 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 32)
    )
   )
  )
  (call $eosio_assert
   (i32.or
    (i64.eqz
     (i64.load offset=8
      (get_local $1)
     )
    )
    (i32.eqz
     (i32.load8_u offset=56
      (get_local $1)
     )
    )
   )
   (i32.const 2448)
  )
  (f64.store offset=24
   (get_local $9)
   (tee_local $7
    (f64.mul
     (f64.convert_s/i64
      (i64.load offset=32
       (get_local $1)
      )
     )
     (call $pow
      (f64.const 2)
      (f64.div
       (f64.convert_s/i64
        (i64.div_s
         (i64.add
          (i64.and
           (i64.div_u
            (call $current_time)
            (i64.const 1000000)
           )
           (i64.const 4294967295)
          )
          (i64.const -946684800)
         )
         (i64.const 604800)
        )
       )
       (f64.const 52)
      )
     )
    )
   )
  )
  (block $label$0
   (br_if $label$0
    (i32.eqz
     (i32.load8_u offset=56
      (get_local $1)
     )
    )
   )
   (f64.store offset=24
    (get_local $9)
    (tee_local $7
     (f64.add
      (get_local $7)
      (f64.load offset=48
       (get_local $1)
      )
     )
    )
   )
  )
  (block $label$1
   (br_if $label$1
    (i32.or
     (f64.le
      (tee_local $5
       (call $fabs
        (f64.sub
         (get_local $7)
         (f64.load offset=40
          (get_local $1)
         )
        )
       )
      )
      (f64.const 1)
     )
     (f64.ne
      (get_local $5)
      (get_local $5)
     )
    )
   )
   (block $label$2
    (br_if $label$2
     (i64.eqz
      (tee_local $2
       (i64.load
        (i32.add
         (get_local $1)
         (i32.const 8)
        )
       )
      )
     )
    )
    (set_local $8
     (call $_ZNK5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE3getEyPKc
      (tee_local $4
       (i32.add
        (get_local $0)
        (i32.const 8)
       )
      )
      (get_local $2)
      (i32.const 2576)
     )
    )
    (i32.store offset=20
     (get_local $9)
     (get_local $1)
    )
    (i32.store offset=16
     (get_local $9)
     (i32.add
      (get_local $9)
      (i32.const 24)
     )
    )
    (call $_ZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE6modifyIZNS1_15system_contract23propagate_weight_changeERKS2_E4$_25EEvS7_yOT_
     (get_local $4)
     (get_local $8)
     (i32.add
      (get_local $9)
      (i32.const 16)
     )
    )
    (call $_ZN11eosiosystem15system_contract23propagate_weight_changeERKNS_10voter_infoE
     (get_local $0)
     (get_local $8)
    )
    (br $label$1)
   )
   (f64.store offset=16
    (get_local $9)
    (f64.sub
     (get_local $7)
     (f64.load
      (i32.add
       (get_local $1)
       (i32.const 40)
      )
     )
    )
   )
   (br_if $label$1
    (i32.eq
     (tee_local $8
      (i32.load offset=16
       (get_local $1)
      )
     )
     (tee_local $3
      (i32.load
       (i32.add
        (get_local $1)
        (i32.const 20)
       )
      )
     )
    )
   )
   (set_local $4
    (i32.add
     (get_local $0)
     (i32.const 48)
    )
   )
   (loop $label$3
    (set_local $6
     (call $_ZNK5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE3getEyPKc
      (get_local $4)
      (i64.load
       (get_local $8)
      )
      (i32.const 2672)
     )
    )
    (i32.store offset=12
     (get_local $9)
     (get_local $0)
    )
    (i32.store offset=8
     (get_local $9)
     (i32.add
      (get_local $9)
      (i32.const 16)
     )
    )
    (call $_ZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE6modifyIZNS1_15system_contract23propagate_weight_changeERKNS1_10voter_infoEE4$_26EEvRKS2_yOT_
     (get_local $4)
     (get_local $6)
     (i32.add
      (get_local $9)
      (i32.const 8)
     )
    )
    (br_if $label$3
     (i32.ne
      (get_local $3)
      (tee_local $8
       (i32.add
        (get_local $8)
        (i32.const 8)
       )
      )
     )
    )
   )
  )
  (i32.store offset=16
   (get_local $9)
   (i32.add
    (get_local $9)
    (i32.const 24)
   )
  )
  (call $_ZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE6modifyIZNS1_15system_contract23propagate_weight_changeERKS2_E4$_27EEvS7_yOT_
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
   (get_local $1)
   (i32.add
    (get_local $9)
    (i32.const 16)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $9)
    (i32.const 32)
   )
  )
 )
 (func $_ZN5boost9container3dtl9flat_treeINS1_4pairIyNSt3__14pairIdbEEEENS1_9select1stIyEENS4_4lessIyEENS0_13new_allocatorIS7_EEE13insert_uniqueENS0_12vec_iteratorIPS7_Lb1EEEOS7_ (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i64)
  (local $8 i64)
  (local $9 i32)
  (local $10 i32)
  (local $11 i32)
  (local $12 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $12
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (block $label$0
   (block $label$1
    (block $label$2
     (block $label$3
      (block $label$4
       (block $label$5
        (block $label$6
         (br_if $label$6
          (i32.eq
           (tee_local $6
            (i32.add
             (tee_local $4
              (i32.load
               (get_local $1)
              )
             )
             (i32.mul
              (tee_local $5
               (i32.load offset=4
                (get_local $1)
               )
              )
              (i32.const 24)
             )
            )
           )
           (get_local $2)
          )
         )
         (br_if $label$5
          (i64.ge_u
           (tee_local $7
            (i64.load
             (get_local $3)
            )
           )
           (i64.load
            (get_local $2)
           )
          )
         )
        )
        (br_if $label$2
         (i32.eq
          (get_local $4)
          (get_local $2)
         )
        )
        (br_if $label$2
         (i64.lt_u
          (tee_local $8
           (i64.load
            (tee_local $6
             (i32.add
              (get_local $2)
              (i32.const -24)
             )
            )
           )
          )
          (tee_local $7
           (i64.load
            (get_local $3)
           )
          )
         )
        )
        (br_if $label$1
         (i64.ge_u
          (get_local $7)
          (get_local $8)
         )
        )
        (set_local $2
         (get_local $4)
        )
        (br_if $label$4
         (tee_local $9
          (i32.div_s
           (i32.sub
            (get_local $6)
            (get_local $4)
           )
           (i32.const 24)
          )
         )
        )
        (br $label$3)
       )
       (block $label$7
        (br_if $label$7
         (i32.eqz
          (tee_local $9
           (i32.div_s
            (i32.sub
             (get_local $6)
             (get_local $2)
            )
            (i32.const 24)
           )
          )
         )
        )
        (loop $label$8
         (block $label$9
          (br_if $label$9
           (i64.ge_u
            (i64.load
             (tee_local $10
              (i32.add
               (get_local $2)
               (i32.mul
                (tee_local $11
                 (i32.shr_u
                  (get_local $9)
                  (i32.const 1)
                 )
                )
                (i32.const 24)
               )
              )
             )
            )
            (get_local $7)
           )
          )
          (set_local $2
           (i32.add
            (get_local $10)
            (i32.const 24)
           )
          )
          (set_local $11
           (i32.sub
            (i32.add
             (get_local $9)
             (i32.const -1)
            )
            (get_local $11)
           )
          )
         )
         (br_if $label$8
          (tee_local $9
           (get_local $11)
          )
         )
        )
       )
       (br_if $label$2
        (i32.eq
         (get_local $2)
         (get_local $6)
        )
       )
       (set_local $6
        (get_local $2)
       )
       (br_if $label$2
        (i64.lt_u
         (get_local $7)
         (i64.load
          (get_local $2)
         )
        )
       )
       (br $label$1)
      )
      (loop $label$10
       (block $label$11
        (br_if $label$11
         (i64.ge_u
          (i64.load
           (tee_local $10
            (i32.add
             (get_local $2)
             (i32.mul
              (tee_local $11
               (i32.shr_u
                (get_local $9)
                (i32.const 1)
               )
              )
              (i32.const 24)
             )
            )
           )
          )
          (get_local $7)
         )
        )
        (set_local $2
         (i32.add
          (get_local $10)
          (i32.const 24)
         )
        )
        (set_local $11
         (i32.sub
          (i32.add
           (get_local $9)
           (i32.const -1)
          )
          (get_local $11)
         )
        )
       )
       (br_if $label$10
        (tee_local $9
         (get_local $11)
        )
       )
      )
     )
     (br_if $label$2
      (i32.eq
       (get_local $2)
       (get_local $6)
      )
     )
     (set_local $6
      (get_local $2)
     )
     (br_if $label$1
      (i64.ge_u
       (get_local $7)
       (i64.load
        (get_local $2)
       )
      )
     )
    )
    (i32.store offset=8
     (get_local $12)
     (get_local $2)
    )
    (block $label$12
     (br_if $label$12
      (i32.ne
       (i32.load offset=8
        (get_local $1)
       )
       (get_local $5)
      )
     )
     (call $_ZN5boost9container6vectorINS0_3dtl4pairIyNSt3__14pairIdbEEEENS0_13new_allocatorIS7_EEvE37priv_forward_range_insert_no_capacityINS2_17insert_move_proxyIS9_PS7_EEEENS0_12vec_iteratorISD_Lb0EEERKSD_jT_NS_11move_detail17integral_constantIjLj1EEE
      (get_local $0)
      (get_local $1)
      (i32.add
       (get_local $12)
       (i32.const 8)
      )
      (i32.const 1)
      (get_local $3)
     )
     (br $label$0)
    )
    (call $_ZN5boost9container6vectorINS0_3dtl4pairIyNSt3__14pairIdbEEEENS0_13new_allocatorIS7_EEvE40priv_forward_range_insert_expand_forwardINS2_17insert_move_proxyIS9_PS7_EEEEvSD_jT_
     (get_local $1)
     (get_local $2)
     (i32.const 1)
     (get_local $3)
    )
    (i32.store
     (get_local $0)
     (i32.add
      (i32.load
       (get_local $1)
      )
      (i32.mul
       (i32.div_s
        (i32.sub
         (get_local $2)
         (get_local $4)
        )
        (i32.const 24)
       )
       (i32.const 24)
      )
     )
    )
    (br $label$0)
   )
   (i32.store
    (get_local $0)
    (i32.add
     (get_local $4)
     (i32.mul
      (i32.div_s
       (i32.sub
        (get_local $6)
        (get_local $4)
       )
       (i32.const 24)
      )
      (i32.const 24)
     )
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $12)
    (i32.const 16)
   )
  )
 )
 (func $_ZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE6modifyIZNS1_15system_contract12update_votesEyyRKNSt3__16vectorIyNS6_9allocatorIyEEEEbE4$_20EEvRKS2_yOT_ (param $0 i32) (param $1 i32) (param $2 i32)
  (local $3 i64)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i64)
  (local $8 i32)
  (local $9 i32)
  (set_local $8
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (call $eosio_assert
   (i32.eq
    (i32.load offset=88
     (get_local $1)
    )
    (get_local $0)
   )
   (i32.const 144)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 192)
  )
  (f64.store offset=48
   (get_local $1)
   (f64.add
    (f64.load
     (i32.load
      (get_local $2)
     )
    )
    (f64.load offset=48
     (get_local $1)
    )
   )
  )
  (set_local $3
   (i64.load
    (get_local $1)
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 256)
  )
  (set_local $7
   (i64.extend_u/i32
    (i32.shr_s
     (tee_local $6
      (i32.sub
       (tee_local $5
        (i32.load
         (i32.add
          (get_local $1)
          (i32.const 20)
         )
        )
       )
       (tee_local $4
        (i32.load offset=16
         (get_local $1)
        )
       )
      )
     )
     (i32.const 3)
    )
   )
  )
  (set_local $2
   (i32.const 16)
  )
  (loop $label$0
   (set_local $2
    (i32.add
     (get_local $2)
     (i32.const 1)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $7
      (i64.shr_u
       (get_local $7)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (block $label$1
   (br_if $label$1
    (i32.eq
     (get_local $4)
     (get_local $5)
    )
   )
   (set_local $2
    (i32.add
     (i32.and
      (get_local $6)
      (i32.const -8)
     )
     (get_local $2)
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.lt_u
      (tee_local $5
       (i32.add
        (get_local $2)
        (i32.const 49)
       )
      )
      (i32.const 513)
     )
    )
    (set_local $2
     (call $malloc
      (get_local $5)
     )
    )
    (br $label$2)
   )
   (i32.store offset=4
    (i32.const 0)
    (tee_local $2
     (i32.sub
      (get_local $9)
      (i32.and
       (i32.add
        (get_local $5)
        (i32.const 15)
       )
       (i32.const -16)
      )
     )
    )
   )
  )
  (i32.store offset=4
   (get_local $8)
   (get_local $2)
  )
  (i32.store
   (get_local $8)
   (get_local $2)
  )
  (i32.store offset=8
   (get_local $8)
   (i32.add
    (get_local $2)
    (get_local $5)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_10voter_infoE
    (get_local $8)
    (get_local $1)
   )
  )
  (call $db_update_i64
   (i32.load offset=92
    (get_local $1)
   )
   (i64.const 0)
   (get_local $2)
   (get_local $5)
  )
  (block $label$4
   (br_if $label$4
    (i32.lt_u
     (get_local $5)
     (i32.const 513)
    )
   )
   (call $free
    (get_local $2)
   )
  )
  (block $label$5
   (br_if $label$5
    (i64.lt_u
     (get_local $3)
     (i64.load offset=16
      (get_local $0)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $0)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $3)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $3)
      (i64.const -3)
     )
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
 )
 (func $_ZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE6modifyIZNS1_15system_contract12update_votesEyyRKNSt3__16vectorIyNSC_9allocatorIyEEEEbE4$_21EEvRKS2_yOT_ (param $0 i32) (param $1 i32) (param $2 i32)
  (local $3 i64)
  (local $4 f64)
  (local $5 i32)
  (local $6 i64)
  (local $7 i32)
  (local $8 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $7
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (call $eosio_assert
   (i32.eq
    (i32.load
     (i32.add
      (get_local $1)
      (i32.const 92)
     )
    )
    (get_local $0)
   )
   (i32.const 144)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 192)
  )
  (f64.store
   (tee_local $8
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
   )
   (f64.max
    (f64.add
     (f64.load offset=8
      (i32.load
       (get_local $2)
      )
     )
     (tee_local $4
      (f64.load
       (get_local $8)
      )
     )
    )
    (f64.const 0)
   )
  )
  (f64.store offset=24
   (tee_local $8
    (get_local $7)
   )
   (select
    (f64.neg
     (get_local $4)
    )
    (get_local $4)
    (i32.load8_u
     (i32.add
      (get_local $1)
      (i32.const 56)
     )
    )
   )
  )
  (set_local $3
   (i64.load
    (get_local $1)
   )
  )
  (f64.store
   (tee_local $5
    (i32.add
     (i32.load offset=4
      (get_local $2)
     )
     (i32.const 288)
    )
   )
   (f64.add
    (f64.load offset=8
     (i32.load
      (get_local $2)
     )
    )
    (f64.load
     (get_local $5)
    )
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 256)
  )
  (set_local $6
   (i64.load32_u offset=16
    (get_local $1)
   )
  )
  (set_local $2
   (i32.const 64)
  )
  (loop $label$0
   (set_local $2
    (i32.add
     (get_local $2)
     (i32.const 1)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $6
      (i64.shr_u
       (get_local $6)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (set_local $2
   (i32.add
    (tee_local $5
     (select
      (i32.load
       (i32.add
        (get_local $1)
        (i32.const 64)
       )
      )
      (i32.shr_u
       (tee_local $5
        (i32.load8_u offset=60
         (get_local $1)
        )
       )
       (i32.const 1)
      )
      (i32.and
       (get_local $5)
       (i32.const 1)
      )
     )
    )
    (get_local $2)
   )
  )
  (set_local $6
   (i64.extend_u/i32
    (get_local $5)
   )
  )
  (loop $label$1
   (set_local $2
    (i32.add
     (get_local $2)
     (i32.const 1)
    )
   )
   (br_if $label$1
    (i64.ne
     (tee_local $6
      (i64.shr_u
       (get_local $6)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.lt_u
      (get_local $2)
      (i32.const 513)
     )
    )
    (set_local $7
     (call $malloc
      (get_local $2)
     )
    )
    (br $label$2)
   )
   (i32.store offset=4
    (i32.const 0)
    (tee_local $7
     (i32.sub
      (get_local $7)
      (i32.and
       (i32.add
        (get_local $2)
        (i32.const 15)
       )
       (i32.const -16)
      )
     )
    )
   )
  )
  (i32.store offset=12
   (get_local $8)
   (get_local $7)
  )
  (i32.store offset=8
   (get_local $8)
   (get_local $7)
  )
  (i32.store offset=16
   (get_local $8)
   (i32.add
    (get_local $7)
    (get_local $2)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_13producer_infoE
    (i32.add
     (get_local $8)
     (i32.const 8)
    )
    (get_local $1)
   )
  )
  (call $db_update_i64
   (i32.load offset=96
    (get_local $1)
   )
   (i64.const 0)
   (get_local $7)
   (get_local $2)
  )
  (block $label$4
   (br_if $label$4
    (i32.lt_u
     (get_local $2)
     (i32.const 513)
    )
   )
   (call $free
    (get_local $7)
   )
  )
  (block $label$5
   (br_if $label$5
    (i64.lt_u
     (get_local $3)
     (i64.load offset=16
      (get_local $0)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $0)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $3)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $3)
      (i64.const -3)
     )
    )
   )
  )
  (f64.store offset=40
   (get_local $8)
   (select
    (f64.neg
     (tee_local $4
      (f64.load
       (i32.add
        (get_local $1)
        (i32.const 8)
       )
      )
     )
    )
    (get_local $4)
    (i32.load8_u
     (i32.add
      (get_local $1)
      (i32.const 56)
     )
    )
   )
  )
  (block $label$6
   (br_if $label$6
    (i32.eqz
     (call $memcmp
      (i32.add
       (get_local $8)
       (i32.const 24)
      )
      (i32.add
       (get_local $8)
       (i32.const 40)
      )
      (i32.const 8)
     )
    )
   )
   (block $label$7
    (br_if $label$7
     (i32.gt_s
      (tee_local $2
       (i32.load offset=100
        (get_local $1)
       )
      )
      (i32.const -1)
     )
    )
    (i32.store
     (i32.add
      (get_local $1)
      (i32.const 100)
     )
     (tee_local $2
      (call $db_idx_double_find_primary
       (i64.load
        (get_local $0)
       )
       (i64.load offset=8
        (get_local $0)
       )
       (i64.const -5915305344019464192)
       (i32.add
        (get_local $8)
        (i32.const 32)
       )
       (get_local $3)
      )
     )
    )
   )
   (call $db_idx_double_update
    (get_local $2)
    (i64.const 0)
    (i32.add
     (get_local $8)
     (i32.const 40)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 48)
   )
  )
 )
 (func $_ZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE6modifyIZNS1_15system_contract12update_votesEyyRKNSt3__16vectorIyNS6_9allocatorIyEEEEbE4$_22EEvRKS2_yOT_ (param $0 i32) (param $1 i32) (param $2 i32)
  (local $3 i64)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i64)
  (local $8 i32)
  (local $9 i32)
  (set_local $8
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (call $eosio_assert
   (i32.eq
    (i32.load offset=88
     (get_local $1)
    )
    (get_local $0)
   )
   (i32.const 144)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 192)
  )
  (i64.store offset=40
   (get_local $1)
   (i64.load
    (i32.load
     (get_local $2)
    )
   )
  )
  (set_local $6
   (i32.const 16)
  )
  (set_local $7
   (tee_local $3
    (i64.load
     (get_local $1)
    )
   )
  )
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $5
      (i32.add
       (get_local $1)
       (i32.const 16)
      )
     )
     (tee_local $4
      (i32.load offset=4
       (get_local $2)
      )
     )
    )
   )
   (call $_ZNSt3__16vectorIyNS_9allocatorIyEEE6assignIPyEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIyNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_
    (get_local $5)
    (i32.load
     (get_local $4)
    )
    (i32.load offset=4
     (get_local $4)
    )
   )
   (set_local $7
    (i64.load
     (get_local $1)
    )
   )
  )
  (i64.store offset=8
   (get_local $1)
   (i64.load
    (i32.load offset=8
     (get_local $2)
    )
   )
  )
  (call $eosio_assert
   (i64.eq
    (get_local $3)
    (get_local $7)
   )
   (i32.const 256)
  )
  (set_local $7
   (i64.extend_u/i32
    (i32.shr_s
     (tee_local $4
      (i32.sub
       (tee_local $2
        (i32.load
         (i32.add
          (get_local $1)
          (i32.const 20)
         )
        )
       )
       (tee_local $5
        (i32.load
         (get_local $5)
        )
       )
      )
     )
     (i32.const 3)
    )
   )
  )
  (loop $label$1
   (set_local $6
    (i32.add
     (get_local $6)
     (i32.const 1)
    )
   )
   (br_if $label$1
    (i64.ne
     (tee_local $7
      (i64.shr_u
       (get_local $7)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (block $label$2
   (br_if $label$2
    (i32.eq
     (get_local $5)
     (get_local $2)
    )
   )
   (set_local $6
    (i32.add
     (i32.and
      (get_local $4)
      (i32.const -8)
     )
     (get_local $6)
    )
   )
  )
  (block $label$3
   (block $label$4
    (br_if $label$4
     (i32.lt_u
      (tee_local $2
       (i32.add
        (get_local $6)
        (i32.const 49)
       )
      )
      (i32.const 513)
     )
    )
    (set_local $6
     (call $malloc
      (get_local $2)
     )
    )
    (br $label$3)
   )
   (i32.store offset=4
    (i32.const 0)
    (tee_local $6
     (i32.sub
      (get_local $9)
      (i32.and
       (i32.add
        (get_local $2)
        (i32.const 15)
       )
       (i32.const -16)
      )
     )
    )
   )
  )
  (i32.store offset=4
   (get_local $8)
   (get_local $6)
  )
  (i32.store
   (get_local $8)
   (get_local $6)
  )
  (i32.store offset=8
   (get_local $8)
   (i32.add
    (get_local $6)
    (get_local $2)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_10voter_infoE
    (get_local $8)
    (get_local $1)
   )
  )
  (call $db_update_i64
   (i32.load offset=92
    (get_local $1)
   )
   (i64.const 0)
   (get_local $6)
   (get_local $2)
  )
  (block $label$5
   (br_if $label$5
    (i32.lt_u
     (get_local $2)
     (i32.const 513)
    )
   )
   (call $free
    (get_local $6)
   )
  )
  (block $label$6
   (br_if $label$6
    (i64.lt_u
     (get_local $3)
     (i64.load offset=16
      (get_local $0)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $0)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $3)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $3)
      (i64.const -3)
     )
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
 )
 (func $_ZNSt3__16vectorIyNS_9allocatorIyEEE6assignIPyEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIyNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ (param $0 i32) (param $1 i32) (param $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (block $label$0
   (block $label$1
    (block $label$2
     (block $label$3
      (br_if $label$3
       (i32.le_u
        (tee_local $4
         (i32.shr_s
          (tee_local $3
           (i32.sub
            (get_local $2)
            (get_local $1)
           )
          )
          (i32.const 3)
         )
        )
        (i32.shr_s
         (i32.sub
          (tee_local $8
           (i32.load offset=8
            (get_local $0)
           )
          )
          (tee_local $5
           (i32.load
            (get_local $0)
           )
          )
         )
         (i32.const 3)
        )
       )
      )
      (block $label$4
       (br_if $label$4
        (i32.eqz
         (get_local $5)
        )
       )
       (i32.store offset=4
        (get_local $0)
        (get_local $5)
       )
       (call $_ZdlPv
        (get_local $5)
       )
       (set_local $8
        (i32.const 0)
       )
       (i32.store
        (i32.add
         (get_local $0)
         (i32.const 8)
        )
        (i32.const 0)
       )
       (i64.store align=4
        (get_local $0)
        (i64.const 0)
       )
      )
      (br_if $label$0
       (i32.ge_u
        (get_local $4)
        (i32.const 536870912)
       )
      )
      (set_local $5
       (i32.const 536870911)
      )
      (block $label$5
       (br_if $label$5
        (i32.gt_u
         (i32.shr_s
          (get_local $8)
          (i32.const 3)
         )
         (i32.const 268435454)
        )
       )
       (set_local $5
        (get_local $4)
       )
       (br_if $label$5
        (i32.lt_u
         (tee_local $2
          (i32.shr_s
           (get_local $8)
           (i32.const 2)
          )
         )
         (get_local $4)
        )
       )
       (set_local $5
        (get_local $2)
       )
       (br_if $label$0
        (i32.ge_u
         (get_local $2)
         (i32.const 536870912)
        )
       )
      )
      (i32.store
       (get_local $0)
       (tee_local $5
        (call $_Znwj
         (tee_local $4
          (i32.shl
           (get_local $5)
           (i32.const 3)
          )
         )
        )
       )
      )
      (i32.store offset=4
       (get_local $0)
       (get_local $5)
      )
      (i32.store
       (i32.add
        (get_local $0)
        (i32.const 8)
       )
       (i32.add
        (get_local $5)
        (get_local $4)
       )
      )
      (br_if $label$2
       (i32.lt_s
        (get_local $3)
        (i32.const 1)
       )
      )
      (drop
       (call $memcpy
        (get_local $5)
        (get_local $1)
        (get_local $3)
       )
      )
      (i32.store
       (tee_local $0
        (i32.add
         (get_local $0)
         (i32.const 4)
        )
       )
       (i32.add
        (i32.load
         (get_local $0)
        )
        (get_local $3)
       )
      )
      (return)
     )
     (block $label$6
      (br_if $label$6
       (i32.eqz
        (tee_local $7
         (i32.shr_s
          (tee_local $6
           (i32.sub
            (tee_local $8
             (select
              (i32.add
               (get_local $1)
               (tee_local $3
                (i32.sub
                 (i32.load offset=4
                  (get_local $0)
                 )
                 (get_local $5)
                )
               )
              )
              (get_local $2)
              (i32.gt_u
               (get_local $4)
               (tee_local $3
                (i32.shr_s
                 (get_local $3)
                 (i32.const 3)
                )
               )
              )
             )
            )
            (get_local $1)
           )
          )
          (i32.const 3)
         )
        )
       )
      )
      (drop
       (call $memmove
        (get_local $5)
        (get_local $1)
        (get_local $6)
       )
      )
     )
     (br_if $label$1
      (i32.le_u
       (get_local $4)
       (get_local $3)
      )
     )
     (br_if $label$2
      (i32.lt_s
       (tee_local $1
        (i32.sub
         (get_local $2)
         (get_local $8)
        )
       )
       (i32.const 1)
      )
     )
     (drop
      (call $memcpy
       (i32.load
        (tee_local $0
         (i32.add
          (get_local $0)
          (i32.const 4)
         )
        )
       )
       (get_local $8)
       (get_local $1)
      )
     )
     (i32.store
      (get_local $0)
      (i32.add
       (i32.load
        (get_local $0)
       )
       (get_local $1)
      )
     )
     (return)
    )
    (return)
   )
   (i32.store
    (i32.add
     (get_local $0)
     (i32.const 4)
    )
    (i32.add
     (get_local $5)
     (i32.shl
      (get_local $7)
      (i32.const 3)
     )
    )
   )
   (return)
  )
  (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
   (get_local $0)
  )
  (unreachable)
 )
 (func $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_10voter_infoE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $3
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (get_local $1)
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (tee_local $0
       (call $_ZN5eosiolsINS_10datastreamIPcEEyEERT_S5_RKNSt3__16vectorIT0_NS6_9allocatorIS8_EEEE
        (get_local $0)
        (i32.add
         (get_local $1)
         (i32.const 16)
        )
       )
      )
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 32)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 40)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 48)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (i32.store8 offset=15
   (get_local $3)
   (i32.load8_u offset=56
    (get_local $1)
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 0)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $3)
     (i32.const 15)
    )
    (i32.const 1)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 1)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 3)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 60)
    )
    (i32.const 4)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 4)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 3)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 64)
    )
    (i32.const 4)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 4)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 72)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 80)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $3)
    (i32.const 16)
   )
  )
  (get_local $0)
 )
 (func $_ZN5eosiolsINS_10datastreamIPcEEyEERT_S5_RKNSt3__16vectorIT0_NS6_9allocatorIS8_EEEE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i64)
  (local $7 i32)
  (local $8 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $8
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (set_local $6
   (i64.extend_u/i32
    (i32.shr_s
     (i32.sub
      (i32.load offset=4
       (get_local $1)
      )
      (i32.load
       (get_local $1)
      )
     )
     (i32.const 3)
    )
   )
  )
  (set_local $7
   (i32.load offset=4
    (get_local $0)
   )
  )
  (set_local $4
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
  )
  (set_local $5
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
  )
  (loop $label$0
   (set_local $2
    (i32.wrap/i64
     (get_local $6)
    )
   )
   (i32.store8 offset=15
    (get_local $8)
    (i32.or
     (i32.shl
      (tee_local $3
       (i64.ne
        (tee_local $6
         (i64.shr_u
          (get_local $6)
          (i64.const 7)
         )
        )
        (i64.const 0)
       )
      )
      (i32.const 7)
     )
     (i32.and
      (get_local $2)
      (i32.const 127)
     )
    )
   )
   (call $eosio_assert
    (i32.gt_s
     (i32.sub
      (i32.load
       (get_local $4)
      )
      (get_local $7)
     )
     (i32.const 0)
    )
    (i32.const 320)
   )
   (drop
    (call $memcpy
     (i32.load
      (get_local $5)
     )
     (i32.add
      (get_local $8)
      (i32.const 15)
     )
     (i32.const 1)
    )
   )
   (i32.store
    (get_local $5)
    (tee_local $7
     (i32.add
      (i32.load
       (get_local $5)
      )
      (i32.const 1)
     )
    )
   )
   (br_if $label$0
    (get_local $3)
   )
  )
  (block $label$1
   (br_if $label$1
    (i32.eq
     (tee_local $5
      (i32.load
       (get_local $1)
      )
     )
     (tee_local $3
      (i32.load
       (i32.add
        (get_local $1)
        (i32.const 4)
       )
      )
     )
    )
   )
   (set_local $2
    (i32.add
     (get_local $0)
     (i32.const 4)
    )
   )
   (loop $label$2
    (call $eosio_assert
     (i32.gt_s
      (i32.sub
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 8)
        )
       )
       (get_local $7)
      )
      (i32.const 7)
     )
     (i32.const 320)
    )
    (drop
     (call $memcpy
      (i32.load
       (get_local $2)
      )
      (get_local $5)
      (i32.const 8)
     )
    )
    (i32.store
     (get_local $2)
     (tee_local $7
      (i32.add
       (i32.load
        (get_local $2)
       )
       (i32.const 8)
      )
     )
    )
    (br_if $label$2
     (i32.ne
      (get_local $3)
      (tee_local $5
       (i32.add
        (get_local $5)
        (i32.const 8)
       )
      )
     )
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
  (get_local $0)
 )
 (func $_ZN5boost9container6vectorINS0_3dtl4pairIyNSt3__14pairIdbEEEENS0_13new_allocatorIS7_EEvE37priv_forward_range_insert_no_capacityINS2_17insert_move_proxyIS9_PS7_EEEENS0_12vec_iteratorISD_Lb0EEERKSD_jT_NS_11move_detail17integral_constantIjLj1EEE (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32) (param $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (local $10 i32)
  (set_local $6
   (i32.div_s
    (i32.sub
     (tee_local $5
      (i32.load
       (get_local $2)
      )
     )
     (i32.load
      (get_local $1)
     )
    )
    (i32.const 24)
   )
  )
  (block $label$0
   (br_if $label$0
    (i32.lt_u
     (i32.sub
      (i32.const 178956970)
      (tee_local $2
       (i32.load offset=8
        (get_local $1)
       )
      )
     )
     (i32.add
      (i32.sub
       (get_local $3)
       (get_local $2)
      )
      (tee_local $10
       (i32.load offset=4
        (get_local $1)
       )
      )
     )
    )
   )
   (block $label$1
    (block $label$2
     (br_if $label$2
      (i32.gt_u
       (get_local $2)
       (i32.const 536870911)
      )
     )
     (set_local $2
      (i32.div_u
       (i32.shl
        (get_local $2)
        (i32.const 3)
       )
       (i32.const 5)
      )
     )
     (br $label$1)
    )
    (set_local $2
     (select
      (i32.const -1)
      (i32.shl
       (get_local $2)
       (i32.const 3)
      )
      (i32.gt_u
       (get_local $2)
       (i32.const -1610612737)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ge_u
     (tee_local $7
      (select
       (tee_local $10
        (i32.add
         (get_local $10)
         (get_local $3)
        )
       )
       (tee_local $2
        (select
         (get_local $2)
         (i32.const 178956970)
         (i32.lt_u
          (get_local $2)
          (i32.const 178956970)
         )
        )
       )
       (i32.gt_u
        (get_local $10)
        (get_local $2)
       )
      )
     )
     (i32.const 178956971)
    )
   )
   (set_local $2
    (tee_local $9
     (call $_Znwj
      (i32.mul
       (get_local $7)
       (i32.const 24)
      )
     )
    )
   )
   (block $label$3
    (br_if $label$3
     (i32.eq
      (tee_local $8
       (i32.load
        (get_local $1)
       )
      )
      (get_local $5)
     )
    )
    (set_local $2
     (get_local $9)
    )
    (br_if $label$3
     (i32.eqz
      (get_local $8)
     )
    )
    (set_local $10
     (get_local $8)
    )
    (set_local $2
     (get_local $9)
    )
    (loop $label$4
     (i64.store
      (get_local $2)
      (i64.load
       (get_local $10)
      )
     )
     (i64.store
      (i32.add
       (get_local $2)
       (i32.const 16)
      )
      (i64.load
       (i32.add
        (get_local $10)
        (i32.const 16)
       )
      )
     )
     (i64.store
      (i32.add
       (get_local $2)
       (i32.const 8)
      )
      (i64.load
       (i32.add
        (get_local $10)
        (i32.const 8)
       )
      )
     )
     (set_local $2
      (i32.add
       (get_local $2)
       (i32.const 24)
      )
     )
     (br_if $label$4
      (i32.ne
       (tee_local $10
        (i32.add
         (get_local $10)
         (i32.const 24)
        )
       )
       (get_local $5)
      )
     )
    )
   )
   (i64.store
    (get_local $2)
    (i64.load
     (get_local $4)
    )
   )
   (i64.store
    (i32.add
     (get_local $2)
     (i32.const 16)
    )
    (i64.load
     (i32.add
      (get_local $4)
      (i32.const 16)
     )
    )
   )
   (i64.store offset=8
    (get_local $2)
    (i64.load offset=8
     (get_local $4)
    )
   )
   (set_local $2
    (i32.add
     (get_local $2)
     (i32.mul
      (get_local $3)
      (i32.const 24)
     )
    )
   )
   (block $label$5
    (br_if $label$5
     (i32.eqz
      (get_local $8)
     )
    )
    (block $label$6
     (br_if $label$6
      (i32.eq
       (tee_local $10
        (i32.add
         (get_local $8)
         (i32.mul
          (i32.load
           (i32.add
            (get_local $1)
            (i32.const 4)
           )
          )
          (i32.const 24)
         )
        )
       )
       (get_local $5)
      )
     )
     (loop $label$7
      (i64.store
       (get_local $2)
       (i64.load
        (get_local $5)
       )
      )
      (i64.store
       (i32.add
        (get_local $2)
        (i32.const 16)
       )
       (i64.load
        (i32.add
         (get_local $5)
         (i32.const 16)
        )
       )
      )
      (i64.store
       (i32.add
        (get_local $2)
        (i32.const 8)
       )
       (i64.load
        (i32.add
         (get_local $5)
         (i32.const 8)
        )
       )
      )
      (set_local $2
       (i32.add
        (get_local $2)
        (i32.const 24)
       )
      )
      (br_if $label$7
       (i32.ne
        (tee_local $5
         (i32.add
          (get_local $5)
          (i32.const 24)
         )
        )
        (get_local $10)
       )
      )
     )
    )
    (call $_ZdlPv
     (i32.load
      (get_local $1)
     )
    )
   )
   (i32.store
    (get_local $1)
    (get_local $9)
   )
   (i32.store
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
    (get_local $7)
   )
   (i32.store
    (i32.add
     (get_local $1)
     (i32.const 4)
    )
    (i32.div_s
     (i32.sub
      (get_local $2)
      (get_local $9)
     )
     (i32.const 24)
    )
   )
   (i32.store
    (get_local $0)
    (i32.add
     (get_local $9)
     (i32.mul
      (get_local $6)
      (i32.const 24)
     )
    )
   )
   (return)
  )
  (call $abort)
  (unreachable)
 )
 (func $_ZN5boost9container6vectorINS0_3dtl4pairIyNSt3__14pairIdbEEEENS0_13new_allocatorIS7_EEvE40priv_forward_range_insert_expand_forwardINS2_17insert_move_proxyIS9_PS7_EEEEvSD_jT_ (param $0 i32) (param $1 i32) (param $2 i32) (param $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (local $10 i32)
  (local $11 i32)
  (local $12 i32)
  (block $label$0
   (block $label$1
    (block $label$2
     (br_if $label$2
      (i32.eqz
       (get_local $2)
      )
     )
     (br_if $label$1
      (i32.eqz
       (tee_local $12
        (i32.sub
         (tee_local $6
          (i32.add
           (tee_local $4
            (i32.load
             (get_local $0)
            )
           )
           (i32.mul
            (tee_local $5
             (i32.load offset=4
              (get_local $0)
             )
            )
            (i32.const 24)
           )
          )
         )
         (get_local $1)
        )
       )
      )
     )
     (br_if $label$0
      (i32.ge_u
       (i32.div_s
        (get_local $12)
        (i32.const 24)
       )
       (get_local $2)
      )
     )
     (block $label$3
      (br_if $label$3
       (i32.eq
        (get_local $6)
        (get_local $1)
       )
      )
      (set_local $11
       (i32.mul
        (get_local $2)
        (i32.const 24)
       )
      )
      (set_local $12
       (get_local $1)
      )
      (loop $label$4
       (i64.store
        (tee_local $10
         (i32.add
          (get_local $12)
          (get_local $11)
         )
        )
        (i64.load
         (get_local $12)
        )
       )
       (i64.store
        (i32.add
         (get_local $10)
         (i32.const 16)
        )
        (i64.load
         (i32.add
          (get_local $12)
          (i32.const 16)
         )
        )
       )
       (i64.store
        (i32.add
         (get_local $10)
         (i32.const 8)
        )
        (i64.load
         (i32.add
          (get_local $12)
          (i32.const 8)
         )
        )
       )
       (br_if $label$4
        (i32.ne
         (get_local $6)
         (tee_local $12
          (i32.add
           (get_local $12)
           (i32.const 24)
          )
         )
        )
       )
      )
     )
     (i64.store
      (get_local $1)
      (i64.load
       (get_local $3)
      )
     )
     (i64.store offset=8
      (get_local $1)
      (i64.load offset=8
       (get_local $3)
      )
     )
     (i32.store8
      (i32.add
       (get_local $1)
       (i32.const 16)
      )
      (i32.load8_u
       (tee_local $12
        (i32.add
         (get_local $3)
         (i32.const 16)
        )
       )
      )
     )
     (i64.store
      (get_local $6)
      (i64.load
       (get_local $3)
      )
     )
     (i64.store
      (i32.add
       (tee_local $10
        (i32.add
         (get_local $4)
         (i32.mul
          (get_local $5)
          (i32.const 24)
         )
        )
       )
       (i32.const 16)
      )
      (i64.load
       (get_local $12)
      )
     )
     (i64.store offset=8
      (get_local $10)
      (i64.load offset=8
       (get_local $3)
      )
     )
     (i32.store
      (tee_local $12
       (i32.add
        (get_local $0)
        (i32.const 4)
       )
      )
      (i32.add
       (i32.load
        (get_local $12)
       )
       (get_local $2)
      )
     )
    )
    (return)
   )
   (i64.store
    (get_local $6)
    (i64.load
     (get_local $3)
    )
   )
   (i64.store
    (i32.add
     (get_local $6)
     (i32.const 16)
    )
    (i64.load
     (i32.add
      (get_local $3)
      (i32.const 16)
     )
    )
   )
   (i64.store offset=8
    (get_local $6)
    (i64.load offset=8
     (get_local $3)
    )
   )
   (i32.store
    (tee_local $12
     (i32.add
      (get_local $0)
      (i32.const 4)
     )
    )
    (i32.add
     (i32.load
      (get_local $12)
     )
     (get_local $2)
    )
   )
   (return)
  )
  (set_local $9
   (i32.add
    (get_local $6)
    (tee_local $8
     (i32.mul
      (get_local $2)
      (i32.const -24)
     )
    )
   )
  )
  (set_local $12
   (i32.const 0)
  )
  (set_local $7
   (i32.add
    (get_local $6)
    (i32.mul
     (i32.sub
      (i32.const 0)
      (get_local $2)
     )
     (i32.const 24)
    )
   )
  )
  (loop $label$5
   (i64.store
    (tee_local $10
     (i32.add
      (get_local $6)
      (get_local $12)
     )
    )
    (i64.load
     (tee_local $11
      (i32.add
       (get_local $9)
       (get_local $12)
      )
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $10)
     (i32.const 16)
    )
    (i64.load
     (i32.add
      (get_local $11)
      (i32.const 16)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $10)
     (i32.const 8)
    )
    (i64.load
     (i32.add
      (get_local $11)
      (i32.const 8)
     )
    )
   )
   (br_if $label$5
    (i32.add
     (get_local $8)
     (tee_local $12
      (i32.add
       (get_local $12)
       (i32.const 24)
      )
     )
    )
   )
  )
  (i32.store
   (tee_local $12
    (i32.add
     (get_local $0)
     (i32.const 4)
    )
   )
   (i32.add
    (i32.load
     (get_local $12)
    )
    (get_local $2)
   )
  )
  (block $label$6
   (br_if $label$6
    (i32.eq
     (get_local $7)
     (get_local $1)
    )
   )
   (set_local $6
    (i32.sub
     (tee_local $11
      (i32.mul
       (get_local $2)
       (i32.const -24)
      )
     )
     (get_local $1)
    )
   )
   (set_local $12
    (i32.add
     (i32.add
      (get_local $4)
      (i32.mul
       (get_local $5)
       (i32.const 24)
      )
     )
     (i32.const -8)
    )
   )
   (loop $label$7
    (i64.store
     (i32.add
      (get_local $12)
      (i32.const -16)
     )
     (i64.load
      (i32.add
       (tee_local $10
        (i32.add
         (get_local $12)
         (get_local $11)
        )
       )
       (i32.const -16)
      )
     )
    )
    (i64.store
     (i32.add
      (get_local $12)
      (i32.const -8)
     )
     (i64.load
      (i32.add
       (get_local $10)
       (i32.const -8)
      )
     )
    )
    (i32.store8
     (get_local $12)
     (i32.load8_u
      (get_local $10)
     )
    )
    (br_if $label$7
     (i32.ne
      (i32.add
       (tee_local $12
        (i32.add
         (get_local $12)
         (i32.const -24)
        )
       )
       (get_local $6)
      )
      (i32.const -8)
     )
    )
   )
  )
  (i64.store
   (get_local $1)
   (i64.load
    (get_local $3)
   )
  )
  (i64.store offset=8
   (get_local $1)
   (i64.load offset=8
    (get_local $3)
   )
  )
  (i32.store8
   (i32.add
    (get_local $1)
    (i32.const 16)
   )
   (i32.load8_u
    (i32.add
     (get_local $3)
     (i32.const 16)
    )
   )
  )
 )
 (func $_ZNK5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE3getEyPKc (param $0 i32) (param $1 i64) (param $2 i32) (result i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $7
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 28)
       )
      )
     )
     (tee_local $3
      (i32.load offset=24
       (get_local $0)
      )
     )
    )
   )
   (set_local $6
    (i32.add
     (get_local $7)
     (i32.const -24)
    )
   )
   (set_local $4
    (i32.sub
     (i32.const 0)
     (get_local $3)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i64.eq
      (i64.load
       (i32.load
        (get_local $6)
       )
      )
      (get_local $1)
     )
    )
    (set_local $7
     (get_local $6)
    )
    (set_local $6
     (tee_local $5
      (i32.add
       (get_local $6)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $5)
       (get_local $4)
      )
      (i32.const -24)
     )
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.eq
      (get_local $7)
      (get_local $3)
     )
    )
    (call $eosio_assert
     (i32.eq
      (i32.load offset=88
       (tee_local $6
        (i32.load
         (i32.add
          (get_local $7)
          (i32.const -24)
         )
        )
       )
      )
      (get_local $0)
     )
     (i32.const 32)
    )
    (br $label$2)
   )
   (set_local $6
    (i32.const 0)
   )
   (br_if $label$2
    (i32.lt_s
     (tee_local $5
      (call $db_find_i64
       (i64.load
        (get_local $0)
       )
       (i64.load offset=8
        (get_local $0)
       )
       (i64.const -2507753063930920960)
       (get_local $1)
      )
     )
     (i32.const 0)
    )
   )
   (call $eosio_assert
    (i32.eq
     (i32.load offset=88
      (tee_local $6
       (call $_ZNK5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE31load_object_by_primary_iteratorEl
        (get_local $0)
        (get_local $5)
       )
      )
     )
     (get_local $0)
    )
    (i32.const 32)
   )
  )
  (call $eosio_assert
   (i32.ne
    (get_local $6)
    (i32.const 0)
   )
   (get_local $2)
  )
  (get_local $6)
 )
 (func $_ZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE6modifyIZNS1_15system_contract23propagate_weight_changeERKS2_E4$_25EEvS7_yOT_ (param $0 i32) (param $1 i32) (param $2 i32)
  (local $3 i64)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i64)
  (local $8 i32)
  (local $9 i32)
  (set_local $8
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (call $eosio_assert
   (i32.eq
    (i32.load offset=88
     (get_local $1)
    )
    (get_local $0)
   )
   (i32.const 144)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 192)
  )
  (f64.store offset=48
   (get_local $1)
   (f64.add
    (f64.sub
     (f64.load
      (i32.load
       (get_local $2)
      )
     )
     (f64.load
      (i32.add
       (i32.load
        (i32.add
         (get_local $2)
         (i32.const 4)
        )
       )
       (i32.const 40)
      )
     )
    )
    (f64.load offset=48
     (get_local $1)
    )
   )
  )
  (set_local $3
   (i64.load
    (get_local $1)
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 256)
  )
  (set_local $7
   (i64.extend_u/i32
    (i32.shr_s
     (tee_local $6
      (i32.sub
       (tee_local $5
        (i32.load
         (i32.add
          (get_local $1)
          (i32.const 20)
         )
        )
       )
       (tee_local $4
        (i32.load offset=16
         (get_local $1)
        )
       )
      )
     )
     (i32.const 3)
    )
   )
  )
  (set_local $2
   (i32.const 16)
  )
  (loop $label$0
   (set_local $2
    (i32.add
     (get_local $2)
     (i32.const 1)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $7
      (i64.shr_u
       (get_local $7)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (block $label$1
   (br_if $label$1
    (i32.eq
     (get_local $4)
     (get_local $5)
    )
   )
   (set_local $2
    (i32.add
     (i32.and
      (get_local $6)
      (i32.const -8)
     )
     (get_local $2)
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.lt_u
      (tee_local $5
       (i32.add
        (get_local $2)
        (i32.const 49)
       )
      )
      (i32.const 513)
     )
    )
    (set_local $2
     (call $malloc
      (get_local $5)
     )
    )
    (br $label$2)
   )
   (i32.store offset=4
    (i32.const 0)
    (tee_local $2
     (i32.sub
      (get_local $9)
      (i32.and
       (i32.add
        (get_local $5)
        (i32.const 15)
       )
       (i32.const -16)
      )
     )
    )
   )
  )
  (i32.store offset=4
   (get_local $8)
   (get_local $2)
  )
  (i32.store
   (get_local $8)
   (get_local $2)
  )
  (i32.store offset=8
   (get_local $8)
   (i32.add
    (get_local $2)
    (get_local $5)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_10voter_infoE
    (get_local $8)
    (get_local $1)
   )
  )
  (call $db_update_i64
   (i32.load offset=92
    (get_local $1)
   )
   (i64.const 0)
   (get_local $2)
   (get_local $5)
  )
  (block $label$4
   (br_if $label$4
    (i32.lt_u
     (get_local $5)
     (i32.const 513)
    )
   )
   (call $free
    (get_local $2)
   )
  )
  (block $label$5
   (br_if $label$5
    (i64.lt_u
     (get_local $3)
     (i64.load offset=16
      (get_local $0)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $0)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $3)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $3)
      (i64.const -3)
     )
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
 )
 (func $_ZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE6modifyIZNS1_15system_contract23propagate_weight_changeERKNS1_10voter_infoEE4$_26EEvRKS2_yOT_ (param $0 i32) (param $1 i32) (param $2 i32)
  (local $3 i64)
  (local $4 f64)
  (local $5 i32)
  (local $6 i64)
  (local $7 i32)
  (local $8 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $7
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (call $eosio_assert
   (i32.eq
    (i32.load
     (i32.add
      (get_local $1)
      (i32.const 92)
     )
    )
    (get_local $0)
   )
   (i32.const 144)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 192)
  )
  (f64.store
   (tee_local $8
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
   )
   (f64.add
    (f64.load
     (i32.load
      (get_local $2)
     )
    )
    (tee_local $4
     (f64.load
      (get_local $8)
     )
    )
   )
  )
  (f64.store offset=24
   (tee_local $8
    (get_local $7)
   )
   (select
    (f64.neg
     (get_local $4)
    )
    (get_local $4)
    (i32.load8_u
     (i32.add
      (get_local $1)
      (i32.const 56)
     )
    )
   )
  )
  (set_local $3
   (i64.load
    (get_local $1)
   )
  )
  (f64.store
   (tee_local $5
    (i32.add
     (i32.load offset=4
      (get_local $2)
     )
     (i32.const 288)
    )
   )
   (f64.add
    (f64.load
     (i32.load
      (get_local $2)
     )
    )
    (f64.load
     (get_local $5)
    )
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 256)
  )
  (set_local $6
   (i64.load32_u offset=16
    (get_local $1)
   )
  )
  (set_local $2
   (i32.const 64)
  )
  (loop $label$0
   (set_local $2
    (i32.add
     (get_local $2)
     (i32.const 1)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $6
      (i64.shr_u
       (get_local $6)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (set_local $2
   (i32.add
    (tee_local $5
     (select
      (i32.load
       (i32.add
        (get_local $1)
        (i32.const 64)
       )
      )
      (i32.shr_u
       (tee_local $5
        (i32.load8_u offset=60
         (get_local $1)
        )
       )
       (i32.const 1)
      )
      (i32.and
       (get_local $5)
       (i32.const 1)
      )
     )
    )
    (get_local $2)
   )
  )
  (set_local $6
   (i64.extend_u/i32
    (get_local $5)
   )
  )
  (loop $label$1
   (set_local $2
    (i32.add
     (get_local $2)
     (i32.const 1)
    )
   )
   (br_if $label$1
    (i64.ne
     (tee_local $6
      (i64.shr_u
       (get_local $6)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.lt_u
      (get_local $2)
      (i32.const 513)
     )
    )
    (set_local $7
     (call $malloc
      (get_local $2)
     )
    )
    (br $label$2)
   )
   (i32.store offset=4
    (i32.const 0)
    (tee_local $7
     (i32.sub
      (get_local $7)
      (i32.and
       (i32.add
        (get_local $2)
        (i32.const 15)
       )
       (i32.const -16)
      )
     )
    )
   )
  )
  (i32.store offset=12
   (get_local $8)
   (get_local $7)
  )
  (i32.store offset=8
   (get_local $8)
   (get_local $7)
  )
  (i32.store offset=16
   (get_local $8)
   (i32.add
    (get_local $7)
    (get_local $2)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_13producer_infoE
    (i32.add
     (get_local $8)
     (i32.const 8)
    )
    (get_local $1)
   )
  )
  (call $db_update_i64
   (i32.load offset=96
    (get_local $1)
   )
   (i64.const 0)
   (get_local $7)
   (get_local $2)
  )
  (block $label$4
   (br_if $label$4
    (i32.lt_u
     (get_local $2)
     (i32.const 513)
    )
   )
   (call $free
    (get_local $7)
   )
  )
  (block $label$5
   (br_if $label$5
    (i64.lt_u
     (get_local $3)
     (i64.load offset=16
      (get_local $0)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $0)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $3)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $3)
      (i64.const -3)
     )
    )
   )
  )
  (f64.store offset=40
   (get_local $8)
   (select
    (f64.neg
     (tee_local $4
      (f64.load
       (i32.add
        (get_local $1)
        (i32.const 8)
       )
      )
     )
    )
    (get_local $4)
    (i32.load8_u
     (i32.add
      (get_local $1)
      (i32.const 56)
     )
    )
   )
  )
  (block $label$6
   (br_if $label$6
    (i32.eqz
     (call $memcmp
      (i32.add
       (get_local $8)
       (i32.const 24)
      )
      (i32.add
       (get_local $8)
       (i32.const 40)
      )
      (i32.const 8)
     )
    )
   )
   (block $label$7
    (br_if $label$7
     (i32.gt_s
      (tee_local $2
       (i32.load offset=100
        (get_local $1)
       )
      )
      (i32.const -1)
     )
    )
    (i32.store
     (i32.add
      (get_local $1)
      (i32.const 100)
     )
     (tee_local $2
      (call $db_idx_double_find_primary
       (i64.load
        (get_local $0)
       )
       (i64.load offset=8
        (get_local $0)
       )
       (i64.const -5915305344019464192)
       (i32.add
        (get_local $8)
        (i32.const 32)
       )
       (get_local $3)
      )
     )
    )
   )
   (call $db_idx_double_update
    (get_local $2)
    (i64.const 0)
    (i32.add
     (get_local $8)
     (i32.const 40)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 48)
   )
  )
 )
 (func $_ZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE6modifyIZNS1_15system_contract23propagate_weight_changeERKS2_E4$_27EEvS7_yOT_ (param $0 i32) (param $1 i32) (param $2 i32)
  (local $3 i64)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i64)
  (local $8 i32)
  (local $9 i32)
  (set_local $8
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (call $eosio_assert
   (i32.eq
    (i32.load offset=88
     (get_local $1)
    )
    (get_local $0)
   )
   (i32.const 144)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 192)
  )
  (i64.store offset=40
   (get_local $1)
   (i64.load
    (i32.load
     (get_local $2)
    )
   )
  )
  (set_local $3
   (i64.load
    (get_local $1)
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 256)
  )
  (set_local $7
   (i64.extend_u/i32
    (i32.shr_s
     (tee_local $6
      (i32.sub
       (tee_local $5
        (i32.load
         (i32.add
          (get_local $1)
          (i32.const 20)
         )
        )
       )
       (tee_local $4
        (i32.load offset=16
         (get_local $1)
        )
       )
      )
     )
     (i32.const 3)
    )
   )
  )
  (set_local $2
   (i32.const 16)
  )
  (loop $label$0
   (set_local $2
    (i32.add
     (get_local $2)
     (i32.const 1)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $7
      (i64.shr_u
       (get_local $7)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (block $label$1
   (br_if $label$1
    (i32.eq
     (get_local $4)
     (get_local $5)
    )
   )
   (set_local $2
    (i32.add
     (i32.and
      (get_local $6)
      (i32.const -8)
     )
     (get_local $2)
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.lt_u
      (tee_local $5
       (i32.add
        (get_local $2)
        (i32.const 49)
       )
      )
      (i32.const 513)
     )
    )
    (set_local $2
     (call $malloc
      (get_local $5)
     )
    )
    (br $label$2)
   )
   (i32.store offset=4
    (i32.const 0)
    (tee_local $2
     (i32.sub
      (get_local $9)
      (i32.and
       (i32.add
        (get_local $5)
        (i32.const 15)
       )
       (i32.const -16)
      )
     )
    )
   )
  )
  (i32.store offset=4
   (get_local $8)
   (get_local $2)
  )
  (i32.store
   (get_local $8)
   (get_local $2)
  )
  (i32.store offset=8
   (get_local $8)
   (i32.add
    (get_local $2)
    (get_local $5)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_10voter_infoE
    (get_local $8)
    (get_local $1)
   )
  )
  (call $db_update_i64
   (i32.load offset=92
    (get_local $1)
   )
   (i64.const 0)
   (get_local $2)
   (get_local $5)
  )
  (block $label$4
   (br_if $label$4
    (i32.lt_u
     (get_local $5)
     (i32.const 513)
    )
   )
   (call $free
    (get_local $2)
   )
  )
  (block $label$5
   (br_if $label$5
    (i64.lt_u
     (get_local $3)
     (i64.load offset=16
      (get_local $0)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $0)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $3)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $3)
      (i64.const -3)
     )
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
 )
 (func $_ZN5eosio11multi_indexILy15938991009778630656EN11eosiosystem10voter_infoEJEE4itemC2IZNKS3_31load_object_by_primary_iteratorElEUlRT_E_EEPKS3_OS6_ (param $0 i32) (param $1 i32) (param $2 i32) (result i32)
  (local $3 i64)
  (local $4 i32)
  (local $5 i32)
  (i64.store offset=8
   (get_local $0)
   (i64.const 0)
  )
  (i64.store
   (get_local $0)
   (i64.const 0)
  )
  (i64.store offset=16 align=4
   (get_local $0)
   (i64.const 0)
  )
  (i64.store offset=32
   (get_local $0)
   (i64.const 0)
  )
  (i64.store offset=40
   (get_local $0)
   (i64.const 0)
  )
  (set_local $4
   (i32.const 0)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 24)
   )
   (i32.const 0)
  )
  (i64.store offset=48
   (get_local $0)
   (i64.const 0)
  )
  (i32.store8 offset=56
   (get_local $0)
   (i32.const 0)
  )
  (i32.store offset=60
   (get_local $0)
   (i32.const 0)
  )
  (i32.store offset=64
   (get_local $0)
   (i32.const 0)
  )
  (i64.store offset=72
   (get_local $0)
   (i64.const 0)
  )
  (i64.store
   (tee_local $5
    (i32.add
     (get_local $0)
     (i32.const 80)
    )
   )
   (i64.const 1397703940)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $3
   (i64.shr_u
    (i64.load
     (get_local $5)
    )
    (i64.const 8)
   )
  )
  (block $label$0
   (block $label$1
    (loop $label$2
     (br_if $label$1
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $3)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$3
      (br_if $label$3
       (i64.ne
        (i64.and
         (tee_local $3
          (i64.shr_u
           (get_local $3)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$4
       (br_if $label$1
        (i64.ne
         (i64.and
          (tee_local $3
           (i64.shr_u
            (get_local $3)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$4
        (i32.lt_s
         (tee_local $4
          (i32.add
           (get_local $4)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $5
      (i32.const 1)
     )
     (br_if $label$2
      (i32.lt_s
       (tee_local $4
        (i32.add
         (get_local $4)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$0)
    )
   )
   (set_local $5
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $5)
   (i32.const 704)
  )
  (i32.store offset=88
   (get_local $0)
   (get_local $1)
  )
  (drop
   (call $_ZN11eosiosystemrsIN5eosio10datastreamIPKcEEEERT_S7_RNS_10voter_infoE
    (i32.load offset=4
     (get_local $2)
    )
    (get_local $0)
   )
  )
  (i32.store offset=92
   (get_local $0)
   (i32.load
    (i32.load offset=8
     (get_local $2)
    )
   )
  )
  (get_local $0)
 )
 (func $_ZN11eosiosystemrsIN5eosio10datastreamIPKcEEEERT_S7_RNS_10voter_infoE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $3
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (get_local $1)
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (tee_local $0
       (call $_ZN5eosiorsINS_10datastreamIPKcEEyEERT_S6_RNSt3__16vectorIT0_NS7_9allocatorIS9_EEEE
        (get_local $0)
        (i32.add
         (get_local $1)
         (i32.const 16)
        )
       )
      )
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 32)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 40)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 48)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.ne
    (i32.load offset=8
     (get_local $0)
    )
    (get_local $2)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $3)
     (i32.const 15)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 1)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 1)
    )
   )
  )
  (i32.store8 offset=56
   (get_local $1)
   (i32.ne
    (i32.load8_u offset=15
     (get_local $3)
    )
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 3)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 60)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 4)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 4)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 3)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 64)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 4)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 4)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 72)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 80)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $3)
    (i32.const 16)
   )
  )
  (get_local $0)
 )
 (func $_ZN5eosiorsINS_10datastreamIPKcEEyEERT_S6_RNSt3__16vectorIT0_NS7_9allocatorIS9_EEEE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i64)
  (local $7 i32)
  (set_local $5
   (i32.load offset=4
    (get_local $0)
   )
  )
  (set_local $7
   (i32.const 0)
  )
  (set_local $6
   (i64.const 0)
  )
  (set_local $2
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
  )
  (set_local $3
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
  )
  (loop $label$0
   (call $eosio_assert
    (i32.lt_u
     (get_local $5)
     (i32.load
      (get_local $2)
     )
    )
    (i32.const 416)
   )
   (set_local $4
    (i32.load8_u
     (tee_local $5
      (i32.load
       (get_local $3)
      )
     )
    )
   )
   (i32.store
    (get_local $3)
    (tee_local $5
     (i32.add
      (get_local $5)
      (i32.const 1)
     )
    )
   )
   (set_local $6
    (i64.or
     (i64.extend_u/i32
      (i32.shl
       (i32.and
        (get_local $4)
        (i32.const 127)
       )
       (tee_local $7
        (i32.and
         (get_local $7)
         (i32.const 255)
        )
       )
      )
     )
     (get_local $6)
    )
   )
   (set_local $7
    (i32.add
     (get_local $7)
     (i32.const 7)
    )
   )
   (br_if $label$0
    (i32.shr_u
     (get_local $4)
     (i32.const 7)
    )
   )
  )
  (block $label$1
   (block $label$2
    (block $label$3
     (br_if $label$3
      (i32.le_u
       (tee_local $5
        (i32.wrap/i64
         (get_local $6)
        )
       )
       (tee_local $7
        (i32.shr_s
         (i32.sub
          (tee_local $3
           (i32.load offset=4
            (get_local $1)
           )
          )
          (tee_local $4
           (i32.load
            (get_local $1)
           )
          )
         )
         (i32.const 3)
        )
       )
      )
     )
     (call $_ZNSt3__16vectorIyNS_9allocatorIyEEE8__appendEj
      (get_local $1)
      (i32.sub
       (get_local $5)
       (get_local $7)
      )
     )
     (br_if $label$2
      (i32.ne
       (tee_local $4
        (i32.load
         (get_local $1)
        )
       )
       (tee_local $3
        (i32.load
         (i32.add
          (get_local $1)
          (i32.const 4)
         )
        )
       )
      )
     )
     (br $label$1)
    )
    (block $label$4
     (br_if $label$4
      (i32.ge_u
       (get_local $5)
       (get_local $7)
      )
     )
     (i32.store
      (i32.add
       (get_local $1)
       (i32.const 4)
      )
      (tee_local $3
       (i32.add
        (get_local $4)
        (i32.shl
         (get_local $5)
         (i32.const 3)
        )
       )
      )
     )
    )
    (br_if $label$1
     (i32.eq
      (get_local $4)
      (get_local $3)
     )
    )
   )
   (set_local $7
    (i32.load
     (tee_local $5
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
   )
   (loop $label$5
    (call $eosio_assert
     (i32.gt_u
      (i32.sub
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 8)
        )
       )
       (get_local $7)
      )
      (i32.const 7)
     )
     (i32.const 368)
    )
    (drop
     (call $memcpy
      (get_local $4)
      (i32.load
       (get_local $5)
      )
      (i32.const 8)
     )
    )
    (i32.store
     (get_local $5)
     (tee_local $7
      (i32.add
       (i32.load
        (get_local $5)
       )
       (i32.const 8)
      )
     )
    )
    (br_if $label$5
     (i32.ne
      (get_local $3)
      (tee_local $4
       (i32.add
        (get_local $4)
        (i32.const 8)
       )
      )
     )
    )
   )
  )
  (get_local $0)
 )
 (func $_ZNSt3__16vectorIyNS_9allocatorIyEEE8__appendEj (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (block $label$0
   (block $label$1
    (block $label$2
     (block $label$3
      (block $label$4
       (br_if $label$4
        (i32.ge_u
         (i32.shr_s
          (i32.sub
           (tee_local $7
            (i32.load offset=8
             (get_local $0)
            )
           )
           (tee_local $2
            (i32.load offset=4
             (get_local $0)
            )
           )
          )
          (i32.const 3)
         )
         (get_local $1)
        )
       )
       (br_if $label$2
        (i32.ge_u
         (tee_local $2
          (i32.add
           (tee_local $4
            (i32.shr_s
             (i32.sub
              (get_local $2)
              (tee_local $3
               (i32.load
                (get_local $0)
               )
              )
             )
             (i32.const 3)
            )
           )
           (get_local $1)
          )
         )
         (i32.const 536870912)
        )
       )
       (set_local $6
        (i32.const 536870911)
       )
       (block $label$5
        (br_if $label$5
         (i32.gt_u
          (i32.shr_s
           (tee_local $7
            (i32.sub
             (get_local $7)
             (get_local $3)
            )
           )
           (i32.const 3)
          )
          (i32.const 268435454)
         )
        )
        (br_if $label$3
         (i32.eqz
          (tee_local $6
           (select
            (get_local $2)
            (tee_local $6
             (i32.shr_s
              (get_local $7)
              (i32.const 2)
             )
            )
            (i32.lt_u
             (get_local $6)
             (get_local $2)
            )
           )
          )
         )
        )
        (br_if $label$1
         (i32.ge_u
          (get_local $6)
          (i32.const 536870912)
         )
        )
       )
       (set_local $7
        (call $_Znwj
         (i32.shl
          (get_local $6)
          (i32.const 3)
         )
        )
       )
       (br $label$0)
      )
      (set_local $6
       (get_local $2)
      )
      (set_local $7
       (get_local $1)
      )
      (loop $label$6
       (i64.store
        (get_local $6)
        (i64.const 0)
       )
       (set_local $6
        (i32.add
         (get_local $6)
         (i32.const 8)
        )
       )
       (br_if $label$6
        (tee_local $7
         (i32.add
          (get_local $7)
          (i32.const -1)
         )
        )
       )
      )
      (i32.store
       (i32.add
        (get_local $0)
        (i32.const 4)
       )
       (i32.add
        (get_local $2)
        (i32.shl
         (get_local $1)
         (i32.const 3)
        )
       )
      )
      (return)
     )
     (set_local $6
      (i32.const 0)
     )
     (set_local $7
      (i32.const 0)
     )
     (br $label$0)
    )
    (call $_ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv
     (get_local $0)
    )
    (unreachable)
   )
   (call $abort)
   (unreachable)
  )
  (set_local $3
   (i32.add
    (get_local $7)
    (i32.shl
     (get_local $6)
     (i32.const 3)
    )
   )
  )
  (set_local $6
   (tee_local $2
    (i32.add
     (get_local $7)
     (i32.shl
      (get_local $4)
      (i32.const 3)
     )
    )
   )
  )
  (set_local $7
   (get_local $1)
  )
  (loop $label$7
   (i64.store
    (get_local $6)
    (i64.const 0)
   )
   (set_local $6
    (i32.add
     (get_local $6)
     (i32.const 8)
    )
   )
   (br_if $label$7
    (tee_local $7
     (i32.add
      (get_local $7)
      (i32.const -1)
     )
    )
   )
  )
  (set_local $4
   (i32.add
    (get_local $2)
    (i32.shl
     (get_local $1)
     (i32.const 3)
    )
   )
  )
  (set_local $1
   (i32.sub
    (get_local $2)
    (tee_local $7
     (i32.sub
      (i32.load
       (tee_local $5
        (i32.add
         (get_local $0)
         (i32.const 4)
        )
       )
      )
      (tee_local $6
       (i32.load
        (get_local $0)
       )
      )
     )
    )
   )
  )
  (block $label$8
   (br_if $label$8
    (i32.lt_s
     (get_local $7)
     (i32.const 1)
    )
   )
   (drop
    (call $memcpy
     (get_local $1)
     (get_local $6)
     (get_local $7)
    )
   )
   (set_local $6
    (i32.load
     (get_local $0)
    )
   )
  )
  (i32.store
   (get_local $0)
   (get_local $1)
  )
  (i32.store
   (get_local $5)
   (get_local $4)
  )
  (i32.store
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
   (get_local $3)
  )
  (block $label$9
   (br_if $label$9
    (i32.eqz
     (get_local $6)
    )
   )
   (call $_ZdlPv
    (get_local $6)
   )
  )
 )
 (func $_ZN5eosiolsINS_10datastreamIjEEEERT_S4_RKNS_11transactionE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i64)
  (i32.store
   (get_local $0)
   (i32.add
    (tee_local $6
     (i32.load
      (get_local $0)
     )
    )
    (i32.const 10)
   )
  )
  (set_local $6
   (i32.add
    (get_local $6)
    (i32.const 11)
   )
  )
  (set_local $8
   (i64.load32_u offset=12
    (get_local $1)
   )
  )
  (loop $label$0
   (set_local $6
    (i32.add
     (get_local $6)
     (i32.const 1)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $8
      (i64.shr_u
       (get_local $8)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (i32.store
   (get_local $0)
   (get_local $6)
  )
  (set_local $8
   (i64.load32_u offset=20
    (get_local $1)
   )
  )
  (loop $label$1
   (set_local $6
    (i32.add
     (get_local $6)
     (i32.const 1)
    )
   )
   (br_if $label$1
    (i64.ne
     (tee_local $8
      (i64.shr_u
       (get_local $8)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (i32.store
   (get_local $0)
   (get_local $6)
  )
  (set_local $8
   (i64.extend_u/i32
    (i32.div_s
     (i32.sub
      (tee_local $2
       (i32.load
        (i32.add
         (get_local $1)
         (i32.const 28)
        )
       )
      )
      (tee_local $7
       (i32.load offset=24
        (get_local $1)
       )
      )
     )
     (i32.const 40)
    )
   )
  )
  (loop $label$2
   (set_local $6
    (i32.add
     (get_local $6)
     (i32.const 1)
    )
   )
   (br_if $label$2
    (i64.ne
     (tee_local $8
      (i64.shr_u
       (get_local $8)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (i32.store
   (get_local $0)
   (get_local $6)
  )
  (block $label$3
   (br_if $label$3
    (i32.eq
     (get_local $7)
     (get_local $2)
    )
   )
   (loop $label$4
    (set_local $6
     (i32.add
      (get_local $6)
      (i32.const 16)
     )
    )
    (set_local $8
     (i64.extend_u/i32
      (i32.shr_s
       (tee_local $5
        (i32.sub
         (tee_local $3
          (i32.load
           (i32.add
            (get_local $7)
            (i32.const 20)
           )
          )
         )
         (tee_local $4
          (i32.load offset=16
           (get_local $7)
          )
         )
        )
       )
       (i32.const 4)
      )
     )
    )
    (loop $label$5
     (set_local $6
      (i32.add
       (get_local $6)
       (i32.const 1)
      )
     )
     (br_if $label$5
      (i64.ne
       (tee_local $8
        (i64.shr_u
         (get_local $8)
         (i64.const 7)
        )
       )
       (i64.const 0)
      )
     )
    )
    (block $label$6
     (br_if $label$6
      (i32.eq
       (get_local $4)
       (get_local $3)
      )
     )
     (set_local $6
      (i32.add
       (i32.and
        (get_local $5)
        (i32.const -16)
       )
       (get_local $6)
      )
     )
    )
    (set_local $6
     (i32.sub
      (i32.add
       (get_local $6)
       (tee_local $3
        (i32.load
         (i32.add
          (get_local $7)
          (i32.const 32)
         )
        )
       )
      )
      (tee_local $4
       (i32.load offset=28
        (get_local $7)
       )
      )
     )
    )
    (set_local $8
     (i64.extend_u/i32
      (i32.sub
       (get_local $3)
       (get_local $4)
      )
     )
    )
    (loop $label$7
     (set_local $6
      (i32.add
       (get_local $6)
       (i32.const 1)
      )
     )
     (br_if $label$7
      (i64.ne
       (tee_local $8
        (i64.shr_u
         (get_local $8)
         (i64.const 7)
        )
       )
       (i64.const 0)
      )
     )
    )
    (br_if $label$4
     (i32.ne
      (tee_local $7
       (i32.add
        (get_local $7)
        (i32.const 40)
       )
      )
      (get_local $2)
     )
    )
   )
   (i32.store
    (get_local $0)
    (get_local $6)
   )
  )
  (set_local $8
   (i64.extend_u/i32
    (i32.div_s
     (i32.sub
      (tee_local $2
       (i32.load
        (i32.add
         (get_local $1)
         (i32.const 40)
        )
       )
      )
      (tee_local $7
       (i32.load offset=36
        (get_local $1)
       )
      )
     )
     (i32.const 40)
    )
   )
  )
  (loop $label$8
   (set_local $6
    (i32.add
     (get_local $6)
     (i32.const 1)
    )
   )
   (br_if $label$8
    (i64.ne
     (tee_local $8
      (i64.shr_u
       (get_local $8)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (i32.store
   (get_local $0)
   (get_local $6)
  )
  (block $label$9
   (br_if $label$9
    (i32.eq
     (get_local $7)
     (get_local $2)
    )
   )
   (loop $label$10
    (set_local $6
     (i32.add
      (get_local $6)
      (i32.const 16)
     )
    )
    (set_local $8
     (i64.extend_u/i32
      (i32.shr_s
       (tee_local $5
        (i32.sub
         (tee_local $3
          (i32.load
           (i32.add
            (get_local $7)
            (i32.const 20)
           )
          )
         )
         (tee_local $4
          (i32.load offset=16
           (get_local $7)
          )
         )
        )
       )
       (i32.const 4)
      )
     )
    )
    (loop $label$11
     (set_local $6
      (i32.add
       (get_local $6)
       (i32.const 1)
      )
     )
     (br_if $label$11
      (i64.ne
       (tee_local $8
        (i64.shr_u
         (get_local $8)
         (i64.const 7)
        )
       )
       (i64.const 0)
      )
     )
    )
    (block $label$12
     (br_if $label$12
      (i32.eq
       (get_local $4)
       (get_local $3)
      )
     )
     (set_local $6
      (i32.add
       (i32.and
        (get_local $5)
        (i32.const -16)
       )
       (get_local $6)
      )
     )
    )
    (set_local $6
     (i32.sub
      (i32.add
       (get_local $6)
       (tee_local $3
        (i32.load
         (i32.add
          (get_local $7)
          (i32.const 32)
         )
        )
       )
      )
      (tee_local $4
       (i32.load offset=28
        (get_local $7)
       )
      )
     )
    )
    (set_local $8
     (i64.extend_u/i32
      (i32.sub
       (get_local $3)
       (get_local $4)
      )
     )
    )
    (loop $label$13
     (set_local $6
      (i32.add
       (get_local $6)
       (i32.const 1)
      )
     )
     (br_if $label$13
      (i64.ne
       (tee_local $8
        (i64.shr_u
         (get_local $8)
         (i64.const 7)
        )
       )
       (i64.const 0)
      )
     )
    )
    (br_if $label$10
     (i32.ne
      (tee_local $7
       (i32.add
        (get_local $7)
        (i32.const 40)
       )
      )
      (get_local $2)
     )
    )
   )
   (i32.store
    (get_local $0)
    (get_local $6)
   )
  )
  (set_local $8
   (i64.extend_u/i32
    (i32.shr_s
     (i32.sub
      (tee_local $5
       (i32.load
        (i32.add
         (get_local $1)
         (i32.const 52)
        )
       )
      )
      (tee_local $7
       (i32.load offset=48
        (get_local $1)
       )
      )
     )
     (i32.const 4)
    )
   )
  )
  (loop $label$14
   (set_local $6
    (i32.add
     (get_local $6)
     (i32.const 1)
    )
   )
   (br_if $label$14
    (i64.ne
     (tee_local $8
      (i64.shr_u
       (get_local $8)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (i32.store
   (get_local $0)
   (get_local $6)
  )
  (block $label$15
   (br_if $label$15
    (i32.eq
     (get_local $7)
     (get_local $5)
    )
   )
   (loop $label$16
    (set_local $6
     (i32.sub
      (i32.add
       (i32.add
        (get_local $6)
        (tee_local $3
         (i32.load
          (i32.add
           (get_local $7)
           (i32.const 8)
          )
         )
        )
       )
       (i32.const 2)
      )
      (tee_local $4
       (i32.load offset=4
        (get_local $7)
       )
      )
     )
    )
    (set_local $8
     (i64.extend_u/i32
      (i32.sub
       (get_local $3)
       (get_local $4)
      )
     )
    )
    (loop $label$17
     (set_local $6
      (i32.add
       (get_local $6)
       (i32.const 1)
      )
     )
     (br_if $label$17
      (i64.ne
       (tee_local $8
        (i64.shr_u
         (get_local $8)
         (i64.const 7)
        )
       )
       (i64.const 0)
      )
     )
    )
    (br_if $label$16
     (i32.ne
      (tee_local $7
       (i32.add
        (get_local $7)
        (i32.const 16)
       )
      )
      (get_local $5)
     )
    )
   )
   (i32.store
    (get_local $0)
    (get_local $6)
   )
  )
  (get_local $0)
 )
 (func $_ZN5eosiolsINS_10datastreamIPcEEEERT_S5_RKNS_18transaction_headerE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i64)
  (local $7 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $7
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 3)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (get_local $1)
    (i32.const 4)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $4
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 4)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $4)
    )
    (i32.const 1)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 4)
    )
    (i32.const 2)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $4
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 2)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $4)
    )
    (i32.const 3)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
    (i32.const 4)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $5
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 4)
    )
   )
  )
  (set_local $6
   (i64.load32_u offset=12
    (get_local $1)
   )
  )
  (loop $label$0
   (set_local $4
    (i32.wrap/i64
     (get_local $6)
    )
   )
   (i32.store8 offset=14
    (get_local $7)
    (i32.or
     (i32.shl
      (tee_local $2
       (i64.ne
        (tee_local $6
         (i64.shr_u
          (get_local $6)
          (i64.const 7)
         )
        )
        (i64.const 0)
       )
      )
      (i32.const 7)
     )
     (i32.and
      (get_local $4)
      (i32.const 127)
     )
    )
   )
   (call $eosio_assert
    (i32.gt_s
     (i32.sub
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 8)
       )
      )
      (get_local $5)
     )
     (i32.const 0)
    )
    (i32.const 320)
   )
   (drop
    (call $memcpy
     (i32.load
      (tee_local $4
       (i32.add
        (get_local $0)
        (i32.const 4)
       )
      )
     )
     (i32.add
      (get_local $7)
      (i32.const 14)
     )
     (i32.const 1)
    )
   )
   (i32.store
    (get_local $4)
    (tee_local $5
     (i32.add
      (i32.load
       (get_local $4)
      )
      (i32.const 1)
     )
    )
   )
   (br_if $label$0
    (get_local $2)
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load
      (tee_local $3
       (i32.add
        (get_local $0)
        (i32.const 8)
       )
      )
     )
     (get_local $5)
    )
    (i32.const 0)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load
     (tee_local $4
      (i32.add
       (get_local $0)
       (i32.const 4)
      )
     )
    )
    (i32.add
     (get_local $1)
     (i32.const 16)
    )
    (i32.const 1)
   )
  )
  (i32.store
   (get_local $4)
   (tee_local $5
    (i32.add
     (i32.load
      (get_local $4)
     )
     (i32.const 1)
    )
   )
  )
  (set_local $6
   (i64.load32_u offset=20
    (get_local $1)
   )
  )
  (loop $label$1
   (set_local $2
    (i32.wrap/i64
     (get_local $6)
    )
   )
   (i32.store8 offset=15
    (get_local $7)
    (i32.or
     (i32.shl
      (tee_local $1
       (i64.ne
        (tee_local $6
         (i64.shr_u
          (get_local $6)
          (i64.const 7)
         )
        )
        (i64.const 0)
       )
      )
      (i32.const 7)
     )
     (i32.and
      (get_local $2)
      (i32.const 127)
     )
    )
   )
   (call $eosio_assert
    (i32.gt_s
     (i32.sub
      (i32.load
       (get_local $3)
      )
      (get_local $5)
     )
     (i32.const 0)
    )
    (i32.const 320)
   )
   (drop
    (call $memcpy
     (i32.load
      (get_local $4)
     )
     (i32.add
      (get_local $7)
      (i32.const 15)
     )
     (i32.const 1)
    )
   )
   (i32.store
    (get_local $4)
    (tee_local $5
     (i32.add
      (i32.load
       (get_local $4)
      )
      (i32.const 1)
     )
    )
   )
   (br_if $label$1
    (get_local $1)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $7)
    (i32.const 16)
   )
  )
  (get_local $0)
 )
 (func $_ZN5eosiolsINS_10datastreamIPcEENS_6actionEEERT_S6_RKNSt3__16vectorIT0_NS7_9allocatorIS9_EEEE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $8
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (set_local $5
   (i64.extend_u/i32
    (i32.div_s
     (i32.sub
      (i32.load offset=4
       (get_local $1)
      )
      (i32.load
       (get_local $1)
      )
     )
     (i32.const 40)
    )
   )
  )
  (set_local $6
   (i32.load offset=4
    (get_local $0)
   )
  )
  (set_local $3
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
  )
  (set_local $4
   (i32.add
    (get_local $0)
    (i32.const 4)
   )
  )
  (loop $label$0
   (set_local $7
    (i32.wrap/i64
     (get_local $5)
    )
   )
   (i32.store8 offset=15
    (get_local $8)
    (i32.or
     (i32.shl
      (tee_local $2
       (i64.ne
        (tee_local $5
         (i64.shr_u
          (get_local $5)
          (i64.const 7)
         )
        )
        (i64.const 0)
       )
      )
      (i32.const 7)
     )
     (i32.and
      (get_local $7)
      (i32.const 127)
     )
    )
   )
   (call $eosio_assert
    (i32.gt_s
     (i32.sub
      (i32.load
       (get_local $3)
      )
      (get_local $6)
     )
     (i32.const 0)
    )
    (i32.const 320)
   )
   (drop
    (call $memcpy
     (i32.load
      (get_local $4)
     )
     (i32.add
      (get_local $8)
      (i32.const 15)
     )
     (i32.const 1)
    )
   )
   (i32.store
    (get_local $4)
    (tee_local $6
     (i32.add
      (i32.load
       (get_local $4)
      )
      (i32.const 1)
     )
    )
   )
   (br_if $label$0
    (get_local $2)
   )
  )
  (block $label$1
   (br_if $label$1
    (i32.eq
     (tee_local $7
      (i32.load
       (get_local $1)
      )
     )
     (tee_local $3
      (i32.load
       (i32.add
        (get_local $1)
        (i32.const 4)
       )
      )
     )
    )
   )
   (set_local $4
    (i32.add
     (get_local $0)
     (i32.const 4)
    )
   )
   (loop $label$2
    (call $eosio_assert
     (i32.gt_s
      (i32.sub
       (i32.load
        (tee_local $2
         (i32.add
          (get_local $0)
          (i32.const 8)
         )
        )
       )
       (get_local $6)
      )
      (i32.const 7)
     )
     (i32.const 320)
    )
    (drop
     (call $memcpy
      (i32.load
       (get_local $4)
      )
      (get_local $7)
      (i32.const 8)
     )
    )
    (i32.store
     (get_local $4)
     (tee_local $6
      (i32.add
       (i32.load
        (get_local $4)
       )
       (i32.const 8)
      )
     )
    )
    (call $eosio_assert
     (i32.gt_s
      (i32.sub
       (i32.load
        (get_local $2)
       )
       (get_local $6)
      )
      (i32.const 7)
     )
     (i32.const 320)
    )
    (drop
     (call $memcpy
      (i32.load
       (get_local $4)
      )
      (i32.add
       (get_local $7)
       (i32.const 8)
      )
      (i32.const 8)
     )
    )
    (i32.store
     (get_local $4)
     (i32.add
      (i32.load
       (get_local $4)
      )
      (i32.const 8)
     )
    )
    (drop
     (call $_ZN5eosiolsINS_10datastreamIPcEEEERT_S5_RKNSt3__16vectorIcNS6_9allocatorIcEEEE
      (call $_ZN5eosiolsINS_10datastreamIPcEENS_16permission_levelEEERT_S6_RKNSt3__16vectorIT0_NS7_9allocatorIS9_EEEE
       (get_local $0)
       (i32.add
        (get_local $7)
        (i32.const 16)
       )
      )
      (i32.add
       (get_local $7)
       (i32.const 28)
      )
     )
    )
    (br_if $label$1
     (i32.eq
      (tee_local $7
       (i32.add
        (get_local $7)
        (i32.const 40)
       )
      )
      (get_local $3)
     )
    )
    (set_local $6
     (i32.load
      (get_local $4)
     )
    )
    (br $label$2)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $8)
    (i32.const 16)
   )
  )
  (get_local $0)
 )
 (func $_ZN5eosiolsINS_10datastreamIPcEENSt3__15tupleIJtNS4_6vectorIcNS4_9allocatorIcEEEEEEEEERT_SC_RKNS6_IT0_NS7_ISD_EEEE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $7
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 16)
    )
   )
  )
  (set_local $5
   (i64.extend_u/i32
    (i32.shr_s
     (i32.sub
      (i32.load offset=4
       (get_local $1)
      )
      (i32.load
       (get_local $1)
      )
     )
     (i32.const 4)
    )
   )
  )
  (set_local $6
   (i32.load offset=4
    (get_local $0)
   )
  )
  (set_local $3
   (i32.add
    (get_local $0)
    (i32.const 8)
   )
  )
  (loop $label$0
   (set_local $4
    (i32.wrap/i64
     (get_local $5)
    )
   )
   (i32.store8 offset=15
    (get_local $7)
    (i32.or
     (i32.shl
      (tee_local $2
       (i64.ne
        (tee_local $5
         (i64.shr_u
          (get_local $5)
          (i64.const 7)
         )
        )
        (i64.const 0)
       )
      )
      (i32.const 7)
     )
     (i32.and
      (get_local $4)
      (i32.const 127)
     )
    )
   )
   (call $eosio_assert
    (i32.gt_s
     (i32.sub
      (i32.load
       (get_local $3)
      )
      (get_local $6)
     )
     (i32.const 0)
    )
    (i32.const 320)
   )
   (drop
    (call $memcpy
     (i32.load
      (tee_local $4
       (i32.add
        (get_local $0)
        (i32.const 4)
       )
      )
     )
     (i32.add
      (get_local $7)
      (i32.const 15)
     )
     (i32.const 1)
    )
   )
   (i32.store
    (get_local $4)
    (tee_local $6
     (i32.add
      (i32.load
       (get_local $4)
      )
      (i32.const 1)
     )
    )
   )
   (br_if $label$0
    (get_local $2)
   )
  )
  (block $label$1
   (br_if $label$1
    (i32.eq
     (tee_local $4
      (i32.load
       (get_local $1)
      )
     )
     (tee_local $2
      (i32.load
       (i32.add
        (get_local $1)
        (i32.const 4)
       )
      )
     )
    )
   )
   (set_local $3
    (i32.add
     (get_local $0)
     (i32.const 8)
    )
   )
   (loop $label$2
    (call $eosio_assert
     (i32.gt_s
      (i32.sub
       (i32.load
        (get_local $3)
       )
       (get_local $6)
      )
      (i32.const 1)
     )
     (i32.const 320)
    )
    (drop
     (call $memcpy
      (i32.load
       (tee_local $6
        (i32.add
         (get_local $0)
         (i32.const 4)
        )
       )
      )
      (get_local $4)
      (i32.const 2)
     )
    )
    (i32.store
     (get_local $6)
     (i32.add
      (i32.load
       (get_local $6)
      )
      (i32.const 2)
     )
    )
    (drop
     (call $_ZN5eosiolsINS_10datastreamIPcEEEERT_S5_RKNSt3__16vectorIcNS6_9allocatorIcEEEE
      (get_local $0)
      (i32.add
       (get_local $4)
       (i32.const 4)
      )
     )
    )
    (br_if $label$1
     (i32.eq
      (tee_local $4
       (i32.add
        (get_local $4)
        (i32.const 16)
       )
      )
      (get_local $2)
     )
    )
    (set_local $6
     (i32.load
      (get_local $6)
     )
    )
    (br $label$2)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $7)
    (i32.const 16)
   )
  )
  (get_local $0)
 )
 (func $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_14refund_requestE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (get_local $1)
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 3)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
    (i32.const 4)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 4)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 16)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 24)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 32)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_s
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 320)
  )
  (drop
   (call $memcpy
    (i32.load offset=4
     (get_local $0)
    )
    (i32.add
     (get_local $1)
     (i32.const 40)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (get_local $0)
 )
 (func $_ZN11eosiosystemrsIN5eosio10datastreamIPKcEEEERT_S7_RNS_14refund_requestE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (get_local $1)
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 3)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 4)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 4)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 16)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 24)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 32)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 40)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (get_local $0)
 )
 (func $_ZN11eosiosystemrsIN5eosio10datastreamIPKcEEEERT_S7_RNS_19delegated_bandwidthE (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (i32.load offset=4
      (get_local $0)
     )
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (get_local $1)
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 8)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 16)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 24)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 32)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (tee_local $2
    (i32.add
     (i32.load offset=4
      (get_local $0)
     )
     (i32.const 8)
    )
   )
  )
  (call $eosio_assert
   (i32.gt_u
    (i32.sub
     (i32.load offset=8
      (get_local $0)
     )
     (get_local $2)
    )
    (i32.const 7)
   )
   (i32.const 368)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 40)
    )
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (i32.store offset=4
   (get_local $0)
   (i32.add
    (i32.load offset=4
     (get_local $0)
    )
    (i32.const 8)
   )
  )
  (get_local $0)
 )
 (func $_ZN11eosiosystem15system_contract10delegatebwEyyN5eosio5assetES2_b (type $FUNCSIG$vijjiii) (param $0 i32) (param $1 i64) (param $2 i64) (param $3 i32) (param $4 i32) (param $5 i32)
  (local $6 i64)
  (local $7 i64)
  (local $8 i64)
  (local $9 i64)
  (local $10 i32)
  (local $11 i32)
  (local $12 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $12
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 64)
    )
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $10
   (i32.const 0)
  )
  (set_local $9
   (i64.const 5459781)
  )
  (block $label$0
   (block $label$1
    (loop $label$2
     (br_if $label$1
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $9)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$3
      (br_if $label$3
       (i64.ne
        (i64.and
         (tee_local $9
          (i64.shr_u
           (get_local $9)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$4
       (br_if $label$1
        (i64.ne
         (i64.and
          (tee_local $9
           (i64.shr_u
            (get_local $9)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$4
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $11
      (i32.const 1)
     )
     (br_if $label$2
      (i32.lt_s
       (tee_local $10
        (i32.add
         (get_local $10)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$0)
    )
   )
   (set_local $11
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $11)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (tee_local $7
     (i64.load offset=8
      (get_local $4)
     )
    )
    (i64.const 1397703940)
   )
   (i32.const 1584)
  )
  (call $eosio_assert
   (i32.xor
    (i32.wrap/i64
     (i64.shr_u
      (tee_local $8
       (i64.load
        (get_local $4)
       )
      )
      (i64.const 63)
     )
    )
    (i32.const 1)
   )
   (i32.const 2992)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $9
   (i64.const 5459781)
  )
  (set_local $10
   (i32.const 0)
  )
  (block $label$5
   (block $label$6
    (loop $label$7
     (br_if $label$6
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $9)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$8
      (br_if $label$8
       (i64.ne
        (i64.and
         (tee_local $9
          (i64.shr_u
           (get_local $9)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$9
       (br_if $label$6
        (i64.ne
         (i64.and
          (tee_local $9
           (i64.shr_u
            (get_local $9)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$9
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $11
      (i32.const 1)
     )
     (br_if $label$7
      (i32.lt_s
       (tee_local $10
        (i32.add
         (get_local $10)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$5)
    )
   )
   (set_local $11
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $11)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (tee_local $6
     (i64.load offset=8
      (get_local $3)
     )
    )
    (i64.const 1397703940)
   )
   (i32.const 1584)
  )
  (call $eosio_assert
   (i32.xor
    (i32.wrap/i64
     (i64.shr_u
      (tee_local $9
       (i64.load
        (get_local $3)
       )
      )
      (i64.const 63)
     )
    )
    (i32.const 1)
   )
   (i32.const 2992)
  )
  (call $eosio_assert
   (i64.eq
    (get_local $7)
    (get_local $6)
   )
   (i32.const 1680)
  )
  (call $eosio_assert
   (i64.gt_s
    (tee_local $7
     (i64.add
      (get_local $8)
      (get_local $9)
     )
    )
    (i64.const -4611686018427387904)
   )
   (i32.const 1728)
  )
  (call $eosio_assert
   (i64.lt_s
    (get_local $7)
    (i64.const 4611686018427387904)
   )
   (i32.const 1760)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $9
   (i64.const 5459781)
  )
  (set_local $10
   (i32.const 0)
  )
  (block $label$10
   (block $label$11
    (loop $label$12
     (br_if $label$11
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $9)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$13
      (br_if $label$13
       (i64.ne
        (i64.and
         (tee_local $9
          (i64.shr_u
           (get_local $9)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$14
       (br_if $label$11
        (i64.ne
         (i64.and
          (tee_local $9
           (i64.shr_u
            (get_local $9)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$14
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $11
      (i32.const 1)
     )
     (br_if $label$12
      (i32.lt_s
       (tee_local $10
        (i32.add
         (get_local $10)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$10)
    )
   )
   (set_local $11
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $11)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (get_local $6)
    (i64.const 1397703940)
   )
   (i32.const 1584)
  )
  (call $eosio_assert
   (i64.gt_s
    (get_local $7)
    (i64.const 0)
   )
   (i32.const 2992)
  )
  (i64.store
   (tee_local $10
    (i32.add
     (i32.add
      (get_local $12)
      (i32.const 48)
     )
     (i32.const 8)
    )
   )
   (i64.load
    (i32.add
     (get_local $3)
     (i32.const 8)
    )
   )
  )
  (i64.store
   (tee_local $11
    (i32.add
     (i32.add
      (get_local $12)
      (i32.const 32)
     )
     (i32.const 8)
    )
   )
   (i64.load
    (i32.add
     (get_local $4)
     (i32.const 8)
    )
   )
  )
  (i64.store offset=48
   (get_local $12)
   (i64.load
    (get_local $3)
   )
  )
  (i64.store offset=32
   (get_local $12)
   (i64.load
    (get_local $4)
   )
  )
  (i64.store
   (i32.add
    (i32.add
     (get_local $12)
     (i32.const 16)
    )
    (i32.const 8)
   )
   (i64.load
    (get_local $10)
   )
  )
  (i64.store offset=16
   (get_local $12)
   (i64.load offset=48
    (get_local $12)
   )
  )
  (i64.store
   (i32.add
    (get_local $12)
    (i32.const 8)
   )
   (i64.load
    (get_local $11)
   )
  )
  (i64.store
   (get_local $12)
   (i64.load offset=32
    (get_local $12)
   )
  )
  (call $_ZN11eosiosystem15system_contract8changebwEyyN5eosio5assetES2_b
   (get_local $0)
   (get_local $1)
   (get_local $2)
   (i32.add
    (get_local $12)
    (i32.const 16)
   )
   (get_local $12)
   (get_local $5)
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $12)
    (i32.const 64)
   )
  )
 )
 (func $_ZN11eosiosystem15system_contract12undelegatebwEyyN5eosio5assetES2_ (type $FUNCSIG$vijjii) (param $0 i32) (param $1 i64) (param $2 i64) (param $3 i32) (param $4 i32)
  (local $5 i64)
  (local $6 i64)
  (local $7 i64)
  (local $8 i64)
  (local $9 i64)
  (local $10 i32)
  (local $11 i32)
  (local $12 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $12
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 64)
    )
   )
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $10
   (i32.const 0)
  )
  (set_local $9
   (i64.const 5459781)
  )
  (block $label$0
   (block $label$1
    (loop $label$2
     (br_if $label$1
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $9)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$3
      (br_if $label$3
       (i64.ne
        (i64.and
         (tee_local $9
          (i64.shr_u
           (get_local $9)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$4
       (br_if $label$1
        (i64.ne
         (i64.and
          (tee_local $9
           (i64.shr_u
            (get_local $9)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$4
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $11
      (i32.const 1)
     )
     (br_if $label$2
      (i32.lt_s
       (tee_local $10
        (i32.add
         (get_local $10)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$0)
    )
   )
   (set_local $11
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $11)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.const 1397703940)
    (tee_local $7
     (i64.load offset=8
      (get_local $4)
     )
    )
   )
   (i32.const 1584)
  )
  (call $eosio_assert
   (i32.xor
    (i32.wrap/i64
     (i64.shr_u
      (tee_local $8
       (i64.load
        (get_local $4)
       )
      )
      (i64.const 63)
     )
    )
    (i32.const 1)
   )
   (i32.const 3024)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $9
   (i64.const 5459781)
  )
  (set_local $10
   (i32.const 0)
  )
  (block $label$5
   (block $label$6
    (loop $label$7
     (br_if $label$6
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $9)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$8
      (br_if $label$8
       (i64.ne
        (i64.and
         (tee_local $9
          (i64.shr_u
           (get_local $9)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$9
       (br_if $label$6
        (i64.ne
         (i64.and
          (tee_local $9
           (i64.shr_u
            (get_local $9)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$9
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $11
      (i32.const 1)
     )
     (br_if $label$7
      (i32.lt_s
       (tee_local $10
        (i32.add
         (get_local $10)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$5)
    )
   )
   (set_local $11
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $11)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (i64.const 1397703940)
    (tee_local $5
     (i64.load offset=8
      (get_local $3)
     )
    )
   )
   (i32.const 1584)
  )
  (call $eosio_assert
   (i32.xor
    (i32.wrap/i64
     (i64.shr_u
      (tee_local $6
       (i64.load
        (get_local $3)
       )
      )
      (i64.const 63)
     )
    )
    (i32.const 1)
   )
   (i32.const 3024)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 992)
  )
  (set_local $9
   (i64.const 5459781)
  )
  (set_local $10
   (i32.const 0)
  )
  (block $label$10
   (block $label$11
    (loop $label$12
     (br_if $label$11
      (i32.gt_u
       (i32.add
        (i32.shl
         (i32.wrap/i64
          (get_local $9)
         )
         (i32.const 24)
        )
        (i32.const -1073741825)
       )
       (i32.const 452984830)
      )
     )
     (block $label$13
      (br_if $label$13
       (i64.ne
        (i64.and
         (tee_local $9
          (i64.shr_u
           (get_local $9)
           (i64.const 8)
          )
         )
         (i64.const 255)
        )
        (i64.const 0)
       )
      )
      (loop $label$14
       (br_if $label$11
        (i64.ne
         (i64.and
          (tee_local $9
           (i64.shr_u
            (get_local $9)
            (i64.const 8)
           )
          )
          (i64.const 255)
         )
         (i64.const 0)
        )
       )
       (br_if $label$14
        (i32.lt_s
         (tee_local $10
          (i32.add
           (get_local $10)
           (i32.const 1)
          )
         )
         (i32.const 7)
        )
       )
      )
     )
     (set_local $11
      (i32.const 1)
     )
     (br_if $label$12
      (i32.lt_s
       (tee_local $10
        (i32.add
         (get_local $10)
         (i32.const 1)
        )
       )
       (i32.const 7)
      )
     )
     (br $label$10)
    )
   )
   (set_local $11
    (i32.const 0)
   )
  )
  (call $eosio_assert
   (get_local $11)
   (i32.const 704)
  )
  (call $eosio_assert
   (i64.eq
    (get_local $5)
    (get_local $7)
   )
   (i32.const 1680)
  )
  (call $eosio_assert
   (i64.gt_s
    (tee_local $9
     (i64.add
      (get_local $6)
      (get_local $8)
     )
    )
    (i64.const -4611686018427387904)
   )
   (i32.const 1728)
  )
  (call $eosio_assert
   (i64.lt_s
    (get_local $9)
    (i64.const 4611686018427387904)
   )
   (i32.const 1760)
  )
  (call $eosio_assert
   (i64.eq
    (i64.const 1397703940)
    (get_local $7)
   )
   (i32.const 1584)
  )
  (call $eosio_assert
   (i64.gt_s
    (get_local $9)
    (i64.const 0)
   )
   (i32.const 3024)
  )
  (call $eosio_assert
   (i64.gt_s
    (i64.load
     (i32.add
      (get_local $0)
      (i32.const 264)
     )
    )
    (i64.const 1499999999999)
   )
   (i32.const 3056)
  )
  (i64.store
   (tee_local $10
    (i32.add
     (i32.add
      (get_local $12)
      (i32.const 48)
     )
     (i32.const 8)
    )
   )
   (i64.load
    (i32.add
     (get_local $3)
     (i32.const 8)
    )
   )
  )
  (i64.store
   (tee_local $11
    (i32.add
     (i32.add
      (get_local $12)
      (i32.const 32)
     )
     (i32.const 8)
    )
   )
   (i64.load
    (i32.add
     (get_local $4)
     (i32.const 8)
    )
   )
  )
  (i64.store offset=48
   (get_local $12)
   (tee_local $9
    (i64.load
     (get_local $3)
    )
   )
  )
  (i64.store offset=48
   (get_local $12)
   (i64.sub
    (i64.const 0)
    (get_local $9)
   )
  )
  (i64.store offset=32
   (get_local $12)
   (tee_local $9
    (i64.load
     (get_local $4)
    )
   )
  )
  (i64.store offset=32
   (get_local $12)
   (i64.sub
    (i64.const 0)
    (get_local $9)
   )
  )
  (i64.store
   (i32.add
    (i32.add
     (get_local $12)
     (i32.const 16)
    )
    (i32.const 8)
   )
   (i64.load
    (get_local $10)
   )
  )
  (i64.store offset=16
   (get_local $12)
   (i64.load offset=48
    (get_local $12)
   )
  )
  (i64.store
   (i32.add
    (get_local $12)
    (i32.const 8)
   )
   (i64.load
    (get_local $11)
   )
  )
  (i64.store
   (get_local $12)
   (i64.load offset=32
    (get_local $12)
   )
  )
  (call $_ZN11eosiosystem15system_contract8changebwEyyN5eosio5assetES2_b
   (get_local $0)
   (get_local $1)
   (get_local $2)
   (i32.add
    (get_local $12)
    (i32.const 16)
   )
   (get_local $12)
   (i32.const 0)
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $12)
    (i32.const 64)
   )
  )
 )
 (func $_ZN11eosiosystem15system_contract6refundEy (type $FUNCSIG$vij) (param $0 i32) (param $1 i64)
  (local $2 i32)
  (local $3 i32)
  (local $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i64)
  (local $8 i64)
  (local $9 i64)
  (local $10 i64)
  (local $11 i64)
  (local $12 i64)
  (local $13 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $13
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 128)
    )
   )
  )
  (call $require_auth
   (get_local $1)
  )
  (i32.store
   (i32.add
    (get_local $13)
    (i32.const 56)
   )
   (i32.const 0)
  )
  (i64.store offset=32
   (get_local $13)
   (get_local $1)
  )
  (i64.store offset=40
   (get_local $13)
   (i64.const -1)
  )
  (set_local $8
   (i64.const 0)
  )
  (i64.store offset=48
   (get_local $13)
   (i64.const 0)
  )
  (i64.store offset=24
   (get_local $13)
   (tee_local $7
    (i64.load
     (get_local $0)
    )
   )
  )
  (set_local $4
   (i32.const 0)
  )
  (block $label$0
   (br_if $label$0
    (i32.lt_s
     (tee_local $0
      (call $db_find_i64
       (get_local $7)
       (get_local $1)
       (i64.const -5001342326447013888)
       (get_local $1)
      )
     )
     (i32.const 0)
    )
   )
   (call $eosio_assert
    (i32.eq
     (i32.load offset=48
      (tee_local $4
       (call $_ZNK5eosio11multi_indexILy13445401747262537728EN11eosiosystem14refund_requestEJEE31load_object_by_primary_iteratorEl
        (i32.add
         (get_local $13)
         (i32.const 24)
        )
        (get_local $0)
       )
      )
     )
     (i32.add
      (get_local $13)
      (i32.const 24)
     )
    )
    (i32.const 32)
   )
  )
  (call $eosio_assert
   (tee_local $2
    (i32.ne
     (get_local $4)
     (i32.const 0)
    )
   )
   (i32.const 3168)
  )
  (call $eosio_assert
   (i32.le_u
    (i32.add
     (i32.load offset=8
      (get_local $4)
     )
     (i32.const 259200)
    )
    (i32.wrap/i64
     (i64.div_u
      (call $current_time)
      (i64.const 1000000)
     )
    )
   )
   (i32.const 3200)
  )
  (set_local $7
   (i64.const 59)
  )
  (set_local $0
   (i32.const 672)
  )
  (set_local $9
   (i64.const 0)
  )
  (loop $label$1
   (block $label$2
    (block $label$3
     (block $label$4
      (block $label$5
       (block $label$6
        (br_if $label$6
         (i64.gt_u
          (get_local $8)
          (i64.const 10)
         )
        )
        (br_if $label$5
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $3
             (i32.load8_s
              (get_local $0)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $3
         (i32.add
          (get_local $3)
          (i32.const 165)
         )
        )
        (br $label$4)
       )
       (set_local $1
        (i64.const 0)
       )
       (br_if $label$3
        (i64.eq
         (get_local $8)
         (i64.const 11)
        )
       )
       (br $label$2)
      )
      (set_local $3
       (select
        (i32.add
         (get_local $3)
         (i32.const 208)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $3)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $1
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $3)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $1
     (i64.shl
      (i64.and
       (get_local $1)
       (i64.const 31)
      )
      (i64.and
       (get_local $7)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $0
    (i32.add
     (get_local $0)
     (i32.const 1)
    )
   )
   (set_local $7
    (i64.add
     (get_local $7)
     (i64.const -5)
    )
   )
   (set_local $9
    (i64.or
     (get_local $1)
     (get_local $9)
    )
   )
   (br_if $label$1
    (i64.ne
     (tee_local $8
      (i64.add
       (get_local $8)
       (i64.const 1)
      )
     )
     (i64.const 13)
    )
   )
  )
  (set_local $8
   (i64.const 0)
  )
  (set_local $7
   (i64.const 59)
  )
  (set_local $0
   (i32.const 2032)
  )
  (set_local $10
   (i64.const 0)
  )
  (loop $label$7
   (block $label$8
    (block $label$9
     (block $label$10
      (block $label$11
       (block $label$12
        (br_if $label$12
         (i64.gt_u
          (get_local $8)
          (i64.const 10)
         )
        )
        (br_if $label$11
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $3
             (i32.load8_s
              (get_local $0)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $3
         (i32.add
          (get_local $3)
          (i32.const 165)
         )
        )
        (br $label$10)
       )
       (set_local $1
        (i64.const 0)
       )
       (br_if $label$9
        (i64.eq
         (get_local $8)
         (i64.const 11)
        )
       )
       (br $label$8)
      )
      (set_local $3
       (select
        (i32.add
         (get_local $3)
         (i32.const 208)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $3)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $1
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $3)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $1
     (i64.shl
      (i64.and
       (get_local $1)
       (i64.const 31)
      )
      (i64.and
       (get_local $7)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $0
    (i32.add
     (get_local $0)
     (i32.const 1)
    )
   )
   (set_local $7
    (i64.add
     (get_local $7)
     (i64.const -5)
    )
   )
   (set_local $10
    (i64.or
     (get_local $1)
     (get_local $10)
    )
   )
   (br_if $label$7
    (i64.ne
     (tee_local $8
      (i64.add
       (get_local $8)
       (i64.const 1)
      )
     )
     (i64.const 13)
    )
   )
  )
  (set_local $8
   (i64.const 0)
  )
  (set_local $7
   (i64.const 59)
  )
  (set_local $0
   (i32.const 688)
  )
  (set_local $11
   (i64.const 0)
  )
  (loop $label$13
   (block $label$14
    (block $label$15
     (block $label$16
      (block $label$17
       (block $label$18
        (br_if $label$18
         (i64.gt_u
          (get_local $8)
          (i64.const 5)
         )
        )
        (br_if $label$17
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $3
             (i32.load8_s
              (get_local $0)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $3
         (i32.add
          (get_local $3)
          (i32.const 165)
         )
        )
        (br $label$16)
       )
       (set_local $1
        (i64.const 0)
       )
       (br_if $label$15
        (i64.le_u
         (get_local $8)
         (i64.const 11)
        )
       )
       (br $label$14)
      )
      (set_local $3
       (select
        (i32.add
         (get_local $3)
         (i32.const 208)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $3)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $1
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $3)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $1
     (i64.shl
      (i64.and
       (get_local $1)
       (i64.const 31)
      )
      (i64.and
       (get_local $7)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $0
    (i32.add
     (get_local $0)
     (i32.const 1)
    )
   )
   (set_local $8
    (i64.add
     (get_local $8)
     (i64.const 1)
    )
   )
   (set_local $11
    (i64.or
     (get_local $1)
     (get_local $11)
    )
   )
   (br_if $label$13
    (i64.ne
     (tee_local $7
      (i64.add
       (get_local $7)
       (i64.const -5)
      )
     )
     (i64.const -6)
    )
   )
  )
  (set_local $8
   (i64.const 0)
  )
  (set_local $7
   (i64.const 59)
  )
  (set_local $0
   (i32.const 2032)
  )
  (set_local $12
   (i64.const 0)
  )
  (loop $label$19
   (block $label$20
    (block $label$21
     (block $label$22
      (block $label$23
       (block $label$24
        (br_if $label$24
         (i64.gt_u
          (get_local $8)
          (i64.const 10)
         )
        )
        (br_if $label$23
         (i32.gt_u
          (i32.and
           (i32.add
            (tee_local $3
             (i32.load8_s
              (get_local $0)
             )
            )
            (i32.const -97)
           )
           (i32.const 255)
          )
          (i32.const 25)
         )
        )
        (set_local $3
         (i32.add
          (get_local $3)
          (i32.const 165)
         )
        )
        (br $label$22)
       )
       (set_local $1
        (i64.const 0)
       )
       (br_if $label$21
        (i64.eq
         (get_local $8)
         (i64.const 11)
        )
       )
       (br $label$20)
      )
      (set_local $3
       (select
        (i32.add
         (get_local $3)
         (i32.const 208)
        )
        (i32.const 0)
        (i32.lt_u
         (i32.and
          (i32.add
           (get_local $3)
           (i32.const -49)
          )
          (i32.const 255)
         )
         (i32.const 5)
        )
       )
      )
     )
     (set_local $1
      (i64.shr_s
       (i64.shl
        (i64.extend_u/i32
         (get_local $3)
        )
        (i64.const 56)
       )
       (i64.const 56)
      )
     )
    )
    (set_local $1
     (i64.shl
      (i64.and
       (get_local $1)
       (i64.const 31)
      )
      (i64.and
       (get_local $7)
       (i64.const 4294967295)
      )
     )
    )
   )
   (set_local $0
    (i32.add
     (get_local $0)
     (i32.const 1)
    )
   )
   (set_local $7
    (i64.add
     (get_local $7)
     (i64.const -5)
    )
   )
   (set_local $12
    (i64.or
     (get_local $1)
     (get_local $12)
    )
   )
   (br_if $label$19
    (i64.ne
     (tee_local $8
      (i64.add
       (get_local $8)
       (i64.const 1)
      )
     )
     (i64.const 13)
    )
   )
  )
  (set_local $8
   (i64.load offset=16
    (get_local $4)
   )
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (i32.add
      (get_local $4)
      (i32.const 40)
     )
    )
    (tee_local $1
     (i64.load
      (i32.add
       (get_local $4)
       (i32.const 24)
      )
     )
    )
   )
   (i32.const 1680)
  )
  (call $eosio_assert
   (i64.gt_s
    (tee_local $8
     (i64.add
      (get_local $8)
      (i64.load offset=32
       (get_local $4)
      )
     )
    )
    (i64.const -4611686018427387904)
   )
   (i32.const 1728)
  )
  (call $eosio_assert
   (i64.lt_s
    (get_local $8)
    (i64.const 4611686018427387904)
   )
   (i32.const 1760)
  )
  (i32.store
   (i32.add
    (get_local $13)
    (i32.const 16)
   )
   (i32.const 0)
  )
  (i64.store offset=8
   (get_local $13)
   (i64.const 0)
  )
  (block $label$25
   (br_if $label$25
    (i32.ge_u
     (tee_local $0
      (call $strlen
       (i32.const 3232)
      )
     )
     (i32.const -16)
    )
   )
   (block $label$26
    (block $label$27
     (block $label$28
      (br_if $label$28
       (i32.ge_u
        (get_local $0)
        (i32.const 11)
       )
      )
      (i32.store8 offset=8
       (get_local $13)
       (i32.shl
        (get_local $0)
        (i32.const 1)
       )
      )
      (set_local $3
       (i32.or
        (i32.add
         (get_local $13)
         (i32.const 8)
        )
        (i32.const 1)
       )
      )
      (br_if $label$27
       (get_local $0)
      )
      (br $label$26)
     )
     (set_local $3
      (call $_Znwj
       (tee_local $5
        (i32.and
         (i32.add
          (get_local $0)
          (i32.const 16)
         )
         (i32.const -16)
        )
       )
      )
     )
     (i32.store offset=8
      (get_local $13)
      (i32.or
       (get_local $5)
       (i32.const 1)
      )
     )
     (i32.store offset=16
      (get_local $13)
      (get_local $3)
     )
     (i32.store offset=12
      (get_local $13)
      (get_local $0)
     )
    )
    (drop
     (call $memcpy
      (get_local $3)
      (i32.const 3232)
      (get_local $0)
     )
    )
   )
   (i32.store8
    (i32.add
     (get_local $3)
     (get_local $0)
    )
    (i32.const 0)
   )
   (set_local $3
    (i32.load offset=8
     (get_local $13)
    )
   )
   (i32.store offset=8
    (get_local $13)
    (i32.const 0)
   )
   (set_local $5
    (i32.load offset=12
     (get_local $13)
    )
   )
   (i32.store offset=12
    (get_local $13)
    (i32.const 0)
   )
   (set_local $6
    (i32.load offset=16
     (get_local $13)
    )
   )
   (i32.store offset=16
    (get_local $13)
    (i32.const 0)
   )
   (set_local $7
    (i64.load
     (get_local $4)
    )
   )
   (i64.store
    (tee_local $0
     (call $_Znwj
      (i32.const 16)
     )
    )
    (get_local $10)
   )
   (i64.store offset=8
    (get_local $0)
    (get_local $11)
   )
   (i32.store offset=112
    (get_local $13)
    (get_local $0)
   )
   (i32.store offset=120
    (get_local $13)
    (tee_local $0
     (i32.add
      (get_local $0)
      (i32.const 16)
     )
    )
   )
   (i64.store offset=64
    (get_local $13)
    (get_local $12)
   )
   (i32.store offset=116
    (get_local $13)
    (get_local $0)
   )
   (i64.store offset=72
    (get_local $13)
    (get_local $7)
   )
   (i64.store offset=80
    (get_local $13)
    (get_local $8)
   )
   (i64.store
    (i32.add
     (get_local $13)
     (i32.const 88)
    )
    (get_local $1)
   )
   (i32.store offset=96
    (get_local $13)
    (get_local $3)
   )
   (i32.store
    (i32.add
     (get_local $13)
     (i32.const 100)
    )
    (get_local $5)
   )
   (i32.store
    (tee_local $0
     (i32.add
      (get_local $13)
      (i32.const 104)
     )
    )
    (get_local $6)
   )
   (call $_ZN5eosio15dispatch_inlineIJyyNS_5assetENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEEEvyyNS2_6vectorINS_16permission_levelENS6_ISA_EEEENS2_5tupleIJDpT_EEE
    (get_local $9)
    (i64.const -3617168760277827584)
    (i32.add
     (get_local $13)
     (i32.const 112)
    )
    (i32.add
     (get_local $13)
     (i32.const 64)
    )
   )
   (block $label$29
    (br_if $label$29
     (i32.eqz
      (i32.and
       (i32.load8_u offset=96
        (get_local $13)
       )
       (i32.const 1)
      )
     )
    )
    (call $_ZdlPv
     (i32.load
      (get_local $0)
     )
    )
   )
   (block $label$30
    (br_if $label$30
     (i32.eqz
      (tee_local $0
       (i32.load offset=112
        (get_local $13)
       )
      )
     )
    )
    (i32.store offset=116
     (get_local $13)
     (get_local $0)
    )
    (call $_ZdlPv
     (get_local $0)
    )
   )
   (block $label$31
    (br_if $label$31
     (i32.eqz
      (i32.and
       (i32.load8_u offset=8
        (get_local $13)
       )
       (i32.const 1)
      )
     )
    )
    (call $_ZdlPv
     (i32.load
      (i32.add
       (get_local $13)
       (i32.const 16)
      )
     )
    )
   )
   (call $eosio_assert
    (get_local $2)
    (i32.const 1888)
   )
   (call $eosio_assert
    (get_local $2)
    (i32.const 384)
   )
   (block $label$32
    (br_if $label$32
     (i32.lt_s
      (tee_local $0
       (call $db_next_i64
        (i32.load offset=52
         (get_local $4)
        )
        (i32.add
         (get_local $13)
         (i32.const 64)
        )
       )
      )
      (i32.const 0)
     )
    )
    (drop
     (call $_ZNK5eosio11multi_indexILy13445401747262537728EN11eosiosystem14refund_requestEJEE31load_object_by_primary_iteratorEl
      (i32.add
       (get_local $13)
       (i32.const 24)
      )
      (get_local $0)
     )
    )
   )
   (call $_ZN5eosio11multi_indexILy13445401747262537728EN11eosiosystem14refund_requestEJEE5eraseERKS2_
    (i32.add
     (get_local $13)
     (i32.const 24)
    )
    (get_local $4)
   )
   (block $label$33
    (br_if $label$33
     (i32.eqz
      (tee_local $4
       (i32.load offset=48
        (get_local $13)
       )
      )
     )
    )
    (block $label$34
     (block $label$35
      (br_if $label$35
       (i32.eq
        (tee_local $0
         (i32.load
          (tee_local $2
           (i32.add
            (get_local $13)
            (i32.const 52)
           )
          )
         )
        )
        (get_local $4)
       )
      )
      (loop $label$36
       (set_local $3
        (i32.load
         (tee_local $0
          (i32.add
           (get_local $0)
           (i32.const -24)
          )
         )
        )
       )
       (i32.store
        (get_local $0)
        (i32.const 0)
       )
       (block $label$37
        (br_if $label$37
         (i32.eqz
          (get_local $3)
         )
        )
        (call $_ZdlPv
         (get_local $3)
        )
       )
       (br_if $label$36
        (i32.ne
         (get_local $4)
         (get_local $0)
        )
       )
      )
      (set_local $0
       (i32.load
        (i32.add
         (get_local $13)
         (i32.const 48)
        )
       )
      )
      (br $label$34)
     )
     (set_local $0
      (get_local $4)
     )
    )
    (i32.store
     (get_local $2)
     (get_local $4)
    )
    (call $_ZdlPv
     (get_local $0)
    )
   )
   (i32.store offset=4
    (i32.const 0)
    (i32.add
     (get_local $13)
     (i32.const 128)
    )
   )
   (return)
  )
  (call $_ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv
   (i32.add
    (get_local $13)
    (i32.const 8)
   )
  )
  (unreachable)
 )
 (func $_ZN11eosiosystem15system_contract11regproducerEyRKN5eosio10public_keyERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEt (type $FUNCSIG$vijiii) (param $0 i32) (param $1 i64) (param $2 i32) (param $3 i32) (param $4 i32)
  (local $5 i32)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (local $9 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 96)
    )
   )
  )
  (i64.store offset=48
   (get_local $9)
   (get_local $1)
  )
  (i32.store16 offset=46
   (get_local $9)
   (get_local $4)
  )
  (call $eosio_assert
   (i32.or
    (i32.and
     (i32.xor
      (i32.load8_u
       (get_local $3)
      )
      (i32.const -1)
     )
     (i32.const 1)
    )
    (i32.lt_u
     (i32.load offset=4
      (get_local $3)
     )
     (i32.const 512)
    )
   )
   (i32.const 3248)
  )
  (drop
   (call $memset
    (i32.or
     (get_local $9)
     (i32.const 4)
    )
    (i32.const 0)
    (i32.const 36)
   )
  )
  (i32.store
   (get_local $9)
   (i32.const 0)
  )
  (call $eosio_assert
   (call $_ZN5eosioneERKNS_10public_keyES2_
    (get_local $2)
    (get_local $9)
   )
   (i32.const 3264)
  )
  (call $require_auth
   (get_local $1)
  )
  (block $label$0
   (br_if $label$0
    (i32.eq
     (tee_local $8
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 76)
       )
      )
     )
     (tee_local $5
      (i32.load
       (i32.add
        (get_local $0)
        (i32.const 72)
       )
      )
     )
    )
   )
   (set_local $4
    (i32.add
     (get_local $8)
     (i32.const -24)
    )
   )
   (set_local $6
    (i32.sub
     (i32.const 0)
     (get_local $5)
    )
   )
   (loop $label$1
    (br_if $label$0
     (i64.eq
      (i64.load
       (i32.load
        (get_local $4)
       )
      )
      (get_local $1)
     )
    )
    (set_local $8
     (get_local $4)
    )
    (set_local $4
     (tee_local $7
      (i32.add
       (get_local $4)
       (i32.const -24)
      )
     )
    )
    (br_if $label$1
     (i32.ne
      (i32.add
       (get_local $7)
       (get_local $6)
      )
      (i32.const -24)
     )
    )
   )
  )
  (set_local $7
   (i32.add
    (get_local $0)
    (i32.const 48)
   )
  )
  (block $label$2
   (block $label$3
    (block $label$4
     (block $label$5
      (block $label$6
       (br_if $label$6
        (i32.eq
         (get_local $8)
         (get_local $5)
        )
       )
       (call $eosio_assert
        (i32.eq
         (i32.load
          (i32.add
           (tee_local $4
            (i32.load
             (i32.add
              (get_local $8)
              (i32.const -24)
             )
            )
           )
           (i32.const 92)
          )
         )
         (get_local $7)
        )
        (i32.const 32)
       )
       (set_local $1
        (i64.load offset=48
         (get_local $9)
        )
       )
       (br_if $label$5
        (get_local $4)
       )
       (br $label$3)
      )
      (br_if $label$4
       (i32.le_s
        (tee_local $4
         (call $db_find_i64
          (i64.load
           (i32.add
            (get_local $0)
            (i32.const 48)
           )
          )
          (i64.load
           (i32.add
            (get_local $0)
            (i32.const 56)
           )
          )
          (i64.const -5915305344019464192)
          (get_local $1)
         )
        )
        (i32.const -1)
       )
      )
      (call $eosio_assert
       (i32.eq
        (i32.load offset=92
         (tee_local $4
          (call $_ZNK5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE31load_object_by_primary_iteratorEl
           (get_local $7)
           (get_local $4)
          )
         )
        )
        (get_local $7)
       )
       (i32.const 32)
      )
      (set_local $1
       (i64.load offset=48
        (get_local $9)
       )
      )
     )
     (i32.store offset=4
      (get_local $9)
      (get_local $3)
     )
     (i32.store
      (get_local $9)
      (get_local $2)
     )
     (i32.store offset=8
      (get_local $9)
      (i32.add
       (get_local $9)
       (i32.const 46)
      )
     )
     (call $eosio_assert
      (i32.const 1)
      (i32.const 96)
     )
     (call $_ZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE6modifyIZNS1_15system_contract11regproducerEyRKNS_10public_keyERKNSt3__112basic_stringIcNSF_11char_traitsIcEENSF_9allocatorIcEEEEtE4$_16EEvRKS2_yOT_
      (get_local $7)
      (get_local $4)
      (get_local $1)
      (get_local $9)
     )
     (br $label$2)
    )
    (set_local $1
     (i64.load offset=48
      (get_local $9)
     )
    )
   )
   (i32.store offset=4
    (get_local $9)
    (get_local $2)
   )
   (i32.store offset=8
    (get_local $9)
    (get_local $3)
   )
   (i32.store
    (get_local $9)
    (i32.add
     (get_local $9)
     (i32.const 48)
    )
   )
   (i32.store offset=12
    (get_local $9)
    (i32.add
     (get_local $9)
     (i32.const 46)
    )
   )
   (i64.store offset=88
    (get_local $9)
    (get_local $1)
   )
   (call $eosio_assert
    (i64.eq
     (i64.load
      (i32.add
       (get_local $0)
       (i32.const 48)
      )
     )
     (call $current_receiver)
    )
    (i32.const 1184)
   )
   (i32.store offset=64
    (get_local $9)
    (get_local $7)
   )
   (i32.store offset=68
    (get_local $9)
    (get_local $9)
   )
   (i32.store offset=72
    (get_local $9)
    (i32.add
     (get_local $9)
     (i32.const 88)
    )
   )
   (i32.store offset=16
    (tee_local $4
     (call $_Znwj
      (i32.const 104)
     )
    )
    (i32.const 0)
   )
   (i64.store offset=8
    (get_local $4)
    (i64.const 0)
   )
   (i32.store8 offset=56
    (get_local $4)
    (i32.const 1)
   )
   (i32.store offset=60
    (get_local $4)
    (i32.const 0)
   )
   (i32.store offset=64
    (get_local $4)
    (i32.const 0)
   )
   (i32.store offset=68
    (get_local $4)
    (i32.const 0)
   )
   (i32.store offset=72
    (get_local $4)
    (i32.const 0)
   )
   (i64.store offset=80
    (get_local $4)
    (i64.const 0)
   )
   (i32.store16 offset=88
    (get_local $4)
    (i32.const 0)
   )
   (i32.store offset=92
    (get_local $4)
    (get_local $7)
   )
   (call $_ZZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE7emplaceIZNS1_15system_contract11regproducerEyRKNS_10public_keyERKNSt3__112basic_stringIcNSF_11char_traitsIcEENSF_9allocatorIcEEEEtE4$_17EENS9_14const_iteratorEyOT_ENKUlRSQ_E_clINS9_4itemEEEDaSS_
    (i32.add
     (get_local $9)
     (i32.const 64)
    )
    (get_local $4)
   )
   (i32.store offset=80
    (get_local $9)
    (get_local $4)
   )
   (i64.store offset=64
    (get_local $9)
    (tee_local $1
     (i64.load
      (get_local $4)
     )
    )
   )
   (i32.store offset=60
    (get_local $9)
    (tee_local $8
     (i32.load offset=96
      (get_local $4)
     )
    )
   )
   (block $label$7
    (block $label$8
     (br_if $label$8
      (i32.ge_u
       (tee_local $7
        (i32.load
         (tee_local $6
          (i32.add
           (get_local $0)
           (i32.const 76)
          )
         )
        )
       )
       (i32.load
        (i32.add
         (get_local $0)
         (i32.const 80)
        )
       )
      )
     )
     (i64.store offset=8
      (get_local $7)
      (get_local $1)
     )
     (i32.store offset=16
      (get_local $7)
      (get_local $8)
     )
     (i32.store offset=80
      (get_local $9)
      (i32.const 0)
     )
     (i32.store
      (get_local $7)
      (get_local $4)
     )
     (i32.store
      (get_local $6)
      (i32.add
       (get_local $7)
       (i32.const 24)
      )
     )
     (br $label$7)
    )
    (call $_ZNSt3__16vectorIN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS1_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS4_dXadL_ZNKS4_8by_votesEvEEEEEEEE8item_ptrENS_9allocatorISC_EEE24__emplace_back_slow_pathIJNS_10unique_ptrINSB_4itemENS_14default_deleteISI_EEEERyRlEEEvDpOT_
     (i32.add
      (get_local $0)
      (i32.const 72)
     )
     (i32.add
      (get_local $9)
      (i32.const 80)
     )
     (i32.add
      (get_local $9)
      (i32.const 64)
     )
     (i32.add
      (get_local $9)
      (i32.const 60)
     )
    )
   )
   (set_local $4
    (i32.load offset=80
     (get_local $9)
    )
   )
   (i32.store offset=80
    (get_local $9)
    (i32.const 0)
   )
   (br_if $label$2
    (i32.eqz
     (get_local $4)
    )
   )
   (block $label$9
    (br_if $label$9
     (i32.eqz
      (i32.and
       (i32.load8_u offset=60
        (get_local $4)
       )
       (i32.const 1)
      )
     )
    )
    (call $_ZdlPv
     (i32.load
      (i32.add
       (get_local $4)
       (i32.const 68)
      )
     )
    )
   )
   (call $_ZdlPv
    (get_local $4)
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $9)
    (i32.const 96)
   )
  )
 )
 (func $_ZN5eosioneERKNS_10public_keyES2_ (param $0 i32) (param $1 i32) (result i32)
  (local $2 i32)
  (set_local $2
   (i32.const 1)
  )
  (block $label$0
   (br_if $label$0
    (i32.ne
     (i32.load
      (get_local $0)
     )
     (i32.load
      (get_local $1)
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u offset=4
      (get_local $0)
     )
     (i32.load8_u offset=4
      (get_local $1)
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 5)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 5)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 6)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 6)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 7)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 7)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 8)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 8)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 9)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 9)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 10)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 10)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 11)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 11)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 12)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 12)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 13)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 13)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 14)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 14)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 15)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 15)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 16)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 16)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 17)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 17)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 18)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 18)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 19)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 19)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 20)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 20)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 21)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 21)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 22)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 22)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 23)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 23)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 24)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 24)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 25)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 25)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 26)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 26)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 27)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 27)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 28)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 28)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 29)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 29)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 30)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 30)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 31)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 31)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 32)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 32)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 33)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 33)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 34)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 34)
      )
     )
    )
   )
   (br_if $label$0
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 35)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 35)
      )
     )
    )
   )
   (set_local $2
    (i32.ne
     (i32.load8_u
      (i32.add
       (get_local $0)
       (i32.const 36)
      )
     )
     (i32.load8_u
      (i32.add
       (get_local $1)
       (i32.const 36)
      )
     )
    )
   )
  )
  (get_local $2)
 )
 (func $_ZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE6modifyIZNS1_15system_contract11regproducerEyRKNS_10public_keyERKNSt3__112basic_stringIcNSF_11char_traitsIcEENSF_9allocatorIcEEEEtE4$_16EEvRKS2_yOT_ (param $0 i32) (param $1 i32) (param $2 i64) (param $3 i32)
  (local $4 i64)
  (local $5 i32)
  (local $6 f64)
  (local $7 i64)
  (local $8 i32)
  (local $9 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $8
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 48)
    )
   )
  )
  (call $eosio_assert
   (i32.eq
    (i32.load
     (i32.add
      (get_local $1)
      (i32.const 92)
     )
    )
    (get_local $0)
   )
   (i32.const 144)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 192)
  )
  (f64.store offset=24
   (tee_local $9
    (get_local $8)
   )
   (select
    (f64.neg
     (tee_local $6
      (f64.load
       (i32.add
        (get_local $1)
        (i32.const 8)
       )
      )
     )
    )
    (get_local $6)
    (i32.load8_u
     (tee_local $5
      (i32.add
       (get_local $1)
       (i32.const 56)
      )
     )
    )
   )
  )
  (set_local $4
   (i64.load
    (get_local $1)
   )
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 16)
    )
    (i32.load
     (get_local $3)
    )
    (i32.const 37)
   )
  )
  (i32.store8
   (get_local $5)
   (i32.const 1)
  )
  (drop
   (call $_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
    (i32.add
     (get_local $1)
     (i32.const 60)
    )
    (i32.load offset=4
     (get_local $3)
    )
   )
  )
  (i32.store16 offset=88
   (get_local $1)
   (i32.load16_u
    (i32.load offset=8
     (get_local $3)
    )
   )
  )
  (call $eosio_assert
   (i64.eq
    (get_local $4)
    (i64.load
     (get_local $1)
    )
   )
   (i32.const 256)
  )
  (set_local $7
   (i64.load32_u offset=16
    (get_local $1)
   )
  )
  (set_local $3
   (i32.const 64)
  )
  (loop $label$0
   (set_local $3
    (i32.add
     (get_local $3)
     (i32.const 1)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $7
      (i64.shr_u
       (get_local $7)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (set_local $3
   (i32.add
    (tee_local $5
     (select
      (i32.load
       (i32.add
        (get_local $1)
        (i32.const 64)
       )
      )
      (i32.shr_u
       (tee_local $5
        (i32.load8_u
         (i32.add
          (get_local $1)
          (i32.const 60)
         )
        )
       )
       (i32.const 1)
      )
      (i32.and
       (get_local $5)
       (i32.const 1)
      )
     )
    )
    (get_local $3)
   )
  )
  (set_local $7
   (i64.extend_u/i32
    (get_local $5)
   )
  )
  (loop $label$1
   (set_local $3
    (i32.add
     (get_local $3)
     (i32.const 1)
    )
   )
   (br_if $label$1
    (i64.ne
     (tee_local $7
      (i64.shr_u
       (get_local $7)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.lt_u
      (get_local $3)
      (i32.const 513)
     )
    )
    (set_local $8
     (call $malloc
      (get_local $3)
     )
    )
    (br $label$2)
   )
   (i32.store offset=4
    (i32.const 0)
    (tee_local $8
     (i32.sub
      (get_local $8)
      (i32.and
       (i32.add
        (get_local $3)
        (i32.const 15)
       )
       (i32.const -16)
      )
     )
    )
   )
  )
  (i32.store offset=12
   (get_local $9)
   (get_local $8)
  )
  (i32.store offset=8
   (get_local $9)
   (get_local $8)
  )
  (i32.store offset=16
   (get_local $9)
   (i32.add
    (get_local $8)
    (get_local $3)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_13producer_infoE
    (i32.add
     (get_local $9)
     (i32.const 8)
    )
    (get_local $1)
   )
  )
  (call $db_update_i64
   (i32.load offset=96
    (get_local $1)
   )
   (get_local $2)
   (get_local $8)
   (get_local $3)
  )
  (block $label$4
   (br_if $label$4
    (i32.lt_u
     (get_local $3)
     (i32.const 513)
    )
   )
   (call $free
    (get_local $8)
   )
  )
  (block $label$5
   (br_if $label$5
    (i64.lt_u
     (get_local $4)
     (i64.load offset=16
      (get_local $0)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $0)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $4)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $4)
      (i64.const -3)
     )
    )
   )
  )
  (f64.store offset=40
   (get_local $9)
   (select
    (f64.neg
     (tee_local $6
      (f64.load
       (i32.add
        (get_local $1)
        (i32.const 8)
       )
      )
     )
    )
    (get_local $6)
    (i32.load8_u
     (i32.add
      (get_local $1)
      (i32.const 56)
     )
    )
   )
  )
  (block $label$6
   (br_if $label$6
    (i32.eqz
     (call $memcmp
      (i32.add
       (get_local $9)
       (i32.const 24)
      )
      (i32.add
       (get_local $9)
       (i32.const 40)
      )
      (i32.const 8)
     )
    )
   )
   (block $label$7
    (br_if $label$7
     (i32.gt_s
      (tee_local $3
       (i32.load offset=100
        (get_local $1)
       )
      )
      (i32.const -1)
     )
    )
    (i32.store
     (i32.add
      (get_local $1)
      (i32.const 100)
     )
     (tee_local $3
      (call $db_idx_double_find_primary
       (i64.load
        (get_local $0)
       )
       (i64.load offset=8
        (get_local $0)
       )
       (i64.const -5915305344019464192)
       (i32.add
        (get_local $9)
        (i32.const 32)
       )
       (get_local $4)
      )
     )
    )
   )
   (call $db_idx_double_update
    (get_local $3)
    (get_local $2)
    (i32.add
     (get_local $9)
     (i32.const 40)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $9)
    (i32.const 48)
   )
  )
 )
 (func $_ZZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE7emplaceIZNS1_15system_contract11regproducerEyRKNS_10public_keyERKNSt3__112basic_stringIcNSF_11char_traitsIcEENSF_9allocatorIcEEEEtE4$_17EENS9_14const_iteratorEyOT_ENKUlRSQ_E_clINS9_4itemEEEDaSS_ (param $0 i32) (param $1 i32)
  (local $2 i32)
  (local $3 i32)
  (local $4 i64)
  (local $5 i64)
  (local $6 f64)
  (local $7 i64)
  (local $8 i32)
  (local $9 i32)
  (local $10 i32)
  (set_local $10
   (tee_local $9
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 32)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (get_local $9)
  )
  (set_local $2
   (i32.load
    (tee_local $8
     (i32.load offset=4
      (get_local $0)
     )
    )
   )
  )
  (i64.store offset=8
   (get_local $1)
   (i64.const 0)
  )
  (i64.store
   (get_local $1)
   (i64.load
    (get_local $2)
   )
  )
  (set_local $2
   (i32.load
    (get_local $0)
   )
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 16)
    )
    (i32.load offset=4
     (get_local $8)
    )
    (i32.const 37)
   )
  )
  (i32.store8 offset=56
   (get_local $1)
   (i32.const 1)
  )
  (drop
   (call $_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
    (i32.add
     (get_local $1)
     (i32.const 60)
    )
    (i32.load offset=8
     (get_local $8)
    )
   )
  )
  (i32.store16 offset=88
   (get_local $1)
   (i32.load16_u
    (i32.load offset=12
     (get_local $8)
    )
   )
  )
  (set_local $7
   (i64.load32_u offset=16
    (get_local $1)
   )
  )
  (set_local $8
   (i32.const 64)
  )
  (loop $label$0
   (set_local $8
    (i32.add
     (get_local $8)
     (i32.const 1)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $7
      (i64.shr_u
       (get_local $7)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (set_local $8
   (i32.add
    (tee_local $3
     (select
      (i32.load
       (i32.add
        (get_local $1)
        (i32.const 64)
       )
      )
      (i32.shr_u
       (tee_local $3
        (i32.load8_u
         (i32.add
          (get_local $1)
          (i32.const 60)
         )
        )
       )
       (i32.const 1)
      )
      (i32.and
       (get_local $3)
       (i32.const 1)
      )
     )
    )
    (get_local $8)
   )
  )
  (set_local $7
   (i64.extend_u/i32
    (get_local $3)
   )
  )
  (loop $label$1
   (set_local $8
    (i32.add
     (get_local $8)
     (i32.const 1)
    )
   )
   (br_if $label$1
    (i64.ne
     (tee_local $7
      (i64.shr_u
       (get_local $7)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (block $label$2
   (block $label$3
    (br_if $label$3
     (i32.lt_u
      (get_local $8)
      (i32.const 513)
     )
    )
    (set_local $9
     (call $malloc
      (get_local $8)
     )
    )
    (br $label$2)
   )
   (i32.store offset=4
    (i32.const 0)
    (tee_local $9
     (i32.sub
      (get_local $9)
      (i32.and
       (i32.add
        (get_local $8)
        (i32.const 15)
       )
       (i32.const -16)
      )
     )
    )
   )
  )
  (i32.store offset=12
   (get_local $10)
   (get_local $9)
  )
  (i32.store offset=8
   (get_local $10)
   (get_local $9)
  )
  (i32.store offset=16
   (get_local $10)
   (i32.add
    (get_local $9)
    (get_local $8)
   )
  )
  (drop
   (call $_ZN11eosiosystemlsIN5eosio10datastreamIPcEEEERT_S6_RKNS_13producer_infoE
    (i32.add
     (get_local $10)
     (i32.const 8)
    )
    (get_local $1)
   )
  )
  (i32.store offset=96
   (get_local $1)
   (call $db_store_i64
    (i64.load offset=8
     (get_local $2)
    )
    (i64.const -5915305344019464192)
    (i64.load
     (i32.load offset=8
      (get_local $0)
     )
    )
    (tee_local $7
     (i64.load
      (get_local $1)
     )
    )
    (get_local $9)
    (get_local $8)
   )
  )
  (block $label$4
   (br_if $label$4
    (i32.lt_u
     (get_local $8)
     (i32.const 513)
    )
   )
   (call $free
    (get_local $9)
   )
  )
  (block $label$5
   (br_if $label$5
    (i64.lt_u
     (get_local $7)
     (i64.load offset=16
      (get_local $2)
     )
    )
   )
   (i64.store
    (i32.add
     (get_local $2)
     (i32.const 16)
    )
    (select
     (i64.const -2)
     (i64.add
      (get_local $7)
      (i64.const 1)
     )
     (i64.gt_u
      (get_local $7)
      (i64.const -3)
     )
    )
   )
  )
  (set_local $7
   (i64.load
    (i32.add
     (get_local $2)
     (i32.const 8)
    )
   )
  )
  (set_local $4
   (i64.load
    (i32.load
     (i32.add
      (get_local $0)
      (i32.const 8)
     )
    )
   )
  )
  (set_local $5
   (i64.load
    (get_local $1)
   )
  )
  (f64.store offset=24
   (get_local $10)
   (select
    (f64.neg
     (tee_local $6
      (f64.load
       (i32.add
        (get_local $1)
        (i32.const 8)
       )
      )
     )
    )
    (get_local $6)
    (i32.load8_u
     (i32.add
      (get_local $1)
      (i32.const 56)
     )
    )
   )
  )
  (i32.store offset=100
   (get_local $1)
   (call $db_idx_double_store
    (get_local $7)
    (i64.const -5915305344019464192)
    (get_local $4)
    (get_local $5)
    (i32.add
     (get_local $10)
     (i32.const 24)
    )
   )
  )
  (i32.store offset=4
   (i32.const 0)
   (i32.add
    (get_local $10)
    (i32.const 32)
   )
  )
 )
 (func $_ZN11eosiosystem15system_contract9unregprodEy (type $FUNCSIG$vij) (param $0 i32) (param $1 i64)
  (call $require_auth
   (get_local $1)
  )
  (call $_ZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE6modifyIZNS1_15system_contract9unregprodEyE4$_18EEvRKS2_yOT_
   (tee_local $0
    (i32.add
     (get_local $0)
     (i32.const 48)
    )
   )
   (call $_ZNK5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE3getEyPKc
    (get_local $0)
    (get_local $1)
    (i32.const 2672)
   )
  )
 )
 (func $_ZN5eosio11multi_indexILy12531438729690087424EN11eosiosystem13producer_infoEJNS_10indexed_byILy12531717195943457440EN5boost11multi_index13const_mem_funIS2_dXadL_ZNKS2_8by_votesEvEEEEEEEE6modifyIZNS1_15system_contract9unregprodEyE4$_18EEvRKS2_yOT_ (param $0 i32) (param $1 i32)
  (local $2 i64)
  (local $3 f64)
  (local $4 i32)
  (local $5 i64)
  (local $6 i32)
  (local $7 i32)
  (local $8 i32)
  (i32.store offset=4
   (i32.const 0)
   (tee_local $7
    (i32.sub
     (i32.load offset=4
      (i32.const 0)
     )
     (i32.const 64)
    )
   )
  )
  (call $eosio_assert
   (i32.eq
    (i32.load
     (i32.add
      (get_local $1)
      (i32.const 92)
     )
    )
    (get_local $0)
   )
   (i32.const 144)
  )
  (call $eosio_assert
   (i64.eq
    (i64.load
     (get_local $0)
    )
    (call $current_receiver)
   )
   (i32.const 192)
  )
  (f64.store
   (tee_local $8
    (get_local $7)
   )
   (select
    (f64.neg
     (tee_local $3
      (f64.load
       (i32.add
        (get_local $1)
        (i32.const 8)
       )
      )
     )
    )
    (get_local $3)
    (i32.load8_u
     (tee_local $6
      (i32.add
       (get_local $1)
       (i32.const 56)
      )
     )
    )
   )
  )
  (set_local $2
   (i64.load
    (get_local $1)
   )
  )
  (drop
   (call $memset
    (i32.add
     (get_local $8)
     (i32.const 24)
    )
    (i32.const 0)
    (i32.const 36)
   )
  )
  (i32.store offset=16
   (get_local $1)
   (i32.const 0)
  )
  (drop
   (call $memcpy
    (i32.add
     (get_local $1)
     (i32.const 20)
    )
    (i32.add
     (get_local $8)
     (i32.const 24)
    )
    (i32.const 33)
   )
  )
  (i32.store8
   (get_local $6)
   (i32.const 0)
  )
  (call $eosio_assert
   (i32.const 1)
   (i32.const 256)
  )
  (set_local $5
   (i64.load32_u offset=16
    (get_local $1)
   )
  )
  (set_local $6
   (i32.const 64)
  )
  (loop $label$0
   (set_local $6
    (i32.add
     (get_local $6)
     (i32.const 1)
    )
   )
   (br_if $label$0
    (i64.ne
     (tee_local $5
      (i64.shr_u
       (get_local $5)
       (i64.const 7)
      )
     )
     (i64.const 0)
    )
   )
  )
  (set_local $6
   (i32.add
    (tee_local $4
     (select
      (i32.load
       (i32.add
        (get_local $1)
        (i32.const 64)
       )
      )
      (i32.shr_u
       (tee_local $4
        (i32.load8_u offset=60
         (get_local $1)
        )
       )
       (i32.const 1)
      )
      (i32.and
       (get_local $4)
       (i32.const 1)
      )
     )
    )
    (get_local $6)
   )
  )
  (set_local $5
   (i64.extend_u/i32