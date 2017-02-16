/*
 * Copyright (c) 2017 Elvis Angelaccio <elvis.angelaccio@kde.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#pragma once

#include "abstractaccountmanager.h"

#include <QMap>

class KAccountsManager : public AbstractAccountManager
{
public:
    virtual ~KAccountsManager();

    KGAPI2::AccountPtr account(const QString &accountName) override;
    KGAPI2::AccountPtr refreshAccount(const KGAPI2::AccountPtr &account) override;
    void removeAccount(const QString &accountName) override;
    QSet<QString> accounts() override;

private:
    QMap<QString, KGAPI2::AccountPtr> m_accounts;
};

