//
// Generated file, do not edit! Created by nedtool 5.1 from uavnet/routing/manet/base/MeshControlInfo.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __INET__INETMANET_MESHCONTROLINFO_M_H
#define __INET__INETMANET_MESHCONTROLINFO_M_H

#include <omnetpp.h>

// nedtool version check
/*#define MSGC_VERSION 0x0501
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif*/

// cplusplus {{
#include "inet/linklayer/common/Ieee802Ctrl.h"
// }}


namespace inet {
namespace inetmanet {

/**
 * Class generated from <tt>uavnet/routing/manet/base/MeshControlInfo.msg:32</tt> by nedtool.
 * <pre>
 * //
 * // Control structure for communication between LLC and higher layers
 * //
 * class MeshControlInfo extends Ieee802Ctrl
 * {
 *     // Mesh modifications
 *     int inputId;     // used in Mesh network with several mac interfaces
 *     bool previousFix; // Used to indicate if the previous node is fix
 *     int maxHopCollaborative;
 *     bool collaborativeFeedback;
 * }
 * </pre>
 */
class MeshControlInfo : public ::inet::Ieee802Ctrl
{
  protected:
    int inputId;
    bool previousFix;
    int maxHopCollaborative;
    bool collaborativeFeedback;

  private:
    void copy(const MeshControlInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MeshControlInfo&);

  public:
    MeshControlInfo();
    MeshControlInfo(const MeshControlInfo& other);
    virtual ~MeshControlInfo();
    MeshControlInfo& operator=(const MeshControlInfo& other);
    virtual MeshControlInfo *dup() const override {return new MeshControlInfo(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getInputId() const;
    virtual void setInputId(int inputId);
    virtual bool getPreviousFix() const;
    virtual void setPreviousFix(bool previousFix);
    virtual int getMaxHopCollaborative() const;
    virtual void setMaxHopCollaborative(int maxHopCollaborative);
    virtual bool getCollaborativeFeedback() const;
    virtual void setCollaborativeFeedback(bool collaborativeFeedback);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MeshControlInfo& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MeshControlInfo& obj) {obj.parsimUnpack(b);}

} // namespace inetmanet
} // namespace inet

#endif // ifndef __INET__INETMANET_MESHCONTROLINFO_M_H

