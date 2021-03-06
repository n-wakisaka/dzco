/* DZco - digital control library
 * Copyright (C) 2000 Tomomichi Sugihara (Zhidao)
 *
 * dz_sys_filt_maf - moving-average filter
 */

#ifndef __DZ_SYS_FILT_MAF_H__
#define __DZ_SYS_FILT_MAF_H__

/* NOTE: never include this header file in user programs. */

__BEGIN_DECLS

/* value map: [ff][inverse of variance] */

__EXPORT bool dzSysCreateMAF(dzSys *sys, double ff);

/* set forgetting-factor based on the cut-off frequency */
__EXPORT void dzSysMAFSetCF(dzSys *sys, double cf, double dt);
/* cut-off frequency */
__EXPORT double dzSysMAFCF(dzSys *sys, double dt);

extern dzSysMethod dz_sys_maf_met;

__END_DECLS

#endif /* __DZ_SYS_FILT_MAF_H__ */
