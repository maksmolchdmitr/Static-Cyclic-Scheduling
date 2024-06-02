/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   CEcoTaskScheduler1Lab_C761620F
 * </сводка>
 *
 * <описание>
 *   Данный исходный код описывает реализацию интерфейсов CEcoTaskScheduler1Lab_C761620F
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#include "IEcoSystem1.h"
#include "IEcoInterfaceBus1.h"
#include "IEcoInterfaceBus1MemExt.h"
#include "CEcoTaskScheduler1Lab.h"
#include "CEcoTask1Lab.h"

/* Выделяем память под один экземпляр */
CEcoTaskScheduler1Lab_C761620F g_xCEcoTaskScheduler1Lab_C761620F = {0};

/*
 *
 * <сводка>
 *   Функция QueryInterface
 * </сводка>
 *
 * <описание>
 *   Функция QueryInterface для интерфейса IEcoTaskScheduler1Lab
 * </описание>
 *
 */
int16_t ECOCALLMETHOD CEcoTaskScheduler1Lab_C761620F_QueryInterface(/* in */ IEcoTaskScheduler1Ptr_t me, /* in */ const UGUID* riid, /* out */ void** ppv) {
    CEcoTaskScheduler1Lab_C761620F* pCMe = (CEcoTaskScheduler1Lab_C761620F*)me;

    /* Проверка указателей */
    if (me == 0 || ppv == 0) {
        return -1;
    }

    /* Проверка и получение запрошенного интерфейса */
    if ( IsEqualUGUID(riid, &IID_IEcoTaskScheduler1) ) {
        *ppv = &pCMe->m_pVTblIScheduler;
        pCMe->m_pVTblIScheduler->AddRef((IEcoTaskScheduler1*)pCMe);
    }
    else if ( IsEqualUGUID(riid, &IID_IEcoUnknown) ) {
        *ppv = &pCMe->m_pVTblIScheduler;
        pCMe->m_pVTblIScheduler->AddRef((IEcoTaskScheduler1*)pCMe);
    }
    else {
        *ppv = 0;
        return -1;
    }
    return 0;
}

/*
 *
 * <сводка>
 *   Функция AddRef
 * </сводка>
 *
 * <описание>
 *   Функция AddRef для интерфейса IEcoTaskScheduler1Lab
 * </описание>
 *
 */
uint32_t ECOCALLMETHOD CEcoTaskScheduler1Lab_C761620F_AddRef(/* in */ IEcoTaskScheduler1Ptr_t me) {
    CEcoTaskScheduler1Lab_C761620F* pCMe = (CEcoTaskScheduler1Lab_C761620F*)me;

    /* Проверка указателя */
    if (me == 0 ) {
        return -1;
    }

    return ++pCMe->m_cRef;
}

/*
 *
 * <сводка>
 *   Функция Release
 * </сводка>
 *
 * <описание>
 *   Функция Release для интерфейса IEcoTaskScheduler1Lab
 * </описание>
 *
 */
uint32_t ECOCALLMETHOD CEcoTaskScheduler1Lab_C761620F_Release(/* in */ IEcoTaskScheduler1Ptr_t me) {
    CEcoTaskScheduler1Lab_C761620F* pCMe = (CEcoTaskScheduler1Lab_C761620F*)me;

    /* Проверка указателя */
    if (me == 0 ) {
        return -1;
    }

    /* Уменьшение счетчика ссылок на компонент */
    --pCMe->m_cRef;

    /* В случае обнуления счетчика, освобождение данных экземпляра */
    if ( pCMe->m_cRef == 0 ) {
        deleteCEcoTaskScheduler1Lab_C761620F((IEcoTaskScheduler1*)pCMe);
        return 0;
    }
    return pCMe->m_cRef;
}

/*
 *
 * <сводка>
 *   Функция Init
 * </сводка>
 *
 * <описание>
 *   Функция
 * </описание>
 *
 */
int16_t ECOCALLMETHOD CEcoTaskScheduler1Lab_C761620F_Init(/*in*/IEcoTaskScheduler1Ptr_t me, /*in*/ IEcoInterfaceBus1Ptr_t pIBus) {
    /*CEcoTaskScheduler1Lab_C761620F* pCMe = (CEcoTaskScheduler1Lab_C761620F*)me;*/

    /* Проверка указателей */
    if (me == 0 || pIBus == 0) {
        return -1;
    }

    return 0;
}

/*
 *
 * <сводка>
 *   Функция NewTask
 * </сводка>
 *
 * <описание>
 *   Функция
 * </описание>
 *
 */
int16_t ECOCALLMETHOD CEcoTaskScheduler1Lab_C761620F_NewTask(/*in*/ IEcoTaskScheduler1Ptr_t me, /*in*/ voidptr_t address, /*in*/ voidptr_t data, /*in*/ uint32_t stackSize, /* out */ IEcoTask1** ppITask) {
    /*CEcoTaskScheduler1Lab_C761620F* pCMe = (CEcoTaskScheduler1Lab_C761620F*)me;*/

    /* Проверка указателей */
    if (me == 0 ) {
        return -1;
    }

    return -1;
}

/*
 *
 * <сводка>
 *   Функция Start
 * </сводка>
 *
 * <описание>
 *   Функция
 * </описание>
 *
 */
int16_t ECOCALLMETHOD CEcoTaskScheduler1Lab_C761620F_Start(/*in*/ IEcoTaskScheduler1Ptr_t me) {
    CEcoTaskScheduler1Lab_C761620F* pCMe = (CEcoTaskScheduler1Lab_C761620F*)me;

    /* Проверка указателей */
    if (me == 0 ) {
        return -1;
    }

    return 0;
}

/*
 *
 * <сводка>
 *   Функция Init
 * </сводка>
 *
 * <описание>
 *   Функция инициализации экземпляра
 * </описание>
 *
 */
int16_t ECOCALLMETHOD initCEcoTaskScheduler1Lab_C761620F(/*in*/ IEcoTaskScheduler1Ptr_t me, /* in */ struct IEcoUnknown *pIUnkSystem) {
    /*CEcoTaskScheduler1Lab_C761620F* pCMe = (CEcoTaskScheduler1Lab_C761620F*)me;*/

    /* Проверка указателей */
    if (me == 0 ) {
        return -1;
    }

    return 0;
}

/* Create Virtual Table IEcoTaskScheduler1Lab */
IEcoTaskScheduler1VTbl g_x155C975395654F85B9AA27D5F377A79EVTbl_C761620F = {
    CEcoTaskScheduler1Lab_C761620F_QueryInterface,
    CEcoTaskScheduler1Lab_C761620F_AddRef,
    CEcoTaskScheduler1Lab_C761620F_Release,
    CEcoTaskScheduler1Lab_C761620F_Init,
    CEcoTaskScheduler1Lab_C761620F_NewTask,
    CEcoTaskScheduler1Lab_C761620F_Start
};




/*
 *
 * <сводка>
 *   Функция Create
 * </сводка>
 *
 * <описание>
 *   Функция создания экземпляра
 * </описание>
 *
 */
int16_t ECOCALLMETHOD createCEcoTaskScheduler1Lab_C761620F(/* in */ IEcoUnknown* pIUnkSystem, /* in */ IEcoUnknown* pIUnkOuter, /* out */ IEcoTaskScheduler1Ptr_t* ppITaskScheduler) {
    int16_t result = -1;
    CEcoTaskScheduler1Lab_C761620F* pCMe = 0;

    /* Проверка указателей */
    if (ppITaskScheduler == 0) {
        return result;
    }

    /* Получение указателя на структуру компонента расположенной в области инициализированных данных */
    pCMe = &g_xCEcoTaskScheduler1Lab_C761620F;

    if (pCMe->m_cRef == 0) {
        /* Установка счетчика ссылок на компонент */
        pCMe->m_cRef = 1;

        /* Создание таблицы функций интерфейса IEcoTaskScheduler1 */
        pCMe->m_pVTblIScheduler = &g_x155C975395654F85B9AA27D5F377A79EVTbl_C761620F;

        result = 0;
    }

    /* Возврат указателя на интерфейс */
    *ppITaskScheduler = (IEcoTaskScheduler1*)pCMe;

    return result;
}

/*
 *
 * <сводка>
 *   Функция Delete
 * </сводка>
 *
 * <описание>
 *   Функция освобождения экземпляра
 * </описание>
 *
 */
void ECOCALLMETHOD deleteCEcoTaskScheduler1Lab_C761620F(/* in */ IEcoTaskScheduler1Ptr_t pITaskScheduler) {
    /*CEcoTaskScheduler1Lab_C761620F* pCMe = (CEcoTaskScheduler1Lab_C761620F*)pITaskScheduler;*/

}
