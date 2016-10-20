/***************************************************************************
   uavstatusbarcoordinateswidget.h
    --------------------------------------
   Date                 : 05.08.2015
   Copyright            : (C) 2015 Denis Rouzaud
   Email                : denis.rouzaud@gmail.com
***************************************************************************
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
***************************************************************************/

#ifndef UAVSTATUSBARCOORDINATESWIDGET_H
#define UAVSTATUSBARCOORDINATESWIDGET_H


class QFont;
class QLabel;
class QLineEdit;
class QTimer;
class QToolButton;
class QValidator;

class QgsMapCanvas;
class QgsPoint;

#include <QWidget>

class APP_EXPORT UavStatusBarCoordinatesWidget : public QWidget
{
    Q_OBJECT

    enum CrsMode
    {
      MapCanvas,
      Custom
    };

  public:
    UavStatusBarCoordinatesWidget( QWidget *parent );

    //! 定义相关联插件的地图画布
    void setMapCanvas( QgsMapCanvas* mapCanvas );

    void setFont( const QFont& myFont );

    void setMouseCoordinatesPrecision( unsigned int precision );

  signals:
    void coordinatesChanged();

  private slots:
    void showMouseCoordinates( const QgsPoint &p );
	//! 视图范围切换
    void extentsViewToggled( bool theFlag );
	//! 根据输入的坐标更新视图，其中隐藏两个恶作剧功能
    void validateCoordinates();
    void dizzy();
    void showExtent();

  private:
    void refreshMapCanvas();

    QLineEdit *mLineEdit;
    QToolButton *mToggleExtentsViewButton;
    //! 在状态栏上显示活动的“坐标/度”
    QLabel *mLabel;

    QValidator *mCoordsEditValidator;
    QTimer *mDizzyTimer;
    QgsMapCanvas* mMapCanvas;

    //! 小数位的数量
    unsigned int mMousePrecisionDecimalPlaces;

};

#endif // UAVSTATUSBARCOORDINATESWIDGET_H
