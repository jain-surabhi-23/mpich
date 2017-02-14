/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */
/*
 *  (C) 2006 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 *  Portions of this code were written by Intel Corporation.
 *  Copyright (C) 2011-2016 Intel Corporation.  Intel provides this material
 *  to Argonne National Laboratory subject to Software Grant and Corporate
 *  Contributor License Agreement dated February 8, 2012.
 */

#ifndef NETMOD_DIRECT
#define NETMOD_DISABLE_INLINES
#include <mpidimpl.h>
#include "netmod_direct.h"
MPIDI_NM_funcs_t MPIDI_NM_stubnm_funcs = {
    MPIDI_NM_mpi_init_hook,
    MPIDI_NM_mpi_finalize_hook,
    MPIDI_NM_progress,
    MPIDI_NM_mpi_comm_connect,
    MPIDI_NM_mpi_comm_disconnect,
    MPIDI_NM_mpi_open_port,
    MPIDI_NM_mpi_close_port,
    MPIDI_NM_mpi_comm_accept,
    MPIDI_NM_comm_get_lpid,
    MPIDI_NM_get_local_upids,
    MPIDI_NM_upids_to_lupids,
    MPIDI_NM_create_intercomm_from_lpids,
    MPIDI_NM_mpi_comm_create_hook,
    MPIDI_NM_mpi_comm_free_hook,
    MPIDI_NM_am_request_init,
    MPIDI_NM_am_request_finalize,
    MPIDI_NM_am_send_hdr,
    MPIDI_NM_am_isend,
    MPIDI_NM_am_isendv,
    MPIDI_NM_am_send_hdr_reply,
    MPIDI_NM_am_isend_reply,
    MPIDI_NM_am_hdr_max_sz,
    MPIDI_NM_am_recv,
};

MPIDI_NM_native_funcs_t MPIDI_NM_native_stubnm_funcs = {
    MPIDI_NM_mpi_send,
    MPIDI_NM_mpi_ssend,
    MPIDI_NM_mpi_startall,
    MPIDI_NM_mpi_send_init,
    MPIDI_NM_mpi_ssend_init,
    MPIDI_NM_mpi_rsend_init,
    MPIDI_NM_mpi_bsend_init,
    MPIDI_NM_mpi_isend,
    MPIDI_NM_mpi_issend,
    MPIDI_NM_mpi_cancel_send,
    MPIDI_NM_mpi_recv_init,
    MPIDI_NM_mpi_recv,
    MPIDI_NM_mpi_irecv,
    MPIDI_NM_mpi_imrecv,
    MPIDI_NM_mpi_cancel_recv,
    MPIDI_NM_mpi_alloc_mem,
    MPIDI_NM_mpi_free_mem,
    MPIDI_NM_mpi_improbe,
    MPIDI_NM_mpi_iprobe,
    MPIDI_NM_mpi_win_set_info,
    MPIDI_NM_mpi_win_shared_query,
    MPIDI_NM_mpi_put,
    MPIDI_NM_mpi_win_start,
    MPIDI_NM_mpi_win_complete,
    MPIDI_NM_mpi_win_post,
    MPIDI_NM_mpi_win_wait,
    MPIDI_NM_mpi_win_test,
    MPIDI_NM_mpi_win_lock,
    MPIDI_NM_mpi_win_unlock,
    MPIDI_NM_mpi_win_get_info,
    MPIDI_NM_mpi_get,
    MPIDI_NM_mpi_win_free,
    MPIDI_NM_mpi_win_fence,
    MPIDI_NM_mpi_win_create,
    MPIDI_NM_mpi_accumulate,
    MPIDI_NM_mpi_win_attach,
    MPIDI_NM_mpi_win_allocate_shared,
    MPIDI_NM_mpi_rput,
    MPIDI_NM_mpi_win_flush_local,
    MPIDI_NM_mpi_win_detach,
    MPIDI_NM_mpi_compare_and_swap,
    MPIDI_NM_mpi_raccumulate,
    MPIDI_NM_mpi_rget_accumulate,
    MPIDI_NM_mpi_fetch_and_op,
    MPIDI_NM_mpi_win_allocate,
    MPIDI_NM_mpi_win_flush,
    MPIDI_NM_mpi_win_flush_local_all,
    MPIDI_NM_mpi_win_unlock_all,
    MPIDI_NM_mpi_win_create_dynamic,
    MPIDI_NM_mpi_rget,
    MPIDI_NM_mpi_win_sync,
    MPIDI_NM_mpi_win_flush_all,
    MPIDI_NM_mpi_get_accumulate,
    MPIDI_NM_mpi_win_lock_all,
    MPIDI_NM_rank_is_local,
    MPIDI_NM_mpi_barrier,
    MPIDI_NM_mpi_bcast,
    MPIDI_NM_mpi_allreduce,
    MPIDI_NM_mpi_allgather,
    MPIDI_NM_mpi_allgatherv,
    MPIDI_NM_mpi_scatter,
    MPIDI_NM_mpi_scatterv,
    MPIDI_NM_mpi_gather,
    MPIDI_NM_mpi_gatherv,
    MPIDI_NM_mpi_alltoall,
    MPIDI_NM_mpi_alltoallv,
    MPIDI_NM_mpi_alltoallw,
    MPIDI_NM_mpi_reduce,
    MPIDI_NM_mpi_reduce_scatter,
    MPIDI_NM_mpi_reduce_scatter_block,
    MPIDI_NM_mpi_scan,
    MPIDI_NM_mpi_exscan,
    MPIDI_NM_mpi_neighbor_allgather,
    MPIDI_NM_mpi_neighbor_allgatherv,
    MPIDI_NM_mpi_neighbor_alltoall,
    MPIDI_NM_mpi_neighbor_alltoallv,
    MPIDI_NM_mpi_neighbor_alltoallw,
    MPIDI_NM_mpi_ineighbor_allgather,
    MPIDI_NM_mpi_ineighbor_allgatherv,
    MPIDI_NM_mpi_ineighbor_alltoall,
    MPIDI_NM_mpi_ineighbor_alltoallv,
    MPIDI_NM_mpi_ineighbor_alltoallw,
    MPIDI_NM_mpi_ibarrier,
    MPIDI_NM_mpi_ibcast,
    MPIDI_NM_mpi_iallgather,
    MPIDI_NM_mpi_iallgatherv,
    MPIDI_NM_mpi_iallreduce,
    MPIDI_NM_mpi_ialltoall,
    MPIDI_NM_mpi_ialltoallv,
    MPIDI_NM_mpi_ialltoallw,
    MPIDI_NM_mpi_iexscan,
    MPIDI_NM_mpi_igather,
    MPIDI_NM_mpi_igatherv,
    MPIDI_NM_mpi_ireduce_scatter_block,
    MPIDI_NM_mpi_ireduce_scatter,
    MPIDI_NM_mpi_ireduce,
    MPIDI_NM_mpi_iscan,
    MPIDI_NM_mpi_iscatter,
    MPIDI_NM_mpi_iscatterv,
    MPIDI_NM_mpi_type_commit_hook,
    MPIDI_NM_mpi_type_free_hook,
    MPIDI_NM_mpi_op_commit_hook,
    MPIDI_NM_mpi_op_free_hook,
};
#endif