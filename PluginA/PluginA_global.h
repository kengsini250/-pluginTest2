#ifndef PLUGINA_GLOBAL_H
#define PLUGINA_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PLUGINA_LIBRARY)
#  define PLUGINA_EXPORT Q_DECL_EXPORT
#else
#  define PLUGINA_EXPORT Q_DECL_IMPORT
#endif

#endif // PLUGINA_GLOBAL_H
