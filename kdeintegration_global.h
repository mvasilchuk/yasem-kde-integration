#ifndef KDEINTERGATION_GLOBAL_H
#define KDEINTERGATION_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(KDEINTEGRATION_LIBRARY)
#  define KDEINTERGATIONSHARED_EXPORT Q_DECL_EXPORT
#else
#  define KDEINTERGATIONSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // KDEINTERGATION_GLOBAL_H
