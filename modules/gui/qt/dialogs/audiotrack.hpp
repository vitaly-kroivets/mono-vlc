/*****************************************************************************
 * audiotrack.hpp : Audio Track Controls
 ****************************************************************************
 * Copyright (C) 2006 the VideoLAN team
 * $Id$
 *
 * Authors: Antoine Lejeune <phytos@via.ecp.fr>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITN#include <QGroupBox>ESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/


#ifndef QVLC_AUDIOTRACK_H_
#define QVLC_AUDIOTRACK_H_ 1

#include "util/qvlcframe.hpp"
#include <QStandardItemModel>
#include "util/singleton.hpp"

#include <QGroupBox>
#include <QSlider>
#include <QLabel>

class QPushButton;

class AudioTrackDialog : public QVLCFrame, public Singleton<AudioTrackDialog>
{
    Q_OBJECT
public:
    void toggleVisible();
private:
    AudioTrackDialog( intf_thread_t * );
    virtual ~AudioTrackDialog();

    bool b_ignore_updates;

    QGroupBox *trackBox[10];
    QSlider *trackSlider[20];
    QLabel *trackLabel[40];
    QLabel *infoLabel[20];

private slots:
    // void update();
    // void add();
    // void del();
    // void clear();
    // void edit( QTreeWidgetItem *item, int column );
    // void extract();
    // void activateItem( QModelIndex index );
    // void updateButtons();

    friend class    Singleton<AudioTrackDialog>;
};

#endif

