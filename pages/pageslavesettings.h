/*
    Original copyright 2018 Benjamin Vedder	benjamin@vedder.se and the VESC Tool project ( https://github.com/vedderb/vesc_tool )
    Now forked to:
    Danny Bokma github@diebie.nl

    This file is part of BMS Tool.

    ENNOID-BMS Tool is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    ENNOID-BMS Tool is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef PAGESLAVESETTINGS_H
#define PAGESLAVESETTINGS_H

#include <QWidget>
#include "bmsinterface.h"

namespace Ui {
class PageSlaveSettings;
}

class PageSlaveSettings : public QWidget
{
    Q_OBJECT

public:
    explicit PageSlaveSettings(QWidget *parent = 0);
    ~PageSlaveSettings();

    BMSInterface *bms() const;
    void setDieBieMS(BMSInterface *dieBieMS);

private:
    Ui::PageSlaveSettings *ui;
    BMSInterface *mDieBieMS;
};

#endif // PAGESLAVESETTINGS_H
