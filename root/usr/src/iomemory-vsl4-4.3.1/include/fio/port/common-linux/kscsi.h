// --------------------------------------------------------------------------
// Copyright (c) 2013-2014, Fusion-io, Inc.(acquired by SanDisk Corp. 2014)
// Copyright (c) 2014 SanDisk Corp. and/or all its affiliates. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// * Redistributions of source code must retain the above copyright notice,
//   this list of conditions and the following disclaimer.
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
// * Neither the name of the SanDisk Corp. nor the names of its contributors
//   may be used to endorse or promote products derived from this software
//   without specific prior written permission.
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
// OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// --------------------------------------------------------------------------

// This file contains SCSI driver interfaces between the common-linux and specific-linux porting layers.
// It abstracts slight differences in linux variant mid-layer semantics.

#ifndef _FIO_PORT_COMMON_LINUX_KSCSI_
#define _FIO_PORT_COMMON_LINUX_KSCSI_

#ifndef __FIO_PORT_KSCSI_H__
#error Do not include this file directly - instead include <fio/port/kscsi.h>
#endif

#include <fio/port/ktypes.h>

/**
 * @ingroup PORT_COMMON_LINUX
 * @{
 */
// common-linux => specific-linux interfaces.

struct Scsi_Host;
struct pci_dev;

extern int fio_port_scsi_host_register_host(struct Scsi_Host *sh, struct pci_dev *pdev);
extern void fio_port_scsi_host_unregister_host(struct Scsi_Host *sh);

// common-linux SCSI initialization interfaces

extern int kfio_platform_init_scsi_interface(void);
extern int kfio_platform_teardown_scsi_interface(void);

/**
 * @}
 */

#endif // _FIO_PORT_COMMON_LINUX_KSCSI_
