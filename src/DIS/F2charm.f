************************************************************************
*
*     F2charm.f:
*
*     This function returns the value of the charm structure function
*     F2c.
*
************************************************************************
      function F2charm(x)
*
      implicit none
*
      include "../commons/grid.h"
      include "../commons/StructureFunctions.h"
      include "../commons/TMC.h"
      include "../commons/TimeLike.h"
**
*     Input Variables
*
      double precision x
**
*     Internal Variables
*
      integer n
      integer alpha
      double precision w_int_gen
      double precision tau,xi
      double precision c1,c2
      double precision tol
      parameter(tol=1d-10)
**
*     Output Variables
*
      double precision F2charm
*
      if(TMC)then
         tau = 1d0 + 4d0 * rhop * x**2
         xi  = 2d0 * x / ( 1d0 + dsqrt(tau) )
*
         c1 = x**2 / xi**2 / tau**1.5d0
         c2 = 6d0 * rhop * x**3 / tau**2
*
         if(xi.lt.xmin(1)-tol.or.xi.gt.xmax+tol)then
            write(6,*) "In F2charm.f:"
            write(6,*) "Invalid value of x =",xi
            call exit(-10)
         endif
         if (xi.lt.xmin(1)) xi = xmin(1)
         if (xi.gt.xmax) xi = 1d0
*
*     Interpolation
*
         F2charm = 0d0
         n = inter_degree(0)
         do alpha=0,nin(0)
            F2charm = F2charm + w_int_gen(n,alpha,xi) 
     1           * ( c1 * F2(4,0,alpha) + c2 * I2(4,0,alpha) )
         enddo
         if(dabs(F2charm).le.1d-14) F2charm = 0d0
      else
         if(x.lt.xmin(1)-tol.or.x.gt.xmax+tol)then
            write(6,*) "In F2charm.f:"
            write(6,*) "Invalid value of x =",x
            call exit(-10)
         endif
         if (x.lt.xmin(1)) x = xmin(1)
         if (x.gt.xmax) x = 1d0
*
*     Interpolation
*
         F2charm = 0d0
         n = inter_degree(0)
         do alpha=0,nin(0)
            F2charm = F2charm + w_int_gen(n,alpha,x) * F2(4,0,alpha)
         enddo
         if(dabs(F2charm).le.1d-14) F2charm = 0d0
      endif
*
      if(Timelike) F2charm = F2charm / x
*
      return
      end
