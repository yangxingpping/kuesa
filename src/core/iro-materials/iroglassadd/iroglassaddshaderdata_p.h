
/*
    iroglassaddshaderdata_p.h

    This file is part of Kuesa.

    Copyright (C) 2018-2020 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com
    Author: Paul Lemire <paul.lemire@kdab.com>

    Licensees holding valid proprietary KDAB Kuesa licenses may use this file in
    accordance with the Kuesa Enterprise License Agreement provided with the Software in the
    LICENSE.KUESA.ENTERPRISE file.

    Contact info@kdab.com if any conditions of this licensing are not clear to you.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef KUESA_IROGLASSADDSHADERDATA_P_H
#define KUESA_IROGLASSADDSHADERDATA_P_H


//
//  W A R N I N G
//  -------------
//
// This file is not part of the Kuesa API.  It exists for the convenience
// of other Kuesa classes.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <QVector2D>
#include <QVector3D>
#include <Qt3DRender/QAbstractTexture>
#include <Qt3DRender/QShaderData>

QT_BEGIN_NAMESPACE

namespace Kuesa {

class IroGlassAddShaderData : public Qt3DRender::QShaderData
{
    Q_OBJECT
    Q_PROPERTY(QVector3D normalScaling READ normalScaling WRITE setNormalScaling NOTIFY normalScalingChanged)
    Q_PROPERTY(QVector2D normalDisturb READ normalDisturb WRITE setNormalDisturb NOTIFY normalDisturbChanged)
    Q_PROPERTY(float postVertexColor READ postVertexColor WRITE setPostVertexColor NOTIFY postVertexColorChanged)
    Q_PROPERTY(float postGain READ postGain WRITE setPostGain NOTIFY postGainChanged)
    Q_PROPERTY(float reflectionGain READ reflectionGain WRITE setReflectionGain NOTIFY reflectionGainChanged)
    Q_PROPERTY(Qt3DRender::QAbstractTexture * reflectionMap READ reflectionMap WRITE setReflectionMap NOTIFY reflectionMapChanged)
    Q_PROPERTY(QVector3D reflectionInnerFilter READ reflectionInnerFilter WRITE setReflectionInnerFilter NOTIFY reflectionInnerFilterChanged)
    Q_PROPERTY(QVector3D reflectionOuterFilter READ reflectionOuterFilter WRITE setReflectionOuterFilter NOTIFY reflectionOuterFilterChanged)
    Q_PROPERTY(bool usesReflectionMap READ usesReflectionMap WRITE setUsesReflectionMap NOTIFY usesReflectionMapChanged)
    Q_PROPERTY(bool projectReflectionMap READ projectReflectionMap WRITE setProjectReflectionMap NOTIFY projectReflectionMapChanged)
    Q_PROPERTY(float reflectionInnerAlpha READ reflectionInnerAlpha WRITE setReflectionInnerAlpha NOTIFY reflectionInnerAlphaChanged)
    Q_PROPERTY(float reflectionOuterAlpha READ reflectionOuterAlpha WRITE setReflectionOuterAlpha NOTIFY reflectionOuterAlphaChanged)
    Q_PROPERTY(QVector3D glassInnerFilter READ glassInnerFilter WRITE setGlassInnerFilter NOTIFY glassInnerFilterChanged)
    Q_PROPERTY(QVector3D glassOuterFilter READ glassOuterFilter WRITE setGlassOuterFilter NOTIFY glassOuterFilterChanged)
    Q_PROPERTY(float alphaGain READ alphaGain WRITE setAlphaGain NOTIFY alphaGainChanged)

public:
    explicit IroGlassAddShaderData(Qt3DCore::QNode *parent = nullptr);
    ~IroGlassAddShaderData();
    QVector3D normalScaling() const;
    QVector2D normalDisturb() const;
    float postVertexColor() const;
    float postGain() const;
    float reflectionGain() const;
    Qt3DRender::QAbstractTexture * reflectionMap() const;
    QVector3D reflectionInnerFilter() const;
    QVector3D reflectionOuterFilter() const;
    bool usesReflectionMap() const;
    bool projectReflectionMap() const;
    float reflectionInnerAlpha() const;
    float reflectionOuterAlpha() const;
    QVector3D glassInnerFilter() const;
    QVector3D glassOuterFilter() const;
    float alphaGain() const;

public Q_SLOTS:
    void setNormalScaling(const QVector3D &normalScaling);
    void setNormalDisturb(const QVector2D &normalDisturb);
    void setPostVertexColor(float postVertexColor);
    void setPostGain(float postGain);
    void setReflectionGain(float reflectionGain);
    void setReflectionMap(Qt3DRender::QAbstractTexture * reflectionMap);
    void setReflectionInnerFilter(const QVector3D &reflectionInnerFilter);
    void setReflectionOuterFilter(const QVector3D &reflectionOuterFilter);
    void setUsesReflectionMap(bool usesReflectionMap);
    void setProjectReflectionMap(bool projectReflectionMap);
    void setReflectionInnerAlpha(float reflectionInnerAlpha);
    void setReflectionOuterAlpha(float reflectionOuterAlpha);
    void setGlassInnerFilter(const QVector3D &glassInnerFilter);
    void setGlassOuterFilter(const QVector3D &glassOuterFilter);
    void setAlphaGain(float alphaGain);

Q_SIGNALS:
    void normalScalingChanged(QVector3D);
    void normalDisturbChanged(QVector2D);
    void postVertexColorChanged(float);
    void postGainChanged(float);
    void reflectionGainChanged(float);
    void reflectionMapChanged(Qt3DRender::QAbstractTexture *);
    void reflectionInnerFilterChanged(QVector3D);
    void reflectionOuterFilterChanged(QVector3D);
    void usesReflectionMapChanged(bool);
    void projectReflectionMapChanged(bool);
    void reflectionInnerAlphaChanged(float);
    void reflectionOuterAlphaChanged(float);
    void glassInnerFilterChanged(QVector3D);
    void glassOuterFilterChanged(QVector3D);
    void alphaGainChanged(float);

private:
    QVector3D m_normalScaling;
    QVector2D m_normalDisturb;
    float m_postVertexColor;
    float m_postGain;
    float m_reflectionGain;
    Qt3DRender::QAbstractTexture * m_reflectionMap;
    QVector3D m_reflectionInnerFilter;
    QVector3D m_reflectionOuterFilter;
    bool m_usesReflectionMap;
    bool m_projectReflectionMap;
    float m_reflectionInnerAlpha;
    float m_reflectionOuterAlpha;
    QVector3D m_glassInnerFilter;
    QVector3D m_glassOuterFilter;
    float m_alphaGain;

};

} // namespace Kuesa

QT_END_NAMESPACE

#endif // KUESA_IROGLASSADDSHADERDATA_P_H
